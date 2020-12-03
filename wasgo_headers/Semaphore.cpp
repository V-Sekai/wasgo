/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Semaphore.h"
Error Semaphore::post(){
	return Error(_wasgo_Semaphore_wrapper_post(wasgo_id));
}
Error Semaphore::wait(){
	return Error(_wasgo_Semaphore_wrapper_wait(wasgo_id));
}

Semaphore::Semaphore(WasGoId p_wasgo_id) : Reference(p_wasgo_id){
}
Semaphore::Semaphore(){
    wasgo_id = _wasgo_Semaphore_constructor();
}
Semaphore::~Semaphore(){
    _wasgo_Semaphore_destructor(wasgo_id);
}