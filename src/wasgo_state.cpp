#include "wasgo_state.h"
#include "core/io/marshalls.h"
#include "wasgo_runtime.h"

void WasGoState::_initialize() {
	reference_object(this);
	// for (int i = 0; i < properties.size(); i++) {
	// 	Variant var = properties.values()[i];
	// 	switch(var.get_type()){
	// 		case (Variant::OBJECT): {
	// 			Object *obj = var;
	// 			reference_object(obj);
	// 		} break;
	// 		case (Variant::NODE_PATH): {
	// 			Node *node = get_node_or_null(var);
	// 			if (node) {
	// 				reference_object(node);
	// 			}
	// 		} break;
	// 	}
	// }
	if (wasm_script.is_valid()) {
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
}

void WasGoState::_stop() {
	if (exec_env){
		wasm_runtime_destroy_exec_env(exec_env);
	}
	if (module_inst) {
		if (wasm_buffer) wasm_runtime_module_free(module_inst, wasm_buffer);
		wasm_runtime_deinstantiate(module_inst);
	}
	last_id = 0;
	exec_env = nullptr;
	module_inst = nullptr;
	createdObjects.clear();
	createdObjectsReverse.clear();
	referencedObjects.clear();
	referencedObjectsReverse.clear();
}

void WasGoState::_bind_methods() {
	ClassDB::bind_method(D_METHOD("set_wasm_script", "p_wasm_script"), &WasGoState::set_wasm_script);
	ClassDB::bind_method(D_METHOD("get_wasm_script"), &WasGoState::get_wasm_script);
	ClassDB::bind_method(D_METHOD("set_properties", "p_properties"), &WasGoState::set_properties);
	ClassDB::bind_method(D_METHOD("get_properties"), &WasGoState::get_properties);
	ClassDB::bind_method(D_METHOD("set_property", "p_property"), &WasGoState::set_property);
	ClassDB::bind_method(D_METHOD("get_property"), &WasGoState::get_property);
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
		case NOTIFICATION_READY:{
			// TODO: Uncomment this
			// if (!Engine::get_singleton()->is_editor_hint()){ // only run in game
			_stop();
			_initialize();

		} break;
		default:{
		} break;
			// }
	}

	// TODO: Uncomment this
	// if (!Engine::get_singleton()->is_editor_hint()){ // only run in game
	if (notification_callback) {
		uint32_t argv[2] = { 0, p_what }; //argv[0] is the return value
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
	notification_callback = nullptr;
	createdObjects = Dictionary();
	createdObjectsReverse = Dictionary();
	referencedObjects = Dictionary();
	referencedObjectsReverse = Dictionary();
}

WasGoState::~WasGoState(){
	_stop();
}

Variant WasGoState::lookup_object(WasGoID id) {
	if (createdObjectsReverse.has(id)) {
		return createdObjectsReverse[id];
	} else if (referencedObjectsReverse.has(id)) {
		return referencedObjectsReverse[id];
	}
	return Variant();
}
Variant WasGoState::lookup_createdObject(WasGoID id) {
	if (createdObjectsReverse.has(id)) {
		return createdObjectsReverse[id];
	}
	return Variant();
}

Variant WasGoState::lookup_referencedObject(WasGoID id) {
	if (referencedObjectsReverse.has(id)) {
		return referencedObjectsReverse[id];
	}
	return Variant();
}
// Variant *WasGoState::lookup_variant(WasGoID id){
//     if(createdVariantsReverse.has(id)){
// 		return &createdVariantsReverse[id];
// 	}
// 	return nullptr;
// }

WasGoState::WasGoID WasGoState::lookup_wasgo_object(Variant obj){
	if(createdObjects.has(obj)){
		return createdObjects[obj];
	} else if (referencedObjects.has(obj)){
		return referencedObjects[obj];
	}
	return 0;
}
WasGoState::WasGoID WasGoState::lookup_wasgo_createdObject(Variant obj){
	if (createdObjects.has(obj)) {
		return createdObjects[obj];
	}
	return 0;
}
WasGoState::WasGoID WasGoState::lookup_wasgo_referencedObject(Variant obj){
	if (referencedObjects.has(obj)) {
		return referencedObjects[obj];
	}
	return 0;
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
		_stop();
	}
	wasm_script = p_wasm_script;
	_initialize();
}
Ref<WasmResource> WasGoState::get_wasm_script() {
	return wasm_script;
}

