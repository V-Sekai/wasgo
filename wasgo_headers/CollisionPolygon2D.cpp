/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CollisionPolygon2D.h"
CollisionPolygon2D::BuildMode CollisionPolygon2D::get_build_mode(){
	return CollisionPolygon2D::BuildMode(_wasgo_CollisionPolygon2D_wrapper_get_build_mode(wasgo_id));
}
float CollisionPolygon2D::get_one_way_collision_margin(){
	return (float) _wasgo_CollisionPolygon2D_wrapper_get_one_way_collision_margin(wasgo_id);
}
PoolVector2Array CollisionPolygon2D::get_polygon(){
	return PoolVector2Array(_wasgo_CollisionPolygon2D_wrapper_get_polygon(wasgo_id));
}
bool CollisionPolygon2D::is_disabled(){
	return (bool) _wasgo_CollisionPolygon2D_wrapper_is_disabled(wasgo_id);
}
bool CollisionPolygon2D::is_one_way_collision_enabled(){
	return (bool) _wasgo_CollisionPolygon2D_wrapper_is_one_way_collision_enabled(wasgo_id);
}
void CollisionPolygon2D::set_build_mode(CollisionPolygon2D::BuildMode p_build_mode){
	_wasgo_CollisionPolygon2D_wrapper_set_build_mode(wasgo_id, p_build_mode._get_wasgo_id());
}
void CollisionPolygon2D::set_disabled(bool p_disabled){
	_wasgo_CollisionPolygon2D_wrapper_set_disabled(wasgo_id, p_disabled);
}
void CollisionPolygon2D::set_one_way_collision(bool p_enabled){
	_wasgo_CollisionPolygon2D_wrapper_set_one_way_collision(wasgo_id, p_enabled);
}
void CollisionPolygon2D::set_one_way_collision_margin(float p_margin){
	_wasgo_CollisionPolygon2D_wrapper_set_one_way_collision_margin(wasgo_id, p_margin);
}
void CollisionPolygon2D::set_polygon(PoolVector2Array p_polygon){
	_wasgo_CollisionPolygon2D_wrapper_set_polygon(wasgo_id, p_polygon._get_wasgo_id());
}

CollisionPolygon2D::CollisionPolygon2D(WasGoID p_wasgo_id) : Node2D(p_wasgo_id){
}
CollisionPolygon2D::CollisionPolygon2D(Node2D other) : Node2D(other._get_wasgo_id()){
    wasgo_id = _wasgo_CollisionPolygon2D_constructor();
}
CollisionPolygon2D::new_instance(){
    return CollisionPolygon2D(_wasgo_CollisionPolygon2D_constructor());
}