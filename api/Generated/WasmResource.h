/* THIS FILE IS GENERATED */
#ifndef WASMRESOURCE_H
#define WASMRESOURCE_H

#include "wasgo/wasgoid.h"

#include "Resource.h"
#include "Variant.h"
class WasmResource : public Resource{
public:
PoolByteArray get_buf();

protected:
public:
explicit WasmResource(WasGoID p_wasgo_id);
explicit WasmResource(Resource other);
WasmResource();
WasmResource new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_WasmResource_wrapper_get_buf(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_WasmResource_constructor();
            
}
#endif