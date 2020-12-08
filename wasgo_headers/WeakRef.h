/* THIS FILE IS GENERATED */
#ifndef WEAKREF_H
#define WEAKREF_H

#include "wasgo\wasgoid.h"

#include "Variant.h"
#include "Reference.h"
class WeakRef : public Reference{
public:
Variant get_ref();

protected:
public:
explicit WeakRef(WasGoID p_wasgo_id);
explicit WeakRef(Reference other);
WeakRef();
WeakRef new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_WeakRef_wrapper_get_ref(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_WeakRef_constructor();
            
}
#endif