/* THIS FILE IS GENERATED */
#include "Sprite3D.h"
int Sprite3D::get_frame(){
	return (int) _wasgo_Sprite3D_wrapper_get_frame(wasgo_id);
}
Vector2 Sprite3D::get_frame_coords(){
	return Vector2::from_wasgo_id(_wasgo_Sprite3D_wrapper_get_frame_coords(wasgo_id));
}
int Sprite3D::get_hframes(){
	return (int) _wasgo_Sprite3D_wrapper_get_hframes(wasgo_id);
}
Rect2 Sprite3D::get_region_rect(){
	return Rect2::from_wasgo_id(_wasgo_Sprite3D_wrapper_get_region_rect(wasgo_id));
}
Texture Sprite3D::get_texture(){
	return Texture::from_wasgo_id(_wasgo_Sprite3D_wrapper_get_texture(wasgo_id));
}
int Sprite3D::get_vframes(){
	return (int) _wasgo_Sprite3D_wrapper_get_vframes(wasgo_id);
}
bool Sprite3D::is_region(){
	return (bool) _wasgo_Sprite3D_wrapper_is_region(wasgo_id);
}
void Sprite3D::set_frame(int p_frame){
	_wasgo_Sprite3D_wrapper_set_frame(wasgo_id, p_frame);
}
void Sprite3D::set_frame_coords(Vector2 p_coords){
	_wasgo_Sprite3D_wrapper_set_frame_coords(wasgo_id, ((Variant) p_coords).get_wasgo_id());
}
void Sprite3D::set_hframes(int p_hframes){
	_wasgo_Sprite3D_wrapper_set_hframes(wasgo_id, p_hframes);
}
void Sprite3D::set_region(bool p_enabled){
	_wasgo_Sprite3D_wrapper_set_region(wasgo_id, p_enabled);
}
void Sprite3D::set_region_rect(Rect2 p_rect){
	_wasgo_Sprite3D_wrapper_set_region_rect(wasgo_id, ((Variant) p_rect).get_wasgo_id());
}
void Sprite3D::set_texture(Texture p_texture){
	_wasgo_Sprite3D_wrapper_set_texture(wasgo_id, ((Variant) p_texture).get_wasgo_id());
}
void Sprite3D::set_vframes(int p_vframes){
	_wasgo_Sprite3D_wrapper_set_vframes(wasgo_id, p_vframes);
}