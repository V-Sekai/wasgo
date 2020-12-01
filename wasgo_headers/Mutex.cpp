/* THIS FILE IS GENERATED */
#include "Mutex.h"
void Mutex::lock(){
	_wasgo_Mutex_wrapper_lock(wasgo_id);
}
Error Mutex::try_lock(){
	return Error::from_wasgo_id(_wasgo_Mutex_wrapper_try_lock(wasgo_id));
}
void Mutex::unlock(){
	_wasgo_Mutex_wrapper_unlock(wasgo_id);
}