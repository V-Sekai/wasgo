#include "core/os/file_access.h"
#include "wasgo_state.h"

//TEMP
//TODO: Actually make a singleton
wasm_module_t wasm_singleton_load_module(String script_path){
    //start wasm runtime and read a script file from a path
    //In the real singleton, only one runtime would ever run
    //in this temp code we make new one every timewasm_module_t module = NULL;
	wasm_module_t module = NULL;
	char error_buf[128];
	char *buffer = nullptr;
	uint32_t buf_size;

	Error err;
	FileAccess *file = FileAccess::open(script_path, FileAccess::READ, &err);
	if (err != OK) {
		printf("We couldnt read the file: %s\n", script_path);
        return nullptr;
	}
	buffer = (char *)malloc(file->get_len());
	buf_size = file->get_len();
	file->get_buffer((uint8_t *)buffer, file->get_len());
	file->close();

	if (!buffer) {
		printf("Open wasm app file [%s] failed.\n", script_path);
		if (buffer) free(buffer);
        return nullptr;
	}

	return wasm_runtime_load((uint8_t *)buffer, buf_size, error_buf, sizeof(error_buf));
}


void WasGoState::_initialize() {
	module = wasm_singleton_load_module(script);
	char error_buf[128];
	module_inst = wasm_runtime_instantiate(module,
			stack_size,
			heap_size,
			error_buf,
			sizeof(error_buf));
	exec_env = wasm_runtime_create_exec_env(module_inst, stack_size);
	wasm_runtime_set_user_data(exec_env, this);
}

void WasGoState::_bind_methods() {
	ADD_GROUP("script", "script_");
	ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "script_script", PROPERTY_HINT_RESOURCE_TYPE, "Wasm"), "set_script", "get_script");
	ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "script_properties", PROPERTY_HINT_NONE, ""), "set_properties", "get_properties");

	ADD_GROUP("runtime", "runtime_");
	ADD_PROPERTY(PropertyInfo(Variant::REAL, "runtime_stack_size", PROPERTY_HINT_LENGTH, "8192"), "set_stack_size", "get_stack_size");
	ADD_PROPERTY(PropertyInfo(Variant::REAL, "runtime_heap_size", PROPERTY_HINT_LENGTH, "8192"), "set_heap_size", "get_heap_size");
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
	} else {
		return nullptr;
	}
}

Object *WasGoState::lookup_referencedObject(WasGoID id) {
	if (referencedObjectsReverse.has(id)) {
		return ObjectDB::get_instance(referencedObjectsReverse[id]);
	} else {
		return nullptr;
	}
}
Array WasGoState::lookup_array(WasGoID id){
    if(referencedArraysReverse.has(id)){
		return referencedArraysReverse[id];
	}
}
Dictionary WasGoState::lookup_dictionary(WasGoID id){
    if(referencedDictionaryReverse.has(id)){
		return referencedDictionaryReverse[id];
	}
}

bool WasGoState::is_active(){
	return module_inst && exec_env;
}

void WasGoState::set_stack_size(uint32_t p_stack_size){
    //I don't think you can dynamically change the stack and heap sizes, so we're gonna only change it if the wasm module is not active
	if (!is_active()) {
		stack_size = p_stack_size;
	}
}
uint32_t WasGoState::get_stack_size(){
	return stack_size;
}

void WasGoState::set_heap_size(uint32_t p_heap_size){
    //I don't think you can dynamically change the stack and heap sizes, so we're gonna only change it if the wasm module is not active
	if (!is_active()) {
	    heap_size = p_heap_size;
    }
}
uint32_t WasGoState::get_heap_size(){
	return heap_size;
}


void WasGoState::set_script(String p_script) {
	//Only change it if the wasm module is not active
	if (!is_active()) {
		script = p_script;
	}
}
String WasGoState::get_script() {
	return script;
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