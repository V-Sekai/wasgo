/* THIS FILE IS GENERATED */
#include "Navigation2D.h"
Vector2 Navigation2D::get_closest_point(Vector2 p_to_point){
	return Vector2::from_wasgo_id(_wasgo_Navigation2D_wrapper_get_closest_point(wasgo_id, ((Variant) to_point).get_wasgo_id()));
}
Object Navigation2D::get_closest_point_owner(Vector2 p_to_point){
	return Object::from_wasgo_id(_wasgo_Navigation2D_wrapper_get_closest_point_owner(wasgo_id, ((Variant) to_point).get_wasgo_id()));
}
PoolVector2Array Navigation2D::get_simple_path(Vector2 p_start, Vector2 p_end, bool p_optimize = (bool) True){
	return PoolVector2Array::from_wasgo_id(_wasgo_Navigation2D_wrapper_get_simple_path(wasgo_id, ((Variant) start).get_wasgo_id(), ((Variant) end).get_wasgo_id(), optimize));
}
int Navigation2D::navpoly_add(NavigationPolygon p_mesh, Transform2D p_xform, Object p_owner = (Object) ""){
	return (int) _wasgo_Navigation2D_wrapper_navpoly_add(wasgo_id, ((Variant) mesh).get_wasgo_id(), ((Variant) xform).get_wasgo_id(), ((Variant) owner).get_wasgo_id()));
}
void Navigation2D::navpoly_remove(int p_id){
	_wasgo_Navigation2D_wrapper_navpoly_remove(wasgo_id, id);
}
void Navigation2D::navpoly_set_transform(int p_id, Transform2D p_xform){
	_wasgo_Navigation2D_wrapper_navpoly_set_transform(wasgo_id, id, ((Variant) xform).get_wasgo_id());
}

Navigation2D::Navigation2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
Navigation2D::~Navigation2D(){
}