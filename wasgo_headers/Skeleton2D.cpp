/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Skeleton2D.h"
Bone2D Skeleton2D::get_bone(int p_idx){
	return Bone2D(_wasgo_Skeleton2D_wrapper_get_bone(wasgo_id, p_idx));
}
int Skeleton2D::get_bone_count(){
	return (int) _wasgo_Skeleton2D_wrapper_get_bone_count(wasgo_id);
}
RID Skeleton2D::get_skeleton(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_Skeleton2D_wrapper_get_skeleton(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}

Skeleton2D::Skeleton2D(WasGoId p_wasgo_id) : Node2D(p_wasgo_id){
}
Skeleton2D::Skeleton2D(Node2D other) : Node2D(other._get_wasgo_id()){
    wasgo_id = _wasgo_Skeleton2D_constructor();
}
Skeleton2D::new_instance(){
    return Skeleton2D(_wasgo_Skeleton2D_constructor());
}