/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CollisionPolygon.h"
float CollisionPolygon::get_depth(){
	return (float) _wasgo_CollisionPolygon_wrapper_get_depth(wasgo_id);
}
PoolVector2Array CollisionPolygon::get_polygon(){
	return PoolVector2Array(_wasgo_CollisionPolygon_wrapper_get_polygon(wasgo_id));
}
bool CollisionPolygon::is_disabled(){
	return (bool) _wasgo_CollisionPolygon_wrapper_is_disabled(wasgo_id);
}
void CollisionPolygon::set_depth(float p_depth){
	_wasgo_CollisionPolygon_wrapper_set_depth(wasgo_id, p_depth);
}
void CollisionPolygon::set_disabled(bool p_disabled){
	_wasgo_CollisionPolygon_wrapper_set_disabled(wasgo_id, p_disabled);
}
void CollisionPolygon::set_polygon(PoolVector2Array p_polygon){
	_wasgo_CollisionPolygon_wrapper_set_polygon(wasgo_id, p_polygon._get_wasgo_id());
}

CollisionPolygon::CollisionPolygon(WasGoID p_wasgo_id) : Spatial(p_wasgo_id){
}
CollisionPolygon::CollisionPolygon(Spatial other) : Spatial(other._get_wasgo_id()){
}
CollisionPolygon::CollisionPolygon():Spatial(){
}
CollisionPolygon CollisionPolygon::new_instance(){
    return CollisionPolygon(_wasgo_CollisionPolygon_constructor());
}
WasGoID CollisionPolygon::_get_wasgo_id(){
    return wasgo_id;
}
CollisionPolygon::operator bool(){
    return (bool) wasgo_id;
}
