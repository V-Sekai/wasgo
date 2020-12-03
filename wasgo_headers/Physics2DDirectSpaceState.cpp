/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Physics2DDirectSpaceState.h"
Array Physics2DDirectSpaceState::cast_motion(Physics2DShapeQueryParameters p_shape){
	return Array(_wasgo_Physics2DDirectSpaceState_wrapper_cast_motion(wasgo_id, p_shape._get_wasgo_id()));
}
Array Physics2DDirectSpaceState::collide_shape(Physics2DShapeQueryParameters p_shape, int p_max_results = (int) 32){
	return Array(_wasgo_Physics2DDirectSpaceState_wrapper_collide_shape(wasgo_id, p_shape._get_wasgo_id(), p_max_results));
}
Dictionary Physics2DDirectSpaceState::get_rest_info(Physics2DShapeQueryParameters p_shape){
	return Dictionary(_wasgo_Physics2DDirectSpaceState_wrapper_get_rest_info(wasgo_id, p_shape._get_wasgo_id()));
}
Array Physics2DDirectSpaceState::intersect_point(Vector2 p_point, int p_max_results = (int) 32, Array p_exclude = (Array) [], int p_collision_layer = (int) 2147483647, bool p_collide_with_bodies = (bool) true, bool p_collide_with_areas = (bool) false){

    Variant wasgo_var_point = p_point;
    uint8_t wasgo_buffer_point[12];
    int wasgo_size_point = 12;
    encode_variant(wasgo_var_point, wasgo_buffer_point, wasgo_size_point);
    
	return Array(_wasgo_Physics2DDirectSpaceState_wrapper_intersect_point(wasgo_id, wasgo_buffer_point, wasgo_size_point, p_max_results, p_exclude._get_wasgo_id(), p_collision_layer, p_collide_with_bodies, p_collide_with_areas));
}
Array Physics2DDirectSpaceState::intersect_point_on_canvas(Vector2 p_point, int p_canvas_instance_id, int p_max_results = (int) 32, Array p_exclude = (Array) [], int p_collision_layer = (int) 2147483647, bool p_collide_with_bodies = (bool) true, bool p_collide_with_areas = (bool) false){

    Variant wasgo_var_point = p_point;
    uint8_t wasgo_buffer_point[12];
    int wasgo_size_point = 12;
    encode_variant(wasgo_var_point, wasgo_buffer_point, wasgo_size_point);
    
	return Array(_wasgo_Physics2DDirectSpaceState_wrapper_intersect_point_on_canvas(wasgo_id, wasgo_buffer_point, wasgo_size_point, p_canvas_instance_id, p_max_results, p_exclude._get_wasgo_id(), p_collision_layer, p_collide_with_bodies, p_collide_with_areas));
}
Dictionary Physics2DDirectSpaceState::intersect_ray(Vector2 p_from, Vector2 p_to, Array p_exclude = (Array) [], int p_collision_layer = (int) 2147483647, bool p_collide_with_bodies = (bool) true, bool p_collide_with_areas = (bool) false){

    Variant wasgo_var_from = p_from;
    uint8_t wasgo_buffer_from[12];
    int wasgo_size_from = 12;
    encode_variant(wasgo_var_from, wasgo_buffer_from, wasgo_size_from);
    

    Variant wasgo_var_to = p_to;
    uint8_t wasgo_buffer_to[12];
    int wasgo_size_to = 12;
    encode_variant(wasgo_var_to, wasgo_buffer_to, wasgo_size_to);
    
	return Dictionary(_wasgo_Physics2DDirectSpaceState_wrapper_intersect_ray(wasgo_id, wasgo_buffer_from, wasgo_size_from, wasgo_buffer_to, wasgo_size_to, p_exclude._get_wasgo_id(), p_collision_layer, p_collide_with_bodies, p_collide_with_areas));
}
Array Physics2DDirectSpaceState::intersect_shape(Physics2DShapeQueryParameters p_shape, int p_max_results = (int) 32){
	return Array(_wasgo_Physics2DDirectSpaceState_wrapper_intersect_shape(wasgo_id, p_shape._get_wasgo_id(), p_max_results));
}