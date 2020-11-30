#include "core/os/file_access.h"
#include "wasgo_state.h"
#include "wasgo_runtime.h"

void WasGoState::_initialize() {
	module = WasGoRuntime::get_singleton()->load_module(wasm_script);
	if (module) {
		char error_buf[128];
		module_inst = wasm_runtime_instantiate(module,
				stack_size,
				heap_size,
				error_buf,
				sizeof(error_buf));
		exec_env = wasm_runtime_create_exec_env(module_inst, stack_size);
		wasm_runtime_set_user_data(exec_env, this);

		if (!(notification_callback = wasm_runtime_lookup_function(module_inst, "_notification", NULL))) {
			printf("The notification callback is not found in the wasm script\n");
		}
	} else {
		printf("WASM FAILED TO LOAD");
	}
}

void WasGoState::_bind_methods() {
	ClassDB::bind_method(D_METHOD("set_wasm_script", "p_wasm_script"), &WasGoState::set_wasm_script);
	ClassDB::bind_method(D_METHOD("get_wasm_script"), &WasGoState::get_wasm_script);
	ClassDB::bind_method(D_METHOD("set_properties", "p_properties"), &WasGoState::set_properties);
	ClassDB::bind_method(D_METHOD("get_properties"), &WasGoState::get_properties);
	ClassDB::bind_method(D_METHOD("set_stack_size", "p_stack_size"), &WasGoState::set_stack_size);
	ClassDB::bind_method(D_METHOD("get_stack_size"), &WasGoState::get_stack_size);
	ClassDB::bind_method(D_METHOD("set_heap_size", "p_heap_size"), &WasGoState::set_heap_size);
	ClassDB::bind_method(D_METHOD("get_heap_size"), &WasGoState::get_heap_size);

	ADD_GROUP("script", "script_");
	ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "script_binary", PROPERTY_HINT_RESOURCE_TYPE, "WasmResource"), "set_wasm_script", "get_wasm_script");
	ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "script_properties", PROPERTY_HINT_NONE, ""), "set_properties", "get_properties");

	ADD_GROUP("runtime", "runtime_");
	ADD_PROPERTY(PropertyInfo(Variant::INT, "runtime_stack_size", PROPERTY_HINT_NONE, ""), "set_stack_size", "get_stack_size");
	ADD_PROPERTY(PropertyInfo(Variant::INT, "runtime_heap_size", PROPERTY_HINT_NONE, ""), "set_heap_size", "get_heap_size");
}

void WasGoState::_validate_property(PropertyInfo &property) const{

}
void WasGoState::_notification(int p_what){
	switch (p_what) {
		case NOTIFICATION_READY:
			// TODO: Uncomment this
			// if (!Engine::get_singleton()->is_editor_hint()){ // only run in game
				_initialize();
			// }
	}

	// TODO: Uncomment this
	// if (!Engine::get_singleton()->is_editor_hint()){ // only run in game
		if (notification_callback) {
			uint32_t argv[2] = {0, p_what};//argv[0] is the return value
			if (!wasm_runtime_call_wasm(exec_env, notification_callback, 1, argv)) {
				printf("call wasm notification callback failed. %s\n", wasm_runtime_get_exception(module_inst));
			}
		}
	// }

	// pass 4 elements for function arguments
	
}

WasGoState::WasGoState() {
	properties = {};
	stack_size = 8192;
	heap_size = 8192;	
}

WasGoState::~WasGoState(){
	if (exec_env) wasm_runtime_destroy_exec_env(exec_env);
	if (module_inst) {
		if (wasm_buffer) wasm_runtime_module_free(module_inst, wasm_buffer);
		wasm_runtime_deinstantiate(module_inst);
	}
	if (module) wasm_runtime_unload(module);
}

Object *WasGoState::lookup_object(WasGoID id) {
	if (createdObjectsReverse.has(id)) {
		return ObjectDB::get_instance(createdObjectsReverse[id]);
	} else if (referencedObjectsReverse.has(id)) {
		return ObjectDB::get_instance(referencedObjectsReverse[id]);
	}
	return nullptr;
}
Object *WasGoState::lookup_createdObject(WasGoID id) {
	if (createdObjectsReverse.has(id)) {
		return ObjectDB::get_instance(createdObjectsReverse[id]);
	}
	return nullptr;
}

Object *WasGoState::lookup_referencedObject(WasGoID id) {
	if (referencedObjectsReverse.has(id)) {
		return ObjectDB::get_instance(referencedObjectsReverse[id]);
	}
	return nullptr;
}
Variant *WasGoState::lookup_variant(WasGoID id){
    if(createdVariantsReverse.has(id)){
		return &createdVariantsReverse[id];
	}
	return nullptr;
}

bool WasGoState::is_active(){
	return module_inst && exec_env;
}

void WasGoState::set_stack_size(int p_stack_size){
    //I don't think you can dynamically change the stack and heap sizes, so we're gonna only change it if the wasm module is not active
	if (!is_active()) {
		stack_size = p_stack_size;
	}
}
int WasGoState::get_stack_size(){
	return stack_size;
}

void WasGoState::set_heap_size(int p_heap_size){
    //I don't think you can dynamically change the stack and heap sizes, so we're gonna only change it if the wasm module is not active
	if (!is_active()) {
	    heap_size = p_heap_size;
    }
}
int WasGoState::get_heap_size(){
	return heap_size;
}


