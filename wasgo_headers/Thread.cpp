/* THIS FILE IS GENERATED */
#include "Thread.h"
String Thread::get_id(){
	return String::from_wasgo_id(_wasgo_Thread_wrapper_get_id(wasgo_id));
}
bool Thread::is_active(){
	return (bool) _wasgo_Thread_wrapper_is_active(wasgo_id));
}
Error Thread::start(Object p_instance, String p_method, Variant p_userdata = (Variant) "", Thread::Priority p_priority = (Thread::Priority) 1){
	return Error::from_wasgo_id(_wasgo_Thread_wrapper_start(wasgo_id, ((Variant) instance).get_wasgo_id(), ((Variant) method).get_wasgo_id(), ((Variant) userdata).get_wasgo_id(), ((Variant) priority).get_wasgo_id()));
}
Variant Thread::wait_to_finish(){
	return Variant::from_wasgo_id(_wasgo_Thread_wrapper_wait_to_finish(wasgo_id));
}

Thread::Thread(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
Thread::~Thread(){
}