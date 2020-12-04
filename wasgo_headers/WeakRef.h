/* THIS FILE IS GENERATED */
#ifndef WEAKREF_H
#define WEAKREF_H

#include "wasgo\wasgo.h"

#include "Reference.h"
#include "Variant.h"
class WeakRef : public Reference{
public:
Variant get_ref();

protected:
public:
explicit WeakRef(WasGoID p_wasgo_id);
explicit WeakRef(Reference other);
WeakRef new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_WeakRef_wrapper_get_ref(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_WeakRef_constructor();
            
}
#endif