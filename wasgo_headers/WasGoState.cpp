/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "WasGoState.h"
int WasGoState::get_heap_size(){
	return (int) _wasgo_WasGoState_wrapper_get_heap_size(wasgo_id);
}
Dictionary WasGoState::get_properties(){
	return Dictionary(_wasgo_WasGoState_wrapper_get_properties(wasgo_id));
}
Variant WasGoState::get_property(String p_arg0){

    Variant wasgo_var_arg0 = p_arg0;
    int wasgo_size_arg0 = String(p_arg0).size();
    uint8_t wasgo_buffer_arg0[wasgo_size_arg0];
    encode_variant(wasgo_var_arg0, wasgo_buffer_arg0, wasgo_size_arg0);
    
	return Variant(_wasgo_WasGoState_wrapper_get_property(wasgo_id, wasgo_buffer_arg0, wasgo_size_arg0));
}
int WasGoState::get_stack_size(){
	return (int) _wasgo_WasGoState_wrapper_get_stack_size(wasgo_id);
}
WasmResource WasGoState::get_wasm_script(){
	return WasmResource(_wasgo_WasGoState_wrapper_get_wasm_script(wasgo_id));
}
void WasGoState::set_heap_size(int p_p_heap_size){
	_wasgo_WasGoState_wrapper_set_heap_size(wasgo_id, p_p_heap_size);
}
void WasGoState::set_properties(Dictionary p_p_properties){
	_wasgo_WasGoState_wrapper_set_properties(wasgo_id, p_p_properties._get_wasgo_id());
}
void WasGoState::set_property(String p_p_property, Variant p_arg1){

    Variant wasgo_var_p_property = p_p_property;
    int wasgo_size_p_property = String(p_p_property).size();
    uint8_t wasgo_buffer_p_property[wasgo_size_p_property];
    encode_variant(wasgo_var_p_property, wasgo_buffer_p_property, wasgo_size_p_property);
    
	_wasgo_WasGoState_wrapper_set_property(wasgo_id, wasgo_buffer_p_property, wasgo_size_p_property, p_arg1._get_wasgo_id());
}
void WasGoState::set_stack_size(int p_p_stack_size){
	_wasgo_WasGoState_wrapper_set_stack_size(wasgo_id, p_p_stack_size);
}
void WasGoState::set_wasm_script(WasmResource p_p_wasm_script){
	_wasgo_WasGoState_wrapper_set_wasm_script(wasgo_id, p_p_wasm_script._get_wasgo_id());
}

WasGoState::WasGoState(WasGoID p_wasgo_id) : Node(p_wasgo_id){
}
WasGoState::WasGoState(Node other) : Node(other._get_wasgo_id()){
}
WasGoState::WasGoState():Node(){
}
WasGoState WasGoState::new_instance(){
    return WasGoState(_wasgo_WasGoState_constructor());
}
WasGoID WasGoState::_get_wasgo_id(){
    return wasgo_id;
}
WasGoState::operator bool(){
    return (bool) wasgo_id;
}
