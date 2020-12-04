/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Thread.h"
String Thread::get_id(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Thread_wrapper_get_id(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
bool Thread::is_active(){
	return (bool) _wasgo_Thread_wrapper_is_active(wasgo_id);
}
Error Thread::start(Object p_instance, String p_method, Variant p_userdata = (Variant) "", Thread::Priority p_priority = (Thread::Priority) 1){

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    
	return Error(_wasgo_Thread_wrapper_start(wasgo_id, p_instance._get_wasgo_id(), wasgo_buffer_method, wasgo_size_method, p_userdata._get_wasgo_id(), p_priority._get_wasgo_id()));
}
Variant Thread::wait_to_finish(){
	return Variant(_wasgo_Thread_wrapper_wait_to_finish(wasgo_id));
}

Thread::Thread(WasGoId p_wasgo_id) : Reference(p_wasgo_id){
}
Thread::Thread(Reference other) : Reference(other._get_wasgo_id()){
    wasgo_id = _wasgo_Thread_constructor();
}
Thread::new_instance(){
    return Thread(_wasgo_Thread_constructor());
}