/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Skin.h"
void Skin::add_bind(int p_bone, Transform p_pose){

    Variant wasgo_var_pose = p_pose;
    uint8_t wasgo_buffer_pose[52];
    int wasgo_size_pose = 52;
    encode_variant(wasgo_var_pose, wasgo_buffer_pose, wasgo_size_pose);
    
	_wasgo_Skin_wrapper_add_bind(wasgo_id, p_bone, wasgo_buffer_pose, wasgo_size_pose, wasgo_size_pose);
}
void Skin::clear_binds(){
	_wasgo_Skin_wrapper_clear_binds(wasgo_id);
}
int Skin::get_bind_bone(int p_bind_index){
	return (int) _wasgo_Skin_wrapper_get_bind_bone(wasgo_id, p_bind_index);
}
int Skin::get_bind_count(){
	return (int) _wasgo_Skin_wrapper_get_bind_count(wasgo_id);
}
String Skin::get_bind_name(int p_bind_index){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Skin_wrapper_get_bind_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_bind_index);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Transform Skin::get_bind_pose(int p_bind_index){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_Skin_wrapper_get_bind_pose(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_bind_index);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
void Skin::set_bind_bone(int p_bind_index, int p_bone){
	_wasgo_Skin_wrapper_set_bind_bone(wasgo_id, p_bind_index, p_bone);
}
void Skin::set_bind_count(int p_bind_count){
	_wasgo_Skin_wrapper_set_bind_count(wasgo_id, p_bind_count);
}
void Skin::set_bind_name(int p_bind_index, String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = 10 + String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_Skin_wrapper_set_bind_name(wasgo_id, p_bind_index, wasgo_buffer_name, wasgo_size_name, wasgo_size_name);
}
void Skin::set_bind_pose(int p_bind_index, Transform p_pose){

    Variant wasgo_var_pose = p_pose;
    uint8_t wasgo_buffer_pose[52];
    int wasgo_size_pose = 52;
    encode_variant(wasgo_var_pose, wasgo_buffer_pose, wasgo_size_pose);
    
	_wasgo_Skin_wrapper_set_bind_pose(wasgo_id, p_bind_index, wasgo_buffer_pose, wasgo_size_pose, wasgo_size_pose);
}

Skin::Skin(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
Skin::Skin(Resource other) : Resource(other._get_wasgo_id()){
}
Skin::Skin():Resource(){
}
Skin Skin::new_instance(){
    return Skin(_wasgo_Skin_constructor());
}
WasGoID Skin::_get_wasgo_id(){
    return wasgo_id;
}
Skin::operator bool(){
    return (bool) wasgo_id;
}
