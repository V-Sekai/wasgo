/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "WasmResource.h"
PoolByteArray WasmResource::get_buf(){
	return PoolByteArray(_wasgo_WasmResource_wrapper_get_buf(wasgo_id));
}

WasmResource::WasmResource(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
WasmResource::WasmResource(Resource other) : Resource(other._get_wasgo_id()){
}
WasmResource::WasmResource():Resource(){
}
WasmResource WasmResource::new_instance(){
    return WasmResource(_wasgo_WasmResource_constructor());
}
WasGoID WasmResource::_get_wasgo_id(){
    return wasgo_id;
}
WasmResource::operator bool(){
    return (bool) wasgo_id;
}
