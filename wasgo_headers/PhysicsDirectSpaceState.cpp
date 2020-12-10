/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PhysicsDirectSpaceState.h"
Array PhysicsDirectSpaceState::cast_motion(PhysicsShapeQueryParameters p_shape, Vector3 p_motion){

    Variant wasgo_var_motion = p_motion;
    uint8_t wasgo_buffer_motion[16];
    int wasgo_size_motion = 16;
    encode_variant(wasgo_var_motion, wasgo_buffer_motion, wasgo_size_motion);
    
	return Array(_wasgo_PhysicsDirectSpaceState_wrapper_cast_motion(wasgo_id, p_shape._get_wasgo_id(), wasgo_buffer_motion, wasgo_size_motion, wasgo_size_motion));
}
Array PhysicsDirectSpaceState::collide_shape(PhysicsShapeQueryParameters p_shape, int p_max_results){
	return Array(_wasgo_PhysicsDirectSpaceState_wrapper_collide_shape(wasgo_id, p_shape._get_wasgo_id(), p_max_results));
}
Dictionary PhysicsDirectSpaceState::get_rest_info(PhysicsShapeQueryParameters p_shape){
	return Dictionary(_wasgo_PhysicsDirectSpaceState_wrapper_get_rest_info(wasgo_id, p_shape._get_wasgo_id()));
}
Dictionary PhysicsDirectSpaceState::intersect_ray(Vector3 p_from, Vector3 p_to, Array p_exclude, int p_collision_mask, bool p_collide_with_bodies, bool p_collide_with_areas){

    Variant wasgo_var_from = p_from;
    uint8_t wasgo_buffer_from[16];
    int wasgo_size_from = 16;
    encode_variant(wasgo_var_from, wasgo_buffer_from, wasgo_size_from);
    

    Variant wasgo_var_to = p_to;
    uint8_t wasgo_buffer_to[16];
    int wasgo_size_to = 16;
    encode_variant(wasgo_var_to, wasgo_buffer_to, wasgo_size_to);
    
	return Dictionary(_wasgo_PhysicsDirectSpaceState_wrapper_intersect_ray(wasgo_id, wasgo_buffer_from, wasgo_size_from, -69, wasgo_buffer_to, wasgo_size_to, p_exclude._get_wasgo_id(), p_collision_mask, p_collide_with_bodies, p_collide_with_areas));
}
Array PhysicsDirectSpaceState::intersect_shape(PhysicsShapeQueryParameters p_shape, int p_max_results){
	return Array(_wasgo_PhysicsDirectSpaceState_wrapper_intersect_shape(wasgo_id, p_shape._get_wasgo_id(), p_max_results));
}

PhysicsDirectSpaceState::PhysicsDirectSpaceState(WasGoID p_wasgo_id) : Object(p_wasgo_id){
}
PhysicsDirectSpaceState::PhysicsDirectSpaceState(Object other) : Object(other._get_wasgo_id()){
}
PhysicsDirectSpaceState::PhysicsDirectSpaceState():Object(){
}
PhysicsDirectSpaceState PhysicsDirectSpaceState::new_instance(){
    return PhysicsDirectSpaceState(_wasgo_PhysicsDirectSpaceState_constructor());
}
WasGoID PhysicsDirectSpaceState::_get_wasgo_id(){
    return wasgo_id;
}
PhysicsDirectSpaceState::operator bool(){
    return (bool) wasgo_id;
}
