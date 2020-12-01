/* THIS FILE IS GENERATED */
#ifndef WEAKREF_H
#define WEAKREF_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Reference.h"
#include "Variant.h"
class WeakRef : public Reference{
public:
Variant get_ref();

WeakRef(WasGoId p_wasgo_id);
~WeakRef();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_WeakRef_wrapper_get_ref(WasGoId wasgo_id);
}
#endif