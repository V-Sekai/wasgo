/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "WasmResource.h"
PoolByteArray WasmResource::get_buf(){
	return PoolByteArray(_wasgo_WasmResource_wrapper_get_buf(wasgo_id));
}

WasmResource::WasmResource(WasGoId p_wasgo_id) : Resource(p_wasgo_id){
}
WasmResource::WasmResource(){
    wasgo_id = _wasgo_WasmResource_constructor();
}
WasmResource::~WasmResource(){
    _wasgo_WasmResource_destructor(wasgo_id);
}