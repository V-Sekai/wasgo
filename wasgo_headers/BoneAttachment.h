/* THIS FILE IS GENERATED */
#ifndef BONEATTACHMENT_H
#define BONEATTACHMENT_H

#include "stdint.h"

#include "Variant.h"
#include "Spatial.h"
class BoneAttachment : public Spatial{
public: BoneAttachment();
String get_bone_name();
void set_bone_name(String p_bone_name);
};
#endif