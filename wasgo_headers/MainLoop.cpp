/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "MainLoop.h"
void MainLoop::finish(){
	_wasgo_MainLoop_wrapper_finish(wasgo_id);
}
bool MainLoop::idle(float p_delta){
	return (bool) _wasgo_MainLoop_wrapper_idle(wasgo_id, p_delta);
}
void MainLoop::init(){
	_wasgo_MainLoop_wrapper_init(wasgo_id);
}
void MainLoop::input_event(InputEvent p_event){
	_wasgo_MainLoop_wrapper_input_event(wasgo_id, p_event._get_wasgo_id());
}
void MainLoop::input_text(String p_text){

    Variant wasgo_var_text = p_text;
    int wasgo_size_text = String(p_text).size();
    uint8_t wasgo_buffer_text[wasgo_size_text];
    encode_variant(wasgo_var_text, wasgo_buffer_text, wasgo_size_text);
    
	_wasgo_MainLoop_wrapper_input_text(wasgo_id, wasgo_buffer_text, wasgo_size_text);
}
bool MainLoop::iteration(float p_delta){
	return (bool) _wasgo_MainLoop_wrapper_iteration(wasgo_id, p_delta);
}

MainLoop::MainLoop(WasGoId p_wasgo_id) : Object(p_wasgo_id){
}
MainLoop::MainLoop(Object other) : Object(other._get_wasgo_id()){
    wasgo_id = _wasgo_MainLoop_constructor();
}
MainLoop::new_instance(){
    return MainLoop(_wasgo_MainLoop_constructor());
}