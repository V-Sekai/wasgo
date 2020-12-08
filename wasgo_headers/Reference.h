/* THIS FILE IS GENERATED */
#ifndef REFERENCE_H
#define REFERENCE_H

#include "wasgo\wasgoid.h"

#include "Object.h"
class Reference : public Object{
public:
bool init_ref();
bool reference();
bool unreference();

protected:
public:
explicit Reference(WasGoID p_wasgo_id);
explicit Reference(Object other);
Reference();
Reference new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_Reference_wrapper_init_ref(WasGoID wasgo_id);
int _wasgo_Reference_wrapper_reference(WasGoID wasgo_id);
int _wasgo_Reference_wrapper_unreference(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_Reference_constructor();
            
}
#endif