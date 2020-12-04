/* THIS FILE IS GENERATED */
#ifndef ENCODEDOBJECTASID_H
#define ENCODEDOBJECTASID_H

#include "wasgo\wasgo.h"

#include "Reference.h"
class EncodedObjectAsID : public Reference{
public:
int get_object_id();
void set_object_id(int p_id);

protected:
public:
explicit EncodedObjectAsID(WasGoId p_wasgo_id);
explicit EncodedObjectAsID(Reference other);
EncodedObjectAsID new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_EncodedObjectAsID_wrapper_get_object_id(WasGoId wasgo_id);
void _wasgo_EncodedObjectAsID_wrapper_set_object_id(WasGoId wasgo_id, int p_id);

    //constructor wrappers
    WasGoId _wasgo_EncodedObjectAsID_constructor();
            
}
#endif