/* THIS FILE IS GENERATED */
#ifndef WEAKREF_H
#define WEAKREF_H

#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Reference.h"
class WeakRef : public Reference{
public:
Variant get_ref();

protected:
WeakRef(WasGoId p_wasgo_id);
public:
WeakRef();
~WeakRef();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_WeakRef_wrapper_get_ref(WasGoId wasgo_id);

    //constructor and destructor wrappers
    WasGoId _wasgo_WeakRef_constructor();
    void _wasgo_WeakRef_destructor(WasGoId p_wasgo_id);
            
}
#endif