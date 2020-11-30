/* THIS FILE IS GENERATED */
#ifndef BONEATTACHMENT_H
#define BONEATTACHMENT_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Spatial.h"
#include "Variant.h"
class BoneAttachment : public Spatial{
String get_bone_name();
void set_bone_name(String p_bone_name);

BoneAttachment(WasGoId p_wasgo_id);
~BoneAttachment();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_BoneAttachment_wrapper_get_bone_name(WasGoId wasgo_id);
void _wasgo_BoneAttachment_wrapper_set_bone_name(WasGoId wasgo_id, WasGo::WasGoId p_bone_name);
}
#endif