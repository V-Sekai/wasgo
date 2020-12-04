/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Semaphore.h"
Error Semaphore::post(){
	return Error(_wasgo_Semaphore_wrapper_post(wasgo_id));
}
Error Semaphore::wait(){
	return Error(_wasgo_Semaphore_wrapper_wait(wasgo_id));
}

Semaphore::Semaphore(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
Semaphore::Semaphore(Reference other) : Reference(other._get_wasgo_id()){
    wasgo_id = _wasgo_Semaphore_constructor();
}
Semaphore::new_instance(){
    return Semaphore(_wasgo_Semaphore_constructor());
}