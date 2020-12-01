/* THIS FILE IS GENERATED */
#ifndef REFERENCE_H
#define REFERENCE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Object.h"
class Reference : public Object{
public:
bool init_ref();
bool reference();
bool unreference();

Reference(WasGoId p_wasgo_id);
~Reference();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_Reference_wrapper_init_ref(WasGoId wasgo_id);
int _wasgo_Reference_wrapper_reference(WasGoId wasgo_id);
int _wasgo_Reference_wrapper_unreference(WasGoId wasgo_id);
}
#endif