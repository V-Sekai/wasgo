/* THIS FILE IS GENERATED */
#include "Navigation.h"
Vector3 Navigation::get_closest_point(Vector3 p_to_point){
	return Vector3::from_wasgo_id(_wasgo_Navigation_wrapper_get_closest_point(wasgo_id, ((Variant) to_point).get_wasgo_id()));
}
Vector3 Navigation::get_closest_point_normal(Vector3 p_to_point){
	return Vector3::from_wasgo_id(_wasgo_Navigation_wrapper_get_closest_point_normal(wasgo_id, ((Variant) to_point).get_wasgo_id()));
}
Object Navigation::get_closest_point_owner(Vector3 p_to_point){
	return Object::from_wasgo_id(_wasgo_Navigation_wrapper_get_closest_point_owner(wasgo_id, ((Variant) to_point).get_wasgo_id()));
}
Vector3 Navigation::get_closest_point_to_segment(Vector3 p_start, Vector3 p_end, bool p_use_collision = (bool) False){
	return Vector3::from_wasgo_id(_wasgo_Navigation_wrapper_get_closest_point_to_segment(wasgo_id, ((Variant) start).get_wasgo_id(), ((Variant) end).get_wasgo_id(), use_collision));
}
PoolVector3Array Navigation::get_simple_path(Vector3 p_start, Vector3 p_end, bool p_optimize = (bool) True){
	return PoolVector3Array::from_wasgo_id(_wasgo_Navigation_wrapper_get_simple_path(wasgo_id, ((Variant) start).get_wasgo_id(), ((Variant) end).get_wasgo_id(), optimize));
}
Vector3 Navigation::get_up_vector(){
	return Vector3::from_wasgo_id(_wasgo_Navigation_wrapper_get_up_vector(wasgo_id));
}
int Navigation::navmesh_add(NavigationMesh p_mesh, Transform p_xform, Object p_owner = (Object) ""){
	return (int) _wasgo_Navigation_wrapper_navmesh_add(wasgo_id, ((Variant) mesh).get_wasgo_id(), ((Variant) xform).get_wasgo_id(), ((Variant) owner).get_wasgo_id()));
}
void Navigation::navmesh_remove(int p_id){
	_wasgo_Navigation_wrapper_navmesh_remove(wasgo_id, id);
}
void Navigation::navmesh_set_transform(int p_id, Transform p_xform){
	_wasgo_Navigation_wrapper_navmesh_set_transform(wasgo_id, id, ((Variant) xform).get_wasgo_id());
}
void Navigation::set_up_vector(Vector3 p_up){
	_wasgo_Navigation_wrapper_set_up_vector(wasgo_id, ((Variant) up).get_wasgo_id());
}

Navigation::Navigation(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
Navigation::~Navigation(){
}