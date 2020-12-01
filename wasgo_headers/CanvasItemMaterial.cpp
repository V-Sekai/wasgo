/* THIS FILE IS GENERATED */
#include "CanvasItemMaterial.h"
CanvasItemMaterial::BlendMode CanvasItemMaterial::get_blend_mode(){
	return CanvasItemMaterial::BlendMode::from_wasgo_id(_wasgo_CanvasItemMaterial_wrapper_get_blend_mode(wasgo_id));
}
CanvasItemMaterial::LightMode CanvasItemMaterial::get_light_mode(){
	return CanvasItemMaterial::LightMode::from_wasgo_id(_wasgo_CanvasItemMaterial_wrapper_get_light_mode(wasgo_id));
}
int CanvasItemMaterial::get_particles_anim_h_frames(){
	return (int) _wasgo_CanvasItemMaterial_wrapper_get_particles_anim_h_frames(wasgo_id);
}
bool CanvasItemMaterial::get_particles_anim_loop(){
	return (bool) _wasgo_CanvasItemMaterial_wrapper_get_particles_anim_loop(wasgo_id);
}
int CanvasItemMaterial::get_particles_anim_v_frames(){
	return (int) _wasgo_CanvasItemMaterial_wrapper_get_particles_anim_v_frames(wasgo_id);
}
bool CanvasItemMaterial::get_particles_animation(){
	return (bool) _wasgo_CanvasItemMaterial_wrapper_get_particles_animation(wasgo_id);
}
void CanvasItemMaterial::set_blend_mode(CanvasItemMaterial::BlendMode p_blend_mode){
	_wasgo_CanvasItemMaterial_wrapper_set_blend_mode(wasgo_id, ((Variant) p_blend_mode).get_wasgo_id());
}
void CanvasItemMaterial::set_light_mode(CanvasItemMaterial::LightMode p_light_mode){
	_wasgo_CanvasItemMaterial_wrapper_set_light_mode(wasgo_id, ((Variant) p_light_mode).get_wasgo_id());
}
void CanvasItemMaterial::set_particles_anim_h_frames(int p_frames){
	_wasgo_CanvasItemMaterial_wrapper_set_particles_anim_h_frames(wasgo_id, p_frames);
}
void CanvasItemMaterial::set_particles_anim_loop(bool p_loop){
	_wasgo_CanvasItemMaterial_wrapper_set_particles_anim_loop(wasgo_id, p_loop);
}
void CanvasItemMaterial::set_particles_anim_v_frames(int p_frames){
	_wasgo_CanvasItemMaterial_wrapper_set_particles_anim_v_frames(wasgo_id, p_frames);
}
void CanvasItemMaterial::set_particles_animation(bool p_particles_anim){
	_wasgo_CanvasItemMaterial_wrapper_set_particles_animation(wasgo_id, p_particles_anim);
}