void WasGoState::set_properties(Dictionary p_properties) {
	//I don't think you can dynamically change the stack and heap sizes, so we're gonna only change it if the wasm module is not active
	// if (!is_active()) {
		properties = p_properties;
	// }
}
Dictionary WasGoState::get_properties() {
	return properties;
}
void WasGoState::set_property(String key, Variant value) {
	//I don't think you can dynamically change the stack and heap sizes, so we're gonna only change it if the wasm module is not active
	// if (!is_active()) {
		properties[key] = value;
	// }
}
Variant WasGoState::get_property(String key) {
	return properties[key];
}

WasGoState::WasGoID WasGoState::generate_id(){
	last_id++;
	return last_id;
}

WasGoState::WasGoID WasGoState::create_object(Variant obj) {
	WasGoID wasgo_id = 0;
	if (createdObjects.has(obj)) {
		wasgo_id = createdObjects[obj];
	}
	else if (referencedObjects.has(obj)){
		wasgo_id = referencedObjects[obj];
	}
	else {
		wasgo_id = generate_id();
		// createdObjects.set(obj, wasgo_id);
		// createdObjectsReverse.set(wasgo_id, obj);
		createdObjects[obj] = wasgo_id;
		createdObjectsReverse[wasgo_id] = obj;
	}
	return wasgo_id;
}

WasGoState::WasGoID WasGoState::reference_object(Variant obj) {
	WasGoID wasgo_id = 0;
	if (referencedObjects.has(obj)) {
		wasgo_id = referencedObjects[obj];
	} if (createdObjects.has(obj)){
		wasgo_id = createdObjects[obj];
	} else {
		wasgo_id = generate_id();
		// referencedObjects.set(obj, wasgo_id);
		// referencedObjectsReverse.set(wasgo_id, obj);
		referencedObjects[obj] =  wasgo_id;
		referencedObjectsReverse[wasgo_id] = obj;
	}
	return wasgo_id;
}

// WasGoState::WasGoID WasGoState::create_variant(Variant var){
// 	WasGoID wasgo_id = generate_id();
// 	// createdVariants.set(var, wasgo_id);
// 	createdVariantsReverse.set(wasgo_id, var);
// 	return wasgo_id;
// }

// WasGoState::WasGoID WasGoState::create_object(Object obj) {
// 	WasGoID wasgo_id = 0;
// 	if (createdObjects.has(obj.get_instance_id())) {
// 		wasgo_id = createdObjects[wasgo_id];
// 	} else {
// 		wasgo_id = generate_id();
// 		createdObjects.set(obj.get_instance_id(), wasgo_id);
// 		createdObjectsReverse.set(wasgo_id, obj.get_instance_id());
// 	}
// 	return wasgo_id;
// }

// WasGoState::WasGoID WasGoState::reference_object(Object obj) {
// 	return reference_object(obj.get_instance_id());
// }

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

