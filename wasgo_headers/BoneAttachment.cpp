/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "BoneAttachment.h"
String BoneAttachment::get_bone_name(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_BoneAttachment_wrapper_get_bone_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
void BoneAttachment::set_bone_name(String p_bone_name){

    Variant wasgo_var_bone_name = p_bone_name;
    int wasgo_size_bone_name = String(p_bone_name).size();
    uint8_t wasgo_buffer_bone_name[wasgo_size_bone_name];
    encode_variant(wasgo_var_bone_name, wasgo_buffer_bone_name, wasgo_size_bone_name);
    
	_wasgo_BoneAttachment_wrapper_set_bone_name(wasgo_id, wasgo_buffer_bone_name, wasgo_size_bone_name);
}

BoneAttachment::BoneAttachment(WasGoID p_wasgo_id) : Spatial(p_wasgo_id){
}
BoneAttachment::BoneAttachment(Spatial other) : Spatial(other._get_wasgo_id()){
    wasgo_id = _wasgo_BoneAttachment_constructor();
}
BoneAttachment::new_instance(){
    return BoneAttachment(_wasgo_BoneAttachment_constructor());
}