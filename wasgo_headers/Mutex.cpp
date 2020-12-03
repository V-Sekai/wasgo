/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Mutex.h"
void Mutex::lock(){
	_wasgo_Mutex_wrapper_lock(wasgo_id);
}
Error Mutex::try_lock(){
	return Error(_wasgo_Mutex_wrapper_try_lock(wasgo_id));
}
void Mutex::unlock(){
	_wasgo_Mutex_wrapper_unlock(wasgo_id);
}

Mutex::Mutex(WasGoId p_wasgo_id) : Reference(p_wasgo_id){
}
Mutex::Mutex(){
    wasgo_id = _wasgo_Mutex_constructor();
}
Mutex::~Mutex(){
    _wasgo_Mutex_destructor(wasgo_id);
}