WasGoState::WasGoID WasGoState::handle_return_variant(Variant var){
	// WasGoID id = 0;
	// if(var.is_ref()){
	// 	if(var.get_type() == Variant::OBJECT){
	// 		RefPtr ref = RefPtr(var);
	// 		Object *obj = (Object *)ref.get_data();
	// 		id = reference_object(obj);
	// 	} else {
	// 		//We shouldn't be able to get here
	// 		printf("ERROR: unexpected ref type");
	// 	}
	// } else {
	// 	// if (var.get_type() == Variant::OBJECT) {
	// 	// 	Object *obj = (Object *)var;
	// 	// 	if (obj) {
	// 	// 		id = create_object(obj);
	// 	// 	}
	// 	// } else {
	// 	// 	id = create_variant(var);
	// 	// }
	// 	id = create_object(var);
	// }
	// return id;
	return create_object(var);
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

WasGoState::WasGoID _wasgo_this_node(wasm_exec_env_t p_exec_env) {
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	if(state){
		return state->lookup_wasgo_object(state);
	}
	return 0;
}

int _wasgo_get_property_bool(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	return (int) state->get_property(name);
}
void _wasgo_set_property_bool(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, int value){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	state->set_property(name, value);
}

int _wasgo_get_property_int(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	int value = state->get_property(name);
	return (int)state->get_property(name);
}
void _wasgo_set_property_int(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, int value){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	state->set_property(name, value);
}

float _wasgo_get_property_float(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	return (float)state->get_property(name);
}
void _wasgo_set_property_float(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, float value){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	state->set_property(name, value);
}

void _wasgo_get_property_string(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, uint8_t *value, int value_size){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	String ret = state->get_property(name);
	encode_variant(ret, value, value_size);
}
void _wasgo_set_property_string(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, uint8_t *value, int value_size){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	Variant value_var;
	decode_variant(value_var, value, value_size);
	state->set_property(name, value_var);
}

void _wasgo_get_property_vector2(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, uint8_t *value, int value_size){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	Vector2 ret = state->get_property(name);
	encode_variant(ret, value, value_size);
}
void _wasgo_set_property_vector2(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, uint8_t *value, int value_size) {
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	Variant value_var;
	decode_variant(value_var, value, value_size);
	state->set_property(name, value_var);
}

void _wasgo_get_property_rect2(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, uint8_t *value, int value_size){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	Rect2 ret = state->get_property(name);
	encode_variant(ret, value, value_size);
}
void _wasgo_set_property_rect2(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, uint8_t *value, int value_size) {
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	Variant value_var;
	decode_variant(value_var, value, value_size);
	state->set_property(name, value_var);
}

void _wasgo_get_property_vector3(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, uint8_t *value, int value_size){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	Vector3 ret = state->get_property(name);
	encode_variant(ret, value, value_size);
}
void _wasgo_set_property_vector3(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, uint8_t *value, int value_size) {
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	Variant value_var;
	decode_variant(value_var, value, value_size);
	state->set_property(name, value_var);
}

void _wasgo_get_property_transform2d(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, uint8_t *value, int value_size){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	Transform2D ret = state->get_property(name);
	encode_variant(ret, value, value_size);
}
void _wasgo_set_property_transform2d(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, uint8_t *value, int value_size) {
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	Variant value_var;
	decode_variant(value_var, value, value_size);
	state->set_property(name, value_var);
}

void _wasgo_get_property_plane(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, uint8_t *value, int value_size){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	Plane ret = state->get_property(name);
	encode_variant(ret, value, value_size);
}
void _wasgo_set_property_plane(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, uint8_t *value, int value_size) {
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	Variant value_var;
	decode_variant(value_var, value, value_size);
	state->set_property(name, value_var);
}

void _wasgo_get_property_quat(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, uint8_t *value, int value_size){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	Quat ret = state->get_property(name);
	encode_variant(ret, value, value_size);
}
void _wasgo_set_property_quat(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, uint8_t *value, int value_size) {
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	Variant value_var;
	decode_variant(value_var, value, value_size);
	state->set_property(name, value_var);
}

void _wasgo_get_property_basis(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, uint8_t *value, int value_size){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	Basis ret = state->get_property(name);
	encode_variant(ret, value, value_size);
}
void _wasgo_set_property_basis(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, uint8_t *value, int value_size) {
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	Variant value_var;
	decode_variant(value_var, value, value_size);
	state->set_property(name, value_var);
}

void _wasgo_get_property_aabb(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, uint8_t *value, int value_size){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	AABB ret = state->get_property(name);
	encode_variant(ret, value, value_size);
}
void _wasgo_set_property_aabb(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, uint8_t *value, int value_size) {
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	Variant value_var;
	decode_variant(value_var, value, value_size);
	state->set_property(name, value_var);
}

void _wasgo_get_property_transform(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, uint8_t *value, int value_size){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	Transform ret = state->get_property(name);
	encode_variant(ret, value, value_size);
}
void _wasgo_set_property_transform(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, uint8_t *value, int value_size) {
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	Variant value_var;
	decode_variant(value_var, value, value_size);
	state->set_property(name, value_var);
}

void _wasgo_get_property_color(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, uint8_t *value, int value_size){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	Color ret = state->get_property(name);
	encode_variant(ret, value, value_size);
}
void _wasgo_set_property_color(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, uint8_t *value, int value_size) {
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	Variant value_var;
	decode_variant(value_var, value, value_size);
	state->set_property(name, value_var);
}

void _wasgo_get_property_nodepath(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, uint8_t *value, int value_size){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	NodePath ret = state->get_property(name);
	encode_variant(ret, value, value_size);
}
void _wasgo_set_property_nodepath(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, uint8_t *value, int value_size) {
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	Variant value_var;
	decode_variant(value_var, value, value_size);
	state->set_property(name, value_var);
}

WasGoState::WasGoID _wasgo_get_property_object(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	Object *ret = state->get_property(name);
	return state->lookup_wasgo_object(ret);
}
void _wasgo_set_property_object(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size, WasGoState::WasGoID p_wasgo_id) {
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(p_exec_env);
	Variant name = String();
	decode_variant(name, property_name, property_name_size);
	Object *obj = state->lookup_object(p_wasgo_id);
	if (obj) {
		state->set_property(name, obj);
	}
}