/* THIS FILE IS GENERATED */
#include "RayCast2D.h"
void RayCast2D::add_exception(Object p_node){
	_wasgo_RayCast2D_wrapper_add_exception(wasgo_id, ((Variant) node).get_wasgo_id());
}
void RayCast2D::add_exception_rid(RID p_rid){
	_wasgo_RayCast2D_wrapper_add_exception_rid(wasgo_id, ((Variant) rid).get_wasgo_id());
}
void RayCast2D::clear_exceptions(){
	_wasgo_RayCast2D_wrapper_clear_exceptions(wasgo_id);
}
void RayCast2D::force_raycast_update(){
	_wasgo_RayCast2D_wrapper_force_raycast_update(wasgo_id);
}
Vector2 RayCast2D::get_cast_to(){
	return Vector2::from_wasgo_id(_wasgo_RayCast2D_wrapper_get_cast_to(wasgo_id));
}
Object RayCast2D::get_collider(){
	return Object::from_wasgo_id(_wasgo_RayCast2D_wrapper_get_collider(wasgo_id));
}
int RayCast2D::get_collider_shape(){
	return (int) _wasgo_RayCast2D_wrapper_get_collider_shape(wasgo_id));
}
int RayCast2D::get_collision_mask(){
	return (int) _wasgo_RayCast2D_wrapper_get_collision_mask(wasgo_id));
}
bool RayCast2D::get_collision_mask_bit(int p_bit){
	return (bool) _wasgo_RayCast2D_wrapper_get_collision_mask_bit(wasgo_id, bit));
}
Vector2 RayCast2D::get_collision_normal(){
	return Vector2::from_wasgo_id(_wasgo_RayCast2D_wrapper_get_collision_normal(wasgo_id));
}
Vector2 RayCast2D::get_collision_point(){
	return Vector2::from_wasgo_id(_wasgo_RayCast2D_wrapper_get_collision_point(wasgo_id));
}
bool RayCast2D::get_exclude_parent_body(){
	return (bool) _wasgo_RayCast2D_wrapper_get_exclude_parent_body(wasgo_id));
}
bool RayCast2D::is_collide_with_areas_enabled(){
	return (bool) _wasgo_RayCast2D_wrapper_is_collide_with_areas_enabled(wasgo_id));
}
bool RayCast2D::is_collide_with_bodies_enabled(){
	return (bool) _wasgo_RayCast2D_wrapper_is_collide_with_bodies_enabled(wasgo_id));
}
bool RayCast2D::is_colliding(){
	return (bool) _wasgo_RayCast2D_wrapper_is_colliding(wasgo_id));
}
bool RayCast2D::is_enabled(){
	return (bool) _wasgo_RayCast2D_wrapper_is_enabled(wasgo_id));
}
void RayCast2D::remove_exception(Object p_node){
	_wasgo_RayCast2D_wrapper_remove_exception(wasgo_id, ((Variant) node).get_wasgo_id());
}
void RayCast2D::remove_exception_rid(RID p_rid){
	_wasgo_RayCast2D_wrapper_remove_exception_rid(wasgo_id, ((Variant) rid).get_wasgo_id());
}
void RayCast2D::set_cast_to(Vector2 p_local_point){
	_wasgo_RayCast2D_wrapper_set_cast_to(wasgo_id, ((Variant) local_point).get_wasgo_id());
}
void RayCast2D::set_collide_with_areas(bool p_enable){
	_wasgo_RayCast2D_wrapper_set_collide_with_areas(wasgo_id, enable);
}
void RayCast2D::set_collide_with_bodies(bool p_enable){
	_wasgo_RayCast2D_wrapper_set_collide_with_bodies(wasgo_id, enable);
}
void RayCast2D::set_collision_mask(int p_mask){
	_wasgo_RayCast2D_wrapper_set_collision_mask(wasgo_id, mask);
}
void RayCast2D::set_collision_mask_bit(int p_bit, bool p_value){
	_wasgo_RayCast2D_wrapper_set_collision_mask_bit(wasgo_id, bit, value);
}
void RayCast2D::set_enabled(bool p_enabled){
	_wasgo_RayCast2D_wrapper_set_enabled(wasgo_id, enabled);
}
void RayCast2D::set_exclude_parent_body(bool p_mask){
	_wasgo_RayCast2D_wrapper_set_exclude_parent_body(wasgo_id, mask);
}

RayCast2D::RayCast2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
RayCast2D::~RayCast2D(){
}