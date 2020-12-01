/* THIS FILE IS GENERATED */
#include "PhysicsDirectSpaceState.h"
Array PhysicsDirectSpaceState::cast_motion(PhysicsShapeQueryParameters p_shape, Vector3 p_motion){
	return Array::from_wasgo_id(_wasgo_PhysicsDirectSpaceState_wrapper_cast_motion(wasgo_id, ((Variant) p_shape).get_wasgo_id(), ((Variant) p_motion).get_wasgo_id()));
}
Array PhysicsDirectSpaceState::collide_shape(PhysicsShapeQueryParameters p_shape, int p_max_results = (int) 32){
	return Array::from_wasgo_id(_wasgo_PhysicsDirectSpaceState_wrapper_collide_shape(wasgo_id, ((Variant) p_shape).get_wasgo_id(), p_max_results));
}
Dictionary PhysicsDirectSpaceState::get_rest_info(PhysicsShapeQueryParameters p_shape){
	return Dictionary::from_wasgo_id(_wasgo_PhysicsDirectSpaceState_wrapper_get_rest_info(wasgo_id, ((Variant) p_shape).get_wasgo_id()));
}
Dictionary PhysicsDirectSpaceState::intersect_ray(Vector3 p_from, Vector3 p_to, Array p_exclude = (Array) [], int p_collision_mask = (int) 2147483647, bool p_collide_with_bodies = (bool) true, bool p_collide_with_areas = (bool) false){
	return Dictionary::from_wasgo_id(_wasgo_PhysicsDirectSpaceState_wrapper_intersect_ray(wasgo_id, ((Variant) p_from).get_wasgo_id(), ((Variant) p_to).get_wasgo_id(), ((Variant) p_exclude).get_wasgo_id(), p_collision_mask, p_collide_with_bodies, p_collide_with_areas));
}
Array PhysicsDirectSpaceState::intersect_shape(PhysicsShapeQueryParameters p_shape, int p_max_results = (int) 32){
	return Array::from_wasgo_id(_wasgo_PhysicsDirectSpaceState_wrapper_intersect_shape(wasgo_id, ((Variant) p_shape).get_wasgo_id(), p_max_results));
}