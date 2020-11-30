/* THIS FILE IS GENERATED */
#include "WasGoState.h"
int WasGoState::get_heap_size(){
	return (int) _wasgo_WasGoState_wrapper_get_heap_size(wasgo_id));
}
Dictionary WasGoState::get_properties(){
	return Dictionary::from_wasgo_id(_wasgo_WasGoState_wrapper_get_properties(wasgo_id));
}
int WasGoState::get_stack_size(){
	return (int) _wasgo_WasGoState_wrapper_get_stack_size(wasgo_id));
}
WasmResource WasGoState::get_wasm_script(){
	return WasmResource::from_wasgo_id(_wasgo_WasGoState_wrapper_get_wasm_script(wasgo_id));
}
void WasGoState::set_heap_size(int p_p_heap_size){
	_wasgo_WasGoState_wrapper_set_heap_size(wasgo_id, p_heap_size);
}
void WasGoState::set_properties(Dictionary p_p_properties){
	_wasgo_WasGoState_wrapper_set_properties(wasgo_id, ((Variant) p_properties).get_wasgo_id());
}
void WasGoState::set_stack_size(int p_p_stack_size){
	_wasgo_WasGoState_wrapper_set_stack_size(wasgo_id, p_stack_size);
}
void WasGoState::set_wasm_script(WasmResource p_p_wasm_script){
	_wasgo_WasGoState_wrapper_set_wasm_script(wasgo_id, ((Variant) p_wasm_script).get_wasgo_id());
}

WasGoState::WasGoState(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
WasGoState::~WasGoState(){
}