/* THIS FILE IS GENERATED */
#include "HashingContext.h"
PoolByteArray HashingContext::finish(){
	return PoolByteArray::from_wasgo_id(_wasgo_HashingContext_wrapper_finish(wasgo_id));
}
Error HashingContext::start(HashingContext::HashType p_type){
	return Error::from_wasgo_id(_wasgo_HashingContext_wrapper_start(wasgo_id, ((Variant) type).get_wasgo_id()));
}
Error HashingContext::update(PoolByteArray p_chunk){
	return Error::from_wasgo_id(_wasgo_HashingContext_wrapper_update(wasgo_id, ((Variant) chunk).get_wasgo_id()));
}

HashingContext::HashingContext(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
HashingContext::~HashingContext(){
}