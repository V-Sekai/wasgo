/* THIS FILE IS GENERATED */
#include "CollisionShape2D.h"
float CollisionShape2D::get_one_way_collision_margin(){
	return (float) _wasgo_CollisionShape2D_wrapper_get_one_way_collision_margin(wasgo_id));
}
Shape2D CollisionShape2D::get_shape(){
	return Shape2D::from_wasgo_id(_wasgo_CollisionShape2D_wrapper_get_shape(wasgo_id));
}
bool CollisionShape2D::is_disabled(){
	return (bool) _wasgo_CollisionShape2D_wrapper_is_disabled(wasgo_id));
}
bool CollisionShape2D::is_one_way_collision_enabled(){
	return (bool) _wasgo_CollisionShape2D_wrapper_is_one_way_collision_enabled(wasgo_id));
}
void CollisionShape2D::set_disabled(bool p_disabled){
	_wasgo_CollisionShape2D_wrapper_set_disabled(wasgo_id, disabled);
}
void CollisionShape2D::set_one_way_collision(bool p_enabled){
	_wasgo_CollisionShape2D_wrapper_set_one_way_collision(wasgo_id, enabled);
}
void CollisionShape2D::set_one_way_collision_margin(float p_margin){
	_wasgo_CollisionShape2D_wrapper_set_one_way_collision_margin(wasgo_id, margin);
}
void CollisionShape2D::set_shape(Shape2D p_shape){
	_wasgo_CollisionShape2D_wrapper_set_shape(wasgo_id, ((Variant) shape).get_wasgo_id());
}

CollisionShape2D::CollisionShape2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
CollisionShape2D::~CollisionShape2D(){
}