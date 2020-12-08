/* THIS FILE IS GENERATED */
#ifndef BONEATTACHMENT_H
#define BONEATTACHMENT_H

#include "wasgo\wasgoid.h"

#include "Spatial.h"
#include "Ustring.h"
class BoneAttachment : public Spatial{
public:
String get_bone_name();
void set_bone_name(String p_bone_name);

protected:
public:
explicit BoneAttachment(WasGoID p_wasgo_id);
explicit BoneAttachment(Spatial other);
BoneAttachment();
BoneAttachment new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_BoneAttachment_wrapper_get_bone_name(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_BoneAttachment_wrapper_set_bone_name(WasGoID wasgo_id, const uint8_t * p_bone_name, int p_bone_name_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_BoneAttachment_constructor();
            
}
#endif