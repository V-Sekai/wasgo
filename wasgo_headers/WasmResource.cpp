/* THIS FILE IS GENERATED */
#include "WasmResource.h"
PoolByteArray WasmResource::get_buf(){
	return PoolByteArray::from_wasgo_id(_wasgo_WasmResource_wrapper_get_buf(wasgo_id));
}

WasmResource::WasmResource(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
WasmResource::~WasmResource(){
}