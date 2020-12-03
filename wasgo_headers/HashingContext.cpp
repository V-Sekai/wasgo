/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "HashingContext.h"
PoolByteArray HashingContext::finish(){
	return PoolByteArray(_wasgo_HashingContext_wrapper_finish(wasgo_id));
}
Error HashingContext::start(HashingContext::HashType p_type){
	return Error(_wasgo_HashingContext_wrapper_start(wasgo_id, p_type._get_wasgo_id()));
}
Error HashingContext::update(PoolByteArray p_chunk){
	return Error(_wasgo_HashingContext_wrapper_update(wasgo_id, p_chunk._get_wasgo_id()));
}

HashingContext::HashingContext(WasGoId p_wasgo_id) : Reference(p_wasgo_id){
}
HashingContext::HashingContext(){
    wasgo_id = _wasgo_HashingContext_constructor();
}
HashingContext::~HashingContext(){
    _wasgo_HashingContext_destructor(wasgo_id);
}