/* THIS FILE IS GENERATED */
#include "Semaphore.h"
Error Semaphore::post(){
	return Error::from_wasgo_id(_wasgo_Semaphore_wrapper_post(wasgo_id));
}
Error Semaphore::wait(){
	return Error::from_wasgo_id(_wasgo_Semaphore_wrapper_wait(wasgo_id));
}

Semaphore::Semaphore(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
Semaphore::~Semaphore(){
}