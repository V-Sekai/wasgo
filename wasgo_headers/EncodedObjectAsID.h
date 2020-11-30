/* THIS FILE IS GENERATED */
#ifndef ENCODEDOBJECTASID_H
#define ENCODEDOBJECTASID_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Reference.h"
class EncodedObjectAsID : public Reference{
int get_object_id();
void set_object_id(int p_id);

EncodedObjectAsID(WasGoId p_wasgo_id);
~EncodedObjectAsID();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_EncodedObjectAsID_wrapper_get_object_id(WasGoId wasgo_id);
void _wasgo_EncodedObjectAsID_wrapper_set_object_id(WasGoId wasgo_id, int p_id);
}
#endif