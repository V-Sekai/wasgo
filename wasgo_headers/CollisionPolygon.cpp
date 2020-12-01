/* THIS FILE IS GENERATED */
#include "CollisionPolygon.h"
float CollisionPolygon::get_depth(){
	return (float) _wasgo_CollisionPolygon_wrapper_get_depth(wasgo_id);
}
PoolVector2Array CollisionPolygon::get_polygon(){
	return PoolVector2Array::from_wasgo_id(_wasgo_CollisionPolygon_wrapper_get_polygon(wasgo_id));
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
	_wasgo_CollisionPolygon_wrapper_set_polygon(wasgo_id, ((Variant) p_polygon).get_wasgo_id());
}