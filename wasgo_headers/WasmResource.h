/* THIS FILE IS GENERATED */
#ifndef WASMRESOURCE_H
#define WASMRESOURCE_H

#include "wasgo\wasgo.h"

#include "Resource.h"
#include "Variant.h"
class WasmResource : public Resource{
public:
PoolByteArray get_buf();

protected:
public:
explicit WasmResource(WasGoId p_wasgo_id);
explicit WasmResource(Resource other);
WasmResource new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_WasmResource_wrapper_get_buf(WasGoId wasgo_id);

    //constructor wrappers
    WasGoId _wasgo_WasmResource_constructor();
            
}
#endif