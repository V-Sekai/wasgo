/* THIS FILE IS GENERATED */
#include "Skin.h"
void Skin::add_bind(int p_bone, Transform p_pose){
	_wasgo_Skin_wrapper_add_bind(wasgo_id, p_bone, ((Variant) p_pose).get_wasgo_id());
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
	return String::from_wasgo_id(_wasgo_Skin_wrapper_get_bind_name(wasgo_id, p_bind_index));
}
Transform Skin::get_bind_pose(int p_bind_index){
	return Transform::from_wasgo_id(_wasgo_Skin_wrapper_get_bind_pose(wasgo_id, p_bind_index));
}
void Skin::set_bind_bone(int p_bind_index, int p_bone){
	_wasgo_Skin_wrapper_set_bind_bone(wasgo_id, p_bind_index, p_bone);
}
void Skin::set_bind_count(int p_bind_count){
	_wasgo_Skin_wrapper_set_bind_count(wasgo_id, p_bind_count);
}
void Skin::set_bind_name(int p_bind_index, String p_name){
	_wasgo_Skin_wrapper_set_bind_name(wasgo_id, p_bind_index, ((Variant) p_name).get_wasgo_id());
}
void Skin::set_bind_pose(int p_bind_index, Transform p_pose){
	_wasgo_Skin_wrapper_set_bind_pose(wasgo_id, p_bind_index, ((Variant) p_pose).get_wasgo_id());
}