void WasGoState::set_wasm_script(Ref<WasmResource> p_wasm_script) {
	//Only change it if the wasm module is not active
	if (!is_active()) {
		wasm_script = p_wasm_script;
	}
}
Ref<WasmResource> WasGoState::get_wasm_script() {
	return wasm_script;
}

void WasGoState::set_properties(Dictionary p_properties) {
	//I don't think you can dynamically change the stack and heap sizes, so we're gonna only change it if the wasm module is not active
	if (!is_active()) {
		properties = p_properties;
	}
}
Dictionary WasGoState::get_properties() {
	return properties;
}

WasGoState::WasGoID WasGoState::generate_id(){
	last_id++;
	return last_id;
}

WasGoState::WasGoID WasGoState::create_object(ObjectID obj_id) {
	WasGoID wasgo_id = 0;
	if (createdObjects.has(obj_id)) {
		wasgo_id = createdObjects[wasgo_id];
	} else {
		wasgo_id = generate_id();
		createdObjects.set(obj_id, wasgo_id);
		createdObjectsReverse.set(wasgo_id, obj_id);
	}
	return wasgo_id;
}

WasGoState::WasGoID WasGoState::reference_object(ObjectID obj_id) {
	WasGoID wasgo_id = 0;
	if (referencedObjects.has(obj_id)) {
		wasgo_id = referencedObjects[wasgo_id];
	} else {
		wasgo_id = generate_id();
		referencedObjects.set(obj_id, wasgo_id);
		referencedObjectsReverse.set(wasgo_id, obj_id);
	}
	return wasgo_id;
}

WasGoState::WasGoID WasGoState::create_variant(Variant var){
	WasGoID wasgo_id = generate_id();
	// createdVariants.set(var, wasgo_id);
	createdVariantsReverse.set(wasgo_id, var);
	return wasgo_id;
}

WasGoState::WasGoID WasGoState::create_object(Object obj) {
	WasGoID wasgo_id = 0;
	if (createdObjects.has(obj.get_instance_id())) {
		wasgo_id = createdObjects[wasgo_id];
	} else {
		wasgo_id = generate_id();
		createdObjects.set(obj.get_instance_id(), wasgo_id);
		createdObjectsReverse.set(wasgo_id, obj.get_instance_id());
	}
	return wasgo_id;
}

WasGoState::WasGoID WasGoState::reference_object(Object obj) {
	WasGoID wasgo_id = 0;
	if (referencedObjects.has(obj.get_instance_id())) {
		wasgo_id = referencedObjects[wasgo_id];
	} else {
		wasgo_id = generate_id();
		referencedObjects.set(obj.get_instance_id(), wasgo_id);
		referencedObjectsReverse.set(wasgo_id, obj.get_instance_id());
	}
	return wasgo_id;
}

// WasGoState::WasGoID WasGoState::reference_object(Ref<Object> ref) {
// 	WasGoID wasgo_id = 0;
// 	//TODO: Figure out how to handle this case
// 	// if (referencedObjects.has(obj_id)) {
// 	// 	wasgo_id = referencedObjects[wasgo_id];
// 	// } else {
// 	// 	wasgo_id = generate_id();
// 	// 	referencedObjects.set(obj_id, wasgo_id);
// 	// 	referencedObjectsReverse.set(wasgo_id, obj_id);
// 	// }
// 	return wasgo_id;
// }

WasGoState::WasGoID WasGoState::create_object(Object *obj) {
	//because we're receiving a pointer let's assume we're not responsible for cleaning up the object, so let's use a reference instead
	return reference_object(obj);
}

WasGoState::WasGoID WasGoState::reference_object(Object *obj) {
	//just dereference it for now
	return reference_object(obj->get_instance_id());
}

WasGoState::WasGoID WasGoState::handle_return_variant(Variant var){
	WasGoID id = 0;
	if(var.is_ref()){
		if(var.get_type() == Variant::OBJECT){
			RefPtr ref = RefPtr(var);
			Object *obj = (Object *)ref.get_data();
			id = reference_object(obj->get_instance_id());
		} else {
			//We shouldn't be able to get here
			printf("ERROR: unexpected ref type");
		}
	} else {
		if (var.get_type() == Variant::OBJECT) {
			Object *obj = (Object *)&var;
			id = create_object(obj->get_instance_id());
		} else {
			id = create_variant(var);
		}
	}
	return id;
}

//Regular Node Callbacks
// void WasGoState::_enter_tree(){
//     if(is_active()){
//         call_wasm_function("_enter_tree");
//     }
// }
// void WasGoState::_exit_tree(){
//     if(is_active()){
//         call_wasm_function("_exit_tree");
//     }
// }
// String WasGoState::_get_configuration_warning(){
//     if(is_active()){
//         call_wasm_function("_get_configuration_warning");
//     }
// }
// void WasGoState::_input(InputEvent event){
//     //

//     if(is_active()){
//         call_wasm_function("_input");
//     }
// }
// void WasGoState::_physics_process(float delta){
//     if(is_active()){
//         call_wasm_function("_physics_process");
//     }
// }
// void WasGoState::_process(float delta){
//     if(is_active()){
//         call_wasm_function("_process");
//     }
// }
// void WasGoState::_ready(){
//     if(is_active()){
//         call_wasm_function("_ready");
//     }
// }
// void WasGoState::_unhandled_input(InputEvent event){
//     if(is_active()){
//         call_wasm_function("_unhandled_input");
//     }
// }
// void WasGoState::_unhandled_key_input(InputEventKey event){
//     if(is_active()){
//         call_wasm_function("_unhandled_key_input");
//     }
// }