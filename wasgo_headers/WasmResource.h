/* THIS FILE IS GENERATED */
#ifndef WASMRESOURCE_H
#define WASMRESOURCE_H

#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Resource.h"
class WasmResource : public Resource{
public:
PoolByteArray get_buf();

protected:
WasmResource(WasGoId p_wasgo_id);
public:
WasmResource();
~WasmResource();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_WasmResource_wrapper_get_buf(WasGoId wasgo_id);

    //constructor and destructor wrappers
    WasGoId _wasgo_WasmResource_constructor();
    void _wasgo_WasmResource_destructor(WasGoId p_wasgo_id);
            
}
#endif