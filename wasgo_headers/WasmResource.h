/* THIS FILE IS GENERATED */
#ifndef WASMRESOURCE_H
#define WASMRESOURCE_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
class WasmResource : public Resource{
public: WasmResource();
PoolByteArray get_buf();
};
#endif