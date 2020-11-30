/* THIS FILE IS GENERATED */
#include "BoneAttachment.h"
String BoneAttachment::get_bone_name(){
	return String::from_wasgo_id(_wasgo_BoneAttachment_wrapper_get_bone_name(wasgo_id));
}
void BoneAttachment::set_bone_name(String p_bone_name){
	_wasgo_BoneAttachment_wrapper_set_bone_name(wasgo_id, ((Variant) bone_name).get_wasgo_id());
}

BoneAttachment::BoneAttachment(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
BoneAttachment::~BoneAttachment(){
}