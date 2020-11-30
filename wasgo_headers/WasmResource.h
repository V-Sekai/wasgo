/* THIS FILE IS GENERATED */
#ifndef WASMRESOURCE_H
#define WASMRESOURCE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Resource.h"
class WasmResource : public Resource{
PoolByteArray get_buf();

WasmResource(WasGoId p_wasgo_id);
~WasmResource();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_WasmResource_wrapper_get_buf(WasGoId wasgo_id);
}
#endif