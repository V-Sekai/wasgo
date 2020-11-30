/* THIS FILE IS GENERATED */
#include "Physics2DDirectSpaceState.h"
Array Physics2DDirectSpaceState::cast_motion(Physics2DShapeQueryParameters p_shape){
	return Array::from_wasgo_id(_wasgo_Physics2DDirectSpaceState_wrapper_cast_motion(wasgo_id, ((Variant) shape).get_wasgo_id()));
}
Array Physics2DDirectSpaceState::collide_shape(Physics2DShapeQueryParameters p_shape, int p_max_results = (int) 32){
	return Array::from_wasgo_id(_wasgo_Physics2DDirectSpaceState_wrapper_collide_shape(wasgo_id, ((Variant) shape).get_wasgo_id(), max_results));
}
Dictionary Physics2DDirectSpaceState::get_rest_info(Physics2DShapeQueryParameters p_shape){
	return Dictionary::from_wasgo_id(_wasgo_Physics2DDirectSpaceState_wrapper_get_rest_info(wasgo_id, ((Variant) shape).get_wasgo_id()));
}
Array Physics2DDirectSpaceState::intersect_point(Vector2 p_point, int p_max_results = (int) 32, Array p_exclude = (Array) [], int p_collision_layer = (int) 2147483647, bool p_collide_with_bodies = (bool) True, bool p_collide_with_areas = (bool) False){
	return Array::from_wasgo_id(_wasgo_Physics2DDirectSpaceState_wrapper_intersect_point(wasgo_id, ((Variant) point).get_wasgo_id(), max_results, ((Variant) exclude).get_wasgo_id(), collision_layer, collide_with_bodies, collide_with_areas));
}
Array Physics2DDirectSpaceState::intersect_point_on_canvas(Vector2 p_point, int p_canvas_instance_id, int p_max_results = (int) 32, Array p_exclude = (Array) [], int p_collision_layer = (int) 2147483647, bool p_collide_with_bodies = (bool) True, bool p_collide_with_areas = (bool) False){
	return Array::from_wasgo_id(_wasgo_Physics2DDirectSpaceState_wrapper_intersect_point_on_canvas(wasgo_id, ((Variant) point).get_wasgo_id(), canvas_instance_id, max_results, ((Variant) exclude).get_wasgo_id(), collision_layer, collide_with_bodies, collide_with_areas));
}
Dictionary Physics2DDirectSpaceState::intersect_ray(Vector2 p_from, Vector2 p_to, Array p_exclude = (Array) [], int p_collision_layer = (int) 2147483647, bool p_collide_with_bodies = (bool) True, bool p_collide_with_areas = (bool) False){
	return Dictionary::from_wasgo_id(_wasgo_Physics2DDirectSpaceState_wrapper_intersect_ray(wasgo_id, ((Variant) from).get_wasgo_id(), ((Variant) to).get_wasgo_id(), ((Variant) exclude).get_wasgo_id(), collision_layer, collide_with_bodies, collide_with_areas));
}
Array Physics2DDirectSpaceState::intersect_shape(Physics2DShapeQueryParameters p_shape, int p_max_results = (int) 32){
	return Array::from_wasgo_id(_wasgo_Physics2DDirectSpaceState_wrapper_intersect_shape(wasgo_id, ((Variant) shape).get_wasgo_id(), max_results));
}