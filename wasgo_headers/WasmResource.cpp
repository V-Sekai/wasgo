/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "WasmResource.h"
PoolByteArray WasmResource::get_buf(){
	return PoolByteArray(_wasgo_WasmResource_wrapper_get_buf(wasgo_id));
}

WasmResource::WasmResource(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
WasmResource::WasmResource(Resource other) : Resource(other._get_wasgo_id()){
    wasgo_id = _wasgo_WasmResource_constructor();
}
WasmResource::new_instance(){
    return WasmResource(_wasgo_WasmResource_constructor());
}