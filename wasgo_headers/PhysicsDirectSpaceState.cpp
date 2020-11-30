/* THIS FILE IS GENERATED */
#include "PhysicsDirectSpaceState.h"
Array PhysicsDirectSpaceState::cast_motion(PhysicsShapeQueryParameters p_shape, Vector3 p_motion){
	return Array::from_wasgo_id(_wasgo_PhysicsDirectSpaceState_wrapper_cast_motion(wasgo_id, ((Variant) shape).get_wasgo_id(), ((Variant) motion).get_wasgo_id()));
}
Array PhysicsDirectSpaceState::collide_shape(PhysicsShapeQueryParameters p_shape, int p_max_results = (int) 32){
	return Array::from_wasgo_id(_wasgo_PhysicsDirectSpaceState_wrapper_collide_shape(wasgo_id, ((Variant) shape).get_wasgo_id(), max_results));
}
Dictionary PhysicsDirectSpaceState::get_rest_info(PhysicsShapeQueryParameters p_shape){
	return Dictionary::from_wasgo_id(_wasgo_PhysicsDirectSpaceState_wrapper_get_rest_info(wasgo_id, ((Variant) shape).get_wasgo_id()));
}
Dictionary PhysicsDirectSpaceState::intersect_ray(Vector3 p_from, Vector3 p_to, Array p_exclude = (Array) [], int p_collision_mask = (int) 2147483647, bool p_collide_with_bodies = (bool) True, bool p_collide_with_areas = (bool) False){
	return Dictionary::from_wasgo_id(_wasgo_PhysicsDirectSpaceState_wrapper_intersect_ray(wasgo_id, ((Variant) from).get_wasgo_id(), ((Variant) to).get_wasgo_id(), ((Variant) exclude).get_wasgo_id(), collision_mask, collide_with_bodies, collide_with_areas));
}
Array PhysicsDirectSpaceState::intersect_shape(PhysicsShapeQueryParameters p_shape, int p_max_results = (int) 32){
	return Array::from_wasgo_id(_wasgo_PhysicsDirectSpaceState_wrapper_intersect_shape(wasgo_id, ((Variant) shape).get_wasgo_id(), max_results));
}