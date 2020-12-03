/* THIS FILE IS GENERATED */
#ifndef REFERENCE_H
#define REFERENCE_H

#include "wasgo\wasgo.h"

#include "Object.h"
class Reference : public Object{
public:
bool init_ref();
bool reference();
bool unreference();

protected:
Reference(WasGoId p_wasgo_id);
public:
Reference();
~Reference();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_Reference_wrapper_init_ref(WasGoId wasgo_id);
int _wasgo_Reference_wrapper_reference(WasGoId wasgo_id);
int _wasgo_Reference_wrapper_unreference(WasGoId wasgo_id);

    //constructor and destructor wrappers
    WasGoId _wasgo_Reference_constructor();
    void _wasgo_Reference_destructor(WasGoId p_wasgo_id);
            
}
#endif