/* THIS FILE IS GENERATED */
#include "CollisionPolygon2D.h"
CollisionPolygon2D::BuildMode CollisionPolygon2D::get_build_mode(){
	return CollisionPolygon2D::BuildMode::from_wasgo_id(_wasgo_CollisionPolygon2D_wrapper_get_build_mode(wasgo_id));
}
float CollisionPolygon2D::get_one_way_collision_margin(){
	return (float) _wasgo_CollisionPolygon2D_wrapper_get_one_way_collision_margin(wasgo_id));
}
PoolVector2Array CollisionPolygon2D::get_polygon(){
	return PoolVector2Array::from_wasgo_id(_wasgo_CollisionPolygon2D_wrapper_get_polygon(wasgo_id));
}
bool CollisionPolygon2D::is_disabled(){
	return (bool) _wasgo_CollisionPolygon2D_wrapper_is_disabled(wasgo_id));
}
bool CollisionPolygon2D::is_one_way_collision_enabled(){
	return (bool) _wasgo_CollisionPolygon2D_wrapper_is_one_way_collision_enabled(wasgo_id));
}
void CollisionPolygon2D::set_build_mode(CollisionPolygon2D::BuildMode p_build_mode){
	_wasgo_CollisionPolygon2D_wrapper_set_build_mode(wasgo_id, ((Variant) build_mode).get_wasgo_id());
}
void CollisionPolygon2D::set_disabled(bool p_disabled){
	_wasgo_CollisionPolygon2D_wrapper_set_disabled(wasgo_id, disabled);
}
void CollisionPolygon2D::set_one_way_collision(bool p_enabled){
	_wasgo_CollisionPolygon2D_wrapper_set_one_way_collision(wasgo_id, enabled);
}
void CollisionPolygon2D::set_one_way_collision_margin(float p_margin){
	_wasgo_CollisionPolygon2D_wrapper_set_one_way_collision_margin(wasgo_id, margin);
}
void CollisionPolygon2D::set_polygon(PoolVector2Array p_polygon){
	_wasgo_CollisionPolygon2D_wrapper_set_polygon(wasgo_id, ((Variant) polygon).get_wasgo_id());
}

CollisionPolygon2D::CollisionPolygon2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
CollisionPolygon2D::~CollisionPolygon2D(){
}