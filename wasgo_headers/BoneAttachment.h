/* THIS FILE IS GENERATED */
#ifndef BONEATTACHMENT_H
#define BONEATTACHMENT_H

#include "wasgo\wasgo.h"

#include "Spatial.h"
#include "ustring.h"
class BoneAttachment : public Spatial{
public:
String get_bone_name();
void set_bone_name(String p_bone_name);

protected:
BoneAttachment(WasGoId p_wasgo_id);
public:
BoneAttachment();
~BoneAttachment();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_BoneAttachment_wrapper_get_bone_name(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_BoneAttachment_wrapper_set_bone_name(WasGoId wasgo_id, const uint8_t * p_bone_name, int p_bone_name_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_BoneAttachment_constructor();
    void _wasgo_BoneAttachment_destructor(WasGoId p_wasgo_id);
            
}
#endif