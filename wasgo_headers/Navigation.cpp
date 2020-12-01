/* THIS FILE IS GENERATED */
#include "Navigation.h"
Vector3 Navigation::get_closest_point(Vector3 p_to_point){
	return Vector3::from_wasgo_id(_wasgo_Navigation_wrapper_get_closest_point(wasgo_id, ((Variant) p_to_point).get_wasgo_id()));
}
Vector3 Navigation::get_closest_point_normal(Vector3 p_to_point){
	return Vector3::from_wasgo_id(_wasgo_Navigation_wrapper_get_closest_point_normal(wasgo_id, ((Variant) p_to_point).get_wasgo_id()));
}
Object Navigation::get_closest_point_owner(Vector3 p_to_point){
	return Object::from_wasgo_id(_wasgo_Navigation_wrapper_get_closest_point_owner(wasgo_id, ((Variant) p_to_point).get_wasgo_id()));
}
Vector3 Navigation::get_closest_point_to_segment(Vector3 p_start, Vector3 p_end, bool p_use_collision = (bool) false){
	return Vector3::from_wasgo_id(_wasgo_Navigation_wrapper_get_closest_point_to_segment(wasgo_id, ((Variant) p_start).get_wasgo_id(), ((Variant) p_end).get_wasgo_id(), p_use_collision));
}
PoolVector3Array Navigation::get_simple_path(Vector3 p_start, Vector3 p_end, bool p_optimize = (bool) true){
	return PoolVector3Array::from_wasgo_id(_wasgo_Navigation_wrapper_get_simple_path(wasgo_id, ((Variant) p_start).get_wasgo_id(), ((Variant) p_end).get_wasgo_id(), p_optimize));
}
Vector3 Navigation::get_up_vector(){
	return Vector3::from_wasgo_id(_wasgo_Navigation_wrapper_get_up_vector(wasgo_id));
}
int Navigation::navmesh_add(NavigationMesh p_mesh, Transform p_xform, Object p_owner = (Object) ""){
	return (int) _wasgo_Navigation_wrapper_navmesh_add(wasgo_id, ((Variant) p_mesh).get_wasgo_id(), ((Variant) p_xform).get_wasgo_id(), ((Variant) p_owner).get_wasgo_id());
}
void Navigation::navmesh_remove(int p_id){
	_wasgo_Navigation_wrapper_navmesh_remove(wasgo_id, p_id);
}
void Navigation::navmesh_set_transform(int p_id, Transform p_xform){
	_wasgo_Navigation_wrapper_navmesh_set_transform(wasgo_id, p_id, ((Variant) p_xform).get_wasgo_id());
}
void Navigation::set_up_vector(Vector3 p_up){
	_wasgo_Navigation_wrapper_set_up_vector(wasgo_id, ((Variant) p_up).get_wasgo_id());
}