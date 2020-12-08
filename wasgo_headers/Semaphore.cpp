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
}
Semaphore::Semaphore():Reference(){
}
Semaphore Semaphore::new_instance(){
    return Semaphore(_wasgo_Semaphore_constructor());
}
WasGoID Semaphore::_get_wasgo_id(){
    return wasgo_id;
}
Semaphore::operator bool(){
    return (bool) wasgo_id;
}
