/* THIS FILE IS GENERATED */
#include "Navigation2D.h"
Vector2 Navigation2D::get_closest_point(Vector2 p_to_point){
	return Vector2::from_wasgo_id(_wasgo_Navigation2D_wrapper_get_closest_point(wasgo_id, ((Variant) p_to_point).get_wasgo_id()));
}
Object Navigation2D::get_closest_point_owner(Vector2 p_to_point){
	return Object::from_wasgo_id(_wasgo_Navigation2D_wrapper_get_closest_point_owner(wasgo_id, ((Variant) p_to_point).get_wasgo_id()));
}
PoolVector2Array Navigation2D::get_simple_path(Vector2 p_start, Vector2 p_end, bool p_optimize = (bool) true){
	return PoolVector2Array::from_wasgo_id(_wasgo_Navigation2D_wrapper_get_simple_path(wasgo_id, ((Variant) p_start).get_wasgo_id(), ((Variant) p_end).get_wasgo_id(), p_optimize));
}
int Navigation2D::navpoly_add(NavigationPolygon p_mesh, Transform2D p_xform, Object p_owner = (Object) ""){
	return (int) _wasgo_Navigation2D_wrapper_navpoly_add(wasgo_id, ((Variant) p_mesh).get_wasgo_id(), ((Variant) p_xform).get_wasgo_id(), ((Variant) p_owner).get_wasgo_id());
}
void Navigation2D::navpoly_remove(int p_id){
	_wasgo_Navigation2D_wrapper_navpoly_remove(wasgo_id, p_id);
}
void Navigation2D::navpoly_set_transform(int p_id, Transform2D p_xform){
	_wasgo_Navigation2D_wrapper_navpoly_set_transform(wasgo_id, p_id, ((Variant) p_xform).get_wasgo_id());
}