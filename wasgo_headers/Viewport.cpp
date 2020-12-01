/* THIS FILE IS GENERATED */
#include "Viewport.h"
World Viewport::find_world(){
	return World::from_wasgo_id(_wasgo_Viewport_wrapper_find_world(wasgo_id));
}
World2D Viewport::find_world_2d(){
	return World2D::from_wasgo_id(_wasgo_Viewport_wrapper_find_world_2d(wasgo_id));
}
Transform2D Viewport::get_canvas_transform(){
	return Transform2D::from_wasgo_id(_wasgo_Viewport_wrapper_get_canvas_transform(wasgo_id));
}
Transform2D Viewport::get_final_transform(){
	return Transform2D::from_wasgo_id(_wasgo_Viewport_wrapper_get_final_transform(wasgo_id));
}
Transform2D Viewport::get_global_canvas_transform(){
	return Transform2D::from_wasgo_id(_wasgo_Viewport_wrapper_get_global_canvas_transform(wasgo_id));
}
Vector2 Viewport::get_size(){
	return Vector2::from_wasgo_id(_wasgo_Viewport_wrapper_get_size(wasgo_id));
}
Rect2 Viewport::get_visible_rect(){
	return Rect2::from_wasgo_id(_wasgo_Viewport_wrapper_get_visible_rect(wasgo_id));
}
World Viewport::get_world(){
	return World::from_wasgo_id(_wasgo_Viewport_wrapper_get_world(wasgo_id));
}
World2D Viewport::get_world_2d(){
	return World2D::from_wasgo_id(_wasgo_Viewport_wrapper_get_world_2d(wasgo_id));
}
bool Viewport::has_transparent_background(){
	return (bool) _wasgo_Viewport_wrapper_has_transparent_background(wasgo_id);
}
void Viewport::set_canvas_transform(Transform2D p_xform){
	_wasgo_Viewport_wrapper_set_canvas_transform(wasgo_id, ((Variant) p_xform).get_wasgo_id());
}
void Viewport::set_global_canvas_transform(Transform2D p_xform){
	_wasgo_Viewport_wrapper_set_global_canvas_transform(wasgo_id, ((Variant) p_xform).get_wasgo_id());
}
void Viewport::set_size(Vector2 p_size){
	_wasgo_Viewport_wrapper_set_size(wasgo_id, ((Variant) p_size).get_wasgo_id());
}
void Viewport::set_transparent_background(bool p_enable){
	_wasgo_Viewport_wrapper_set_transparent_background(wasgo_id, p_enable);
}
void Viewport::set_use_arvr(bool p_use){
	_wasgo_Viewport_wrapper_set_use_arvr(wasgo_id, p_use);
}
void Viewport::set_world(World p_world){
	_wasgo_Viewport_wrapper_set_world(wasgo_id, ((Variant) p_world).get_wasgo_id());
}
void Viewport::set_world_2d(World2D p_world_2d){
	_wasgo_Viewport_wrapper_set_world_2d(wasgo_id, ((Variant) p_world_2d).get_wasgo_id());
}
bool Viewport::use_arvr(){
	return (bool) _wasgo_Viewport_wrapper_use_arvr(wasgo_id);
}