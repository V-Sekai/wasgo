/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PhysicsServer.h"
void PhysicsServer::area_add_shape(RID p_area, RID p_shape, Transform p_transform, bool p_disabled){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    

    Variant wasgo_var_shape = p_shape;
    uint8_t wasgo_buffer_shape[0];
    int wasgo_size_shape = 0;
    encode_variant(wasgo_var_shape, wasgo_buffer_shape, wasgo_size_shape);
    

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[52];
    int wasgo_size_transform = 52;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_PhysicsServer_wrapper_area_add_shape(wasgo_id, wasgo_buffer_area, wasgo_size_area, wasgo_buffer_shape, wasgo_size_shape, wasgo_buffer_transform, wasgo_size_transform, p_disabled);
}
void PhysicsServer::area_attach_object_instance_id(RID p_area, int p_id){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	_wasgo_PhysicsServer_wrapper_area_attach_object_instance_id(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_id);
}
void PhysicsServer::area_clear_shapes(RID p_area){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	_wasgo_PhysicsServer_wrapper_area_clear_shapes(wasgo_id, wasgo_buffer_area, wasgo_size_area);
}
RID PhysicsServer::area_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_PhysicsServer_wrapper_area_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
int PhysicsServer::area_get_object_instance_id(RID p_area){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	return (int) _wasgo_PhysicsServer_wrapper_area_get_object_instance_id(wasgo_id, wasgo_buffer_area, wasgo_size_area);
}
Variant PhysicsServer::area_get_param(RID p_area, PhysicsServer::AreaParameter p_param){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	return Variant(_wasgo_PhysicsServer_wrapper_area_get_param(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_param._get_wasgo_id()));
}
RID PhysicsServer::area_get_shape(RID p_area, int p_shape_idx){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_PhysicsServer_wrapper_area_get_shape(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_area, wasgo_size_area, p_shape_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
int PhysicsServer::area_get_shape_count(RID p_area){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	return (int) _wasgo_PhysicsServer_wrapper_area_get_shape_count(wasgo_id, wasgo_buffer_area, wasgo_size_area);
}
Transform PhysicsServer::area_get_shape_transform(RID p_area, int p_shape_idx){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_PhysicsServer_wrapper_area_get_shape_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_area, wasgo_size_area, p_shape_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform) wasgo_ret;
    
}
RID PhysicsServer::area_get_space(RID p_area){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_PhysicsServer_wrapper_area_get_space(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_area, wasgo_size_area);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
PhysicsServer::AreaSpaceOverrideMode PhysicsServer::area_get_space_override_mode(RID p_area){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	return PhysicsServer::AreaSpaceOverrideMode(_wasgo_PhysicsServer_wrapper_area_get_space_override_mode(wasgo_id, wasgo_buffer_area, wasgo_size_area));
}
Transform PhysicsServer::area_get_transform(RID p_area){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_PhysicsServer_wrapper_area_get_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_area, wasgo_size_area);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform) wasgo_ret;
    
}
bool PhysicsServer::area_is_ray_pickable(RID p_area){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	return (bool) _wasgo_PhysicsServer_wrapper_area_is_ray_pickable(wasgo_id, wasgo_buffer_area, wasgo_size_area);
}
void PhysicsServer::area_remove_shape(RID p_area, int p_shape_idx){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	_wasgo_PhysicsServer_wrapper_area_remove_shape(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_shape_idx);
}
void PhysicsServer::area_set_area_monitor_callback(RID p_area, Object p_receiver, String p_method){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    
	_wasgo_PhysicsServer_wrapper_area_set_area_monitor_callback(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_receiver._get_wasgo_id(), wasgo_buffer_method, wasgo_size_method);
}
void PhysicsServer::area_set_collision_layer(RID p_area, int p_layer){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	_wasgo_PhysicsServer_wrapper_area_set_collision_layer(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_layer);
}
void PhysicsServer::area_set_collision_mask(RID p_area, int p_mask){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	_wasgo_PhysicsServer_wrapper_area_set_collision_mask(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_mask);
}
void PhysicsServer::area_set_monitor_callback(RID p_area, Object p_receiver, String p_method){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    
	_wasgo_PhysicsServer_wrapper_area_set_monitor_callback(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_receiver._get_wasgo_id(), wasgo_buffer_method, wasgo_size_method);
}
void PhysicsServer::area_set_monitorable(RID p_area, bool p_monitorable){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	_wasgo_PhysicsServer_wrapper_area_set_monitorable(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_monitorable);
}
void PhysicsServer::area_set_param(RID p_area, PhysicsServer::AreaParameter p_param, Variant p_value){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	_wasgo_PhysicsServer_wrapper_area_set_param(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_param._get_wasgo_id(), p_value._get_wasgo_id());
}
void PhysicsServer::area_set_ray_pickable(RID p_area, bool p_enable){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	_wasgo_PhysicsServer_wrapper_area_set_ray_pickable(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_enable);
}
void PhysicsServer::area_set_shape(RID p_area, int p_shape_idx, RID p_shape){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    

    Variant wasgo_var_shape = p_shape;
    uint8_t wasgo_buffer_shape[0];
    int wasgo_size_shape = 0;
    encode_variant(wasgo_var_shape, wasgo_buffer_shape, wasgo_size_shape);
    
	_wasgo_PhysicsServer_wrapper_area_set_shape(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_shape_idx, wasgo_buffer_shape, wasgo_size_shape);
}
void PhysicsServer::area_set_shape_disabled(RID p_area, int p_shape_idx, bool p_disabled){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	_wasgo_PhysicsServer_wrapper_area_set_shape_disabled(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_shape_idx, p_disabled);
}
void PhysicsServer::area_set_shape_transform(RID p_area, int p_shape_idx, Transform p_transform){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[52];
    int wasgo_size_transform = 52;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_PhysicsServer_wrapper_area_set_shape_transform(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_shape_idx, wasgo_buffer_transform, wasgo_size_transform);
}
void PhysicsServer::area_set_space(RID p_area, RID p_space){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    

    Variant wasgo_var_space = p_space;
    uint8_t wasgo_buffer_space[0];
    int wasgo_size_space = 0;
    encode_variant(wasgo_var_space, wasgo_buffer_space, wasgo_size_space);
    
	_wasgo_PhysicsServer_wrapper_area_set_space(wasgo_id, wasgo_buffer_area, wasgo_size_area, wasgo_buffer_space, wasgo_size_space);
}
void PhysicsServer::area_set_space_override_mode(RID p_area, PhysicsServer::AreaSpaceOverrideMode p_mode){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	_wasgo_PhysicsServer_wrapper_area_set_space_override_mode(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_mode._get_wasgo_id());
}
void PhysicsServer::area_set_transform(RID p_area, Transform p_transform){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[52];
    int wasgo_size_transform = 52;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_PhysicsServer_wrapper_area_set_transform(wasgo_id, wasgo_buffer_area, wasgo_size_area, wasgo_buffer_transform, wasgo_size_transform);
}
void PhysicsServer::body_add_central_force(RID p_body, Vector3 p_force){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_var_force = p_force;
    uint8_t wasgo_buffer_force[16];
    int wasgo_size_force = 16;
    encode_variant(wasgo_var_force, wasgo_buffer_force, wasgo_size_force);
    
	_wasgo_PhysicsServer_wrapper_body_add_central_force(wasgo_id, wasgo_buffer_body, wasgo_size_body, wasgo_buffer_force, wasgo_size_force);
}
void PhysicsServer::body_add_collision_exception(RID p_body, RID p_excepted_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_var_excepted_body = p_excepted_body;
    uint8_t wasgo_buffer_excepted_body[0];
    int wasgo_size_excepted_body = 0;
    encode_variant(wasgo_var_excepted_body, wasgo_buffer_excepted_body, wasgo_size_excepted_body);
    
	_wasgo_PhysicsServer_wrapper_body_add_collision_exception(wasgo_id, wasgo_buffer_body, wasgo_size_body, wasgo_buffer_excepted_body, wasgo_size_excepted_body);
}
void PhysicsServer::body_add_force(RID p_body, Vector3 p_force, Vector3 p_position){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_var_force = p_force;
    uint8_t wasgo_buffer_force[16];
    int wasgo_size_force = 16;
    encode_variant(wasgo_var_force, wasgo_buffer_force, wasgo_size_force);
    

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[16];
    int wasgo_size_position = 16;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_PhysicsServer_wrapper_body_add_force(wasgo_id, wasgo_buffer_body, wasgo_size_body, wasgo_buffer_force, wasgo_size_force, wasgo_buffer_position, wasgo_size_position);
}
void PhysicsServer::body_add_shape(RID p_body, RID p_shape, Transform p_transform, bool p_disabled){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_var_shape = p_shape;
    uint8_t wasgo_buffer_shape[0];
    int wasgo_size_shape = 0;
    encode_variant(wasgo_var_shape, wasgo_buffer_shape, wasgo_size_shape);
    

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[52];
    int wasgo_size_transform = 52;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_PhysicsServer_wrapper_body_add_shape(wasgo_id, wasgo_buffer_body, wasgo_size_body, wasgo_buffer_shape, wasgo_size_shape, wasgo_buffer_transform, wasgo_size_transform, p_disabled);
}
void PhysicsServer::body_add_torque(RID p_body, Vector3 p_torque){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_var_torque = p_torque;
    uint8_t wasgo_buffer_torque[16];
    int wasgo_size_torque = 16;
    encode_variant(wasgo_var_torque, wasgo_buffer_torque, wasgo_size_torque);
    
	_wasgo_PhysicsServer_wrapper_body_add_torque(wasgo_id, wasgo_buffer_body, wasgo_size_body, wasgo_buffer_torque, wasgo_size_torque);
}
void PhysicsServer::body_apply_central_impulse(RID p_body, Vector3 p_impulse){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_var_impulse = p_impulse;
    uint8_t wasgo_buffer_impulse[16];
    int wasgo_size_impulse = 16;
    encode_variant(wasgo_var_impulse, wasgo_buffer_impulse, wasgo_size_impulse);
    
	_wasgo_PhysicsServer_wrapper_body_apply_central_impulse(wasgo_id, wasgo_buffer_body, wasgo_size_body, wasgo_buffer_impulse, wasgo_size_impulse);
}
void PhysicsServer::body_apply_impulse(RID p_body, Vector3 p_position, Vector3 p_impulse){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[16];
    int wasgo_size_position = 16;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    

    Variant wasgo_var_impulse = p_impulse;
    uint8_t wasgo_buffer_impulse[16];
    int wasgo_size_impulse = 16;
    encode_variant(wasgo_var_impulse, wasgo_buffer_impulse, wasgo_size_impulse);
    
	_wasgo_PhysicsServer_wrapper_body_apply_impulse(wasgo_id, wasgo_buffer_body, wasgo_size_body, wasgo_buffer_position, wasgo_size_position, wasgo_buffer_impulse, wasgo_size_impulse);
}
void PhysicsServer::body_apply_torque_impulse(RID p_body, Vector3 p_impulse){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_var_impulse = p_impulse;
    uint8_t wasgo_buffer_impulse[16];
    int wasgo_size_impulse = 16;
    encode_variant(wasgo_var_impulse, wasgo_buffer_impulse, wasgo_size_impulse);
    
	_wasgo_PhysicsServer_wrapper_body_apply_torque_impulse(wasgo_id, wasgo_buffer_body, wasgo_size_body, wasgo_buffer_impulse, wasgo_size_impulse);
}
void PhysicsServer::body_attach_object_instance_id(RID p_body, int p_id){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_PhysicsServer_wrapper_body_attach_object_instance_id(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_id);
}
void PhysicsServer::body_clear_shapes(RID p_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_PhysicsServer_wrapper_body_clear_shapes(wasgo_id, wasgo_buffer_body, wasgo_size_body);
}
RID PhysicsServer::body_create(PhysicsServer::BodyMode p_mode, bool p_init_sleeping){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_PhysicsServer_wrapper_body_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_mode._get_wasgo_id(), p_init_sleeping);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
int PhysicsServer::body_get_collision_layer(RID p_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return (int) _wasgo_PhysicsServer_wrapper_body_get_collision_layer(wasgo_id, wasgo_buffer_body, wasgo_size_body);
}
int PhysicsServer::body_get_collision_mask(RID p_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return (int) _wasgo_PhysicsServer_wrapper_body_get_collision_mask(wasgo_id, wasgo_buffer_body, wasgo_size_body);
}
PhysicsDirectBodyState PhysicsServer::body_get_direct_state(RID p_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return PhysicsDirectBodyState(_wasgo_PhysicsServer_wrapper_body_get_direct_state(wasgo_id, wasgo_buffer_body, wasgo_size_body));
}
float PhysicsServer::body_get_kinematic_safe_margin(RID p_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return (float) _wasgo_PhysicsServer_wrapper_body_get_kinematic_safe_margin(wasgo_id, wasgo_buffer_body, wasgo_size_body);
}
int PhysicsServer::body_get_max_contacts_reported(RID p_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return (int) _wasgo_PhysicsServer_wrapper_body_get_max_contacts_reported(wasgo_id, wasgo_buffer_body, wasgo_size_body);
}
PhysicsServer::BodyMode PhysicsServer::body_get_mode(RID p_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return PhysicsServer::BodyMode(_wasgo_PhysicsServer_wrapper_body_get_mode(wasgo_id, wasgo_buffer_body, wasgo_size_body));
}
int PhysicsServer::body_get_object_instance_id(RID p_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return (int) _wasgo_PhysicsServer_wrapper_body_get_object_instance_id(wasgo_id, wasgo_buffer_body, wasgo_size_body);
}
float PhysicsServer::body_get_param(RID p_body, PhysicsServer::BodyParameter p_param){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return (float) _wasgo_PhysicsServer_wrapper_body_get_param(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_param._get_wasgo_id());
}
RID PhysicsServer::body_get_shape(RID p_body, int p_shape_idx){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_PhysicsServer_wrapper_body_get_shape(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_body, wasgo_size_body, p_shape_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
int PhysicsServer::body_get_shape_count(RID p_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return (int) _wasgo_PhysicsServer_wrapper_body_get_shape_count(wasgo_id, wasgo_buffer_body, wasgo_size_body);
}
Transform PhysicsServer::body_get_shape_transform(RID p_body, int p_shape_idx){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_PhysicsServer_wrapper_body_get_shape_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_body, wasgo_size_body, p_shape_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform) wasgo_ret;
    
}
RID PhysicsServer::body_get_space(RID p_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_PhysicsServer_wrapper_body_get_space(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_body, wasgo_size_body);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
Variant PhysicsServer::body_get_state(RID p_body, PhysicsServer::BodyState p_state){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return Variant(_wasgo_PhysicsServer_wrapper_body_get_state(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_state._get_wasgo_id()));
}
bool PhysicsServer::body_is_axis_locked(RID p_body, PhysicsServer::BodyAxis p_axis){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return (bool) _wasgo_PhysicsServer_wrapper_body_is_axis_locked(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_axis._get_wasgo_id());
}
bool PhysicsServer::body_is_continuous_collision_detection_enabled(RID p_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return (bool) _wasgo_PhysicsServer_wrapper_body_is_continuous_collision_detection_enabled(wasgo_id, wasgo_buffer_body, wasgo_size_body);
}
bool PhysicsServer::body_is_omitting_force_integration(RID p_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return (bool) _wasgo_PhysicsServer_wrapper_body_is_omitting_force_integration(wasgo_id, wasgo_buffer_body, wasgo_size_body);
}
bool PhysicsServer::body_is_ray_pickable(RID p_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return (bool) _wasgo_PhysicsServer_wrapper_body_is_ray_pickable(wasgo_id, wasgo_buffer_body, wasgo_size_body);
}
void PhysicsServer::body_remove_collision_exception(RID p_body, RID p_excepted_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_var_excepted_body = p_excepted_body;
    uint8_t wasgo_buffer_excepted_body[0];
    int wasgo_size_excepted_body = 0;
    encode_variant(wasgo_var_excepted_body, wasgo_buffer_excepted_body, wasgo_size_excepted_body);
    
	_wasgo_PhysicsServer_wrapper_body_remove_collision_exception(wasgo_id, wasgo_buffer_body, wasgo_size_body, wasgo_buffer_excepted_body, wasgo_size_excepted_body);
}
void PhysicsServer::body_remove_shape(RID p_body, int p_shape_idx){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_PhysicsServer_wrapper_body_remove_shape(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_shape_idx);
}
void PhysicsServer::body_set_axis_lock(RID p_body, PhysicsServer::BodyAxis p_axis, bool p_lock){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_PhysicsServer_wrapper_body_set_axis_lock(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_axis._get_wasgo_id(), p_lock);
}
void PhysicsServer::body_set_axis_velocity(RID p_body, Vector3 p_axis_velocity){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_var_axis_velocity = p_axis_velocity;
    uint8_t wasgo_buffer_axis_velocity[16];
    int wasgo_size_axis_velocity = 16;
    encode_variant(wasgo_var_axis_velocity, wasgo_buffer_axis_velocity, wasgo_size_axis_velocity);
    
	_wasgo_PhysicsServer_wrapper_body_set_axis_velocity(wasgo_id, wasgo_buffer_body, wasgo_size_body, wasgo_buffer_axis_velocity, wasgo_size_axis_velocity);
}
void PhysicsServer::body_set_collision_layer(RID p_body, int p_layer){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_PhysicsServer_wrapper_body_set_collision_layer(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_layer);
}
void PhysicsServer::body_set_collision_mask(RID p_body, int p_mask){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_PhysicsServer_wrapper_body_set_collision_mask(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_mask);
}
void PhysicsServer::body_set_enable_continuous_collision_detection(RID p_body, bool p_enable){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_PhysicsServer_wrapper_body_set_enable_continuous_collision_detection(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_enable);
}
void PhysicsServer::body_set_force_integration_callback(RID p_body, Object p_receiver, String p_method, Variant p_userdata){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    
	_wasgo_PhysicsServer_wrapper_body_set_force_integration_callback(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_receiver._get_wasgo_id(), wasgo_buffer_method, wasgo_size_method, p_userdata._get_wasgo_id());
}
void PhysicsServer::body_set_kinematic_safe_margin(RID p_body, float p_margin){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_PhysicsServer_wrapper_body_set_kinematic_safe_margin(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_margin);
}
void PhysicsServer::body_set_max_contacts_reported(RID p_body, int p_amount){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_PhysicsServer_wrapper_body_set_max_contacts_reported(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_amount);
}
void PhysicsServer::body_set_mode(RID p_body, PhysicsServer::BodyMode p_mode){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_PhysicsServer_wrapper_body_set_mode(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_mode._get_wasgo_id());
}
void PhysicsServer::body_set_omit_force_integration(RID p_body, bool p_enable){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_PhysicsServer_wrapper_body_set_omit_force_integration(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_enable);
}
void PhysicsServer::body_set_param(RID p_body, PhysicsServer::BodyParameter p_param, float p_value){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_PhysicsServer_wrapper_body_set_param(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_param._get_wasgo_id(), p_value);
}
void PhysicsServer::body_set_ray_pickable(RID p_body, bool p_enable){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_PhysicsServer_wrapper_body_set_ray_pickable(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_enable);
}
void PhysicsServer::body_set_shape(RID p_body, int p_shape_idx, RID p_shape){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_var_shape = p_shape;
    uint8_t wasgo_buffer_shape[0];
    int wasgo_size_shape = 0;
    encode_variant(wasgo_var_shape, wasgo_buffer_shape, wasgo_size_shape);
    
	_wasgo_PhysicsServer_wrapper_body_set_shape(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_shape_idx, wasgo_buffer_shape, wasgo_size_shape);
}
void PhysicsServer::body_set_shape_disabled(RID p_body, int p_shape_idx, bool p_disabled){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_PhysicsServer_wrapper_body_set_shape_disabled(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_shape_idx, p_disabled);
}
void PhysicsServer::body_set_shape_transform(RID p_body, int p_shape_idx, Transform p_transform){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[52];
    int wasgo_size_transform = 52;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_PhysicsServer_wrapper_body_set_shape_transform(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_shape_idx, wasgo_buffer_transform, wasgo_size_transform);
}
void PhysicsServer::body_set_space(RID p_body, RID p_space){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_var_space = p_space;
    uint8_t wasgo_buffer_space[0];
    int wasgo_size_space = 0;
    encode_variant(wasgo_var_space, wasgo_buffer_space, wasgo_size_space);
    
	_wasgo_PhysicsServer_wrapper_body_set_space(wasgo_id, wasgo_buffer_body, wasgo_size_body, wasgo_buffer_space, wasgo_size_space);
}
void PhysicsServer::body_set_state(RID p_body, PhysicsServer::BodyState p_state, Variant p_value){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_PhysicsServer_wrapper_body_set_state(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_state._get_wasgo_id(), p_value._get_wasgo_id());
}
float PhysicsServer::cone_twist_joint_get_param(RID p_joint, PhysicsServer::ConeTwistJointParam p_param){

    Variant wasgo_var_joint = p_joint;
    uint8_t wasgo_buffer_joint[0];
    int wasgo_size_joint = 0;
    encode_variant(wasgo_var_joint, wasgo_buffer_joint, wasgo_size_joint);
    
	return (float) _wasgo_PhysicsServer_wrapper_cone_twist_joint_get_param(wasgo_id, wasgo_buffer_joint, wasgo_size_joint, p_param._get_wasgo_id());
}
void PhysicsServer::cone_twist_joint_set_param(RID p_joint, PhysicsServer::ConeTwistJointParam p_param, float p_value){

    Variant wasgo_var_joint = p_joint;
    uint8_t wasgo_buffer_joint[0];
    int wasgo_size_joint = 0;
    encode_variant(wasgo_var_joint, wasgo_buffer_joint, wasgo_size_joint);
    
	_wasgo_PhysicsServer_wrapper_cone_twist_joint_set_param(wasgo_id, wasgo_buffer_joint, wasgo_size_joint, p_param._get_wasgo_id(), p_value);
}
void PhysicsServer::free_rid(RID p_rid){

    Variant wasgo_var_rid = p_rid;
    uint8_t wasgo_buffer_rid[0];
    int wasgo_size_rid = 0;
    encode_variant(wasgo_var_rid, wasgo_buffer_rid, wasgo_size_rid);
    
	_wasgo_PhysicsServer_wrapper_free_rid(wasgo_id, wasgo_buffer_rid, wasgo_size_rid);
}
bool PhysicsServer::generic_6dof_joint_get_flag(RID p_joint, Vector3::Axis p_axis, PhysicsServer::G6DOFJointAxisFlag p_flag){

    Variant wasgo_var_joint = p_joint;
    uint8_t wasgo_buffer_joint[0];
    int wasgo_size_joint = 0;
    encode_variant(wasgo_var_joint, wasgo_buffer_joint, wasgo_size_joint);
    
	return (bool) _wasgo_PhysicsServer_wrapper_generic_6dof_joint_get_flag(wasgo_id, wasgo_buffer_joint, wasgo_size_joint, p_axis._get_wasgo_id(), p_flag._get_wasgo_id());
}
float PhysicsServer::generic_6dof_joint_get_param(RID p_joint, Vector3::Axis p_axis, PhysicsServer::G6DOFJointAxisParam p_param){

    Variant wasgo_var_joint = p_joint;
    uint8_t wasgo_buffer_joint[0];
    int wasgo_size_joint = 0;
    encode_variant(wasgo_var_joint, wasgo_buffer_joint, wasgo_size_joint);
    
	return (float) _wasgo_PhysicsServer_wrapper_generic_6dof_joint_get_param(wasgo_id, wasgo_buffer_joint, wasgo_size_joint, p_axis._get_wasgo_id(), p_param._get_wasgo_id());
}
void PhysicsServer::generic_6dof_joint_set_flag(RID p_joint, Vector3::Axis p_axis, PhysicsServer::G6DOFJointAxisFlag p_flag, bool p_enable){

    Variant wasgo_var_joint = p_joint;
    uint8_t wasgo_buffer_joint[0];
    int wasgo_size_joint = 0;
    encode_variant(wasgo_var_joint, wasgo_buffer_joint, wasgo_size_joint);
    
	_wasgo_PhysicsServer_wrapper_generic_6dof_joint_set_flag(wasgo_id, wasgo_buffer_joint, wasgo_size_joint, p_axis._get_wasgo_id(), p_flag._get_wasgo_id(), p_enable);
}
void PhysicsServer::generic_6dof_joint_set_param(RID p_joint, Vector3::Axis p_axis, PhysicsServer::G6DOFJointAxisParam p_param, float p_value){

    Variant wasgo_var_joint = p_joint;
    uint8_t wasgo_buffer_joint[0];
    int wasgo_size_joint = 0;
    encode_variant(wasgo_var_joint, wasgo_buffer_joint, wasgo_size_joint);
    
	_wasgo_PhysicsServer_wrapper_generic_6dof_joint_set_param(wasgo_id, wasgo_buffer_joint, wasgo_size_joint, p_axis._get_wasgo_id(), p_param._get_wasgo_id(), p_value);
}
int PhysicsServer::get_process_info(PhysicsServer::ProcessInfo p_process_info){
	return (int) _wasgo_PhysicsServer_wrapper_get_process_info(wasgo_id, p_process_info._get_wasgo_id());
}
bool PhysicsServer::hinge_joint_get_flag(RID p_joint, PhysicsServer::HingeJointFlag p_flag){

    Variant wasgo_var_joint = p_joint;
    uint8_t wasgo_buffer_joint[0];
    int wasgo_size_joint = 0;
    encode_variant(wasgo_var_joint, wasgo_buffer_joint, wasgo_size_joint);
    
	return (bool) _wasgo_PhysicsServer_wrapper_hinge_joint_get_flag(wasgo_id, wasgo_buffer_joint, wasgo_size_joint, p_flag._get_wasgo_id());
}
float PhysicsServer::hinge_joint_get_param(RID p_joint, PhysicsServer::HingeJointParam p_param){

    Variant wasgo_var_joint = p_joint;
    uint8_t wasgo_buffer_joint[0];
    int wasgo_size_joint = 0;
    encode_variant(wasgo_var_joint, wasgo_buffer_joint, wasgo_size_joint);
    
	return (float) _wasgo_PhysicsServer_wrapper_hinge_joint_get_param(wasgo_id, wasgo_buffer_joint, wasgo_size_joint, p_param._get_wasgo_id());
}
void PhysicsServer::hinge_joint_set_flag(RID p_joint, PhysicsServer::HingeJointFlag p_flag, bool p_enabled){

    Variant wasgo_var_joint = p_joint;
    uint8_t wasgo_buffer_joint[0];
    int wasgo_size_joint = 0;
    encode_variant(wasgo_var_joint, wasgo_buffer_joint, wasgo_size_joint);
    
	_wasgo_PhysicsServer_wrapper_hinge_joint_set_flag(wasgo_id, wasgo_buffer_joint, wasgo_size_joint, p_flag._get_wasgo_id(), p_enabled);
}
void PhysicsServer::hinge_joint_set_param(RID p_joint, PhysicsServer::HingeJointParam p_param, float p_value){

    Variant wasgo_var_joint = p_joint;
    uint8_t wasgo_buffer_joint[0];
    int wasgo_size_joint = 0;
    encode_variant(wasgo_var_joint, wasgo_buffer_joint, wasgo_size_joint);
    
	_wasgo_PhysicsServer_wrapper_hinge_joint_set_param(wasgo_id, wasgo_buffer_joint, wasgo_size_joint, p_param._get_wasgo_id(), p_value);
}
RID PhysicsServer::joint_create_cone_twist(RID p_body_A, Transform p_local_ref_A, RID p_body_B, Transform p_local_ref_B){

    Variant wasgo_var_body_A = p_body_A;
    uint8_t wasgo_buffer_body_A[0];
    int wasgo_size_body_A = 0;
    encode_variant(wasgo_var_body_A, wasgo_buffer_body_A, wasgo_size_body_A);
    

    Variant wasgo_var_local_ref_A = p_local_ref_A;
    uint8_t wasgo_buffer_local_ref_A[52];
    int wasgo_size_local_ref_A = 52;
    encode_variant(wasgo_var_local_ref_A, wasgo_buffer_local_ref_A, wasgo_size_local_ref_A);
    

    Variant wasgo_var_body_B = p_body_B;
    uint8_t wasgo_buffer_body_B[0];
    int wasgo_size_body_B = 0;
    encode_variant(wasgo_var_body_B, wasgo_buffer_body_B, wasgo_size_body_B);
    

    Variant wasgo_var_local_ref_B = p_local_ref_B;
    uint8_t wasgo_buffer_local_ref_B[52];
    int wasgo_size_local_ref_B = 52;
    encode_variant(wasgo_var_local_ref_B, wasgo_buffer_local_ref_B, wasgo_size_local_ref_B);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_PhysicsServer_wrapper_joint_create_cone_twist(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_body_A, wasgo_size_body_A, wasgo_buffer_local_ref_A, wasgo_size_local_ref_A, wasgo_buffer_body_B, wasgo_size_body_B, wasgo_buffer_local_ref_B, wasgo_size_local_ref_B);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
RID PhysicsServer::joint_create_generic_6dof(RID p_body_A, Transform p_local_ref_A, RID p_body_B, Transform p_local_ref_B){

    Variant wasgo_var_body_A = p_body_A;
    uint8_t wasgo_buffer_body_A[0];
    int wasgo_size_body_A = 0;
    encode_variant(wasgo_var_body_A, wasgo_buffer_body_A, wasgo_size_body_A);
    

    Variant wasgo_var_local_ref_A = p_local_ref_A;
    uint8_t wasgo_buffer_local_ref_A[52];
    int wasgo_size_local_ref_A = 52;
    encode_variant(wasgo_var_local_ref_A, wasgo_buffer_local_ref_A, wasgo_size_local_ref_A);
    

    Variant wasgo_var_body_B = p_body_B;
    uint8_t wasgo_buffer_body_B[0];
    int wasgo_size_body_B = 0;
    encode_variant(wasgo_var_body_B, wasgo_buffer_body_B, wasgo_size_body_B);
    

    Variant wasgo_var_local_ref_B = p_local_ref_B;
    uint8_t wasgo_buffer_local_ref_B[52];
    int wasgo_size_local_ref_B = 52;
    encode_variant(wasgo_var_local_ref_B, wasgo_buffer_local_ref_B, wasgo_size_local_ref_B);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_PhysicsServer_wrapper_joint_create_generic_6dof(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_body_A, wasgo_size_body_A, wasgo_buffer_local_ref_A, wasgo_size_local_ref_A, wasgo_buffer_body_B, wasgo_size_body_B, wasgo_buffer_local_ref_B, wasgo_size_local_ref_B);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
RID PhysicsServer::joint_create_hinge(RID p_body_A, Transform p_hinge_A, RID p_body_B, Transform p_hinge_B){

    Variant wasgo_var_body_A = p_body_A;
    uint8_t wasgo_buffer_body_A[0];
    int wasgo_size_body_A = 0;
    encode_variant(wasgo_var_body_A, wasgo_buffer_body_A, wasgo_size_body_A);
    

    Variant wasgo_var_hinge_A = p_hinge_A;
    uint8_t wasgo_buffer_hinge_A[52];
    int wasgo_size_hinge_A = 52;
    encode_variant(wasgo_var_hinge_A, wasgo_buffer_hinge_A, wasgo_size_hinge_A);
    

    Variant wasgo_var_body_B = p_body_B;
    uint8_t wasgo_buffer_body_B[0];
    int wasgo_size_body_B = 0;
    encode_variant(wasgo_var_body_B, wasgo_buffer_body_B, wasgo_size_body_B);
    

    Variant wasgo_var_hinge_B = p_hinge_B;
    uint8_t wasgo_buffer_hinge_B[52];
    int wasgo_size_hinge_B = 52;
    encode_variant(wasgo_var_hinge_B, wasgo_buffer_hinge_B, wasgo_size_hinge_B);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_PhysicsServer_wrapper_joint_create_hinge(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_body_A, wasgo_size_body_A, wasgo_buffer_hinge_A, wasgo_size_hinge_A, wasgo_buffer_body_B, wasgo_size_body_B, wasgo_buffer_hinge_B, wasgo_size_hinge_B);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
RID PhysicsServer::joint_create_pin(RID p_body_A, Vector3 p_local_A, RID p_body_B, Vector3 p_local_B){

    Variant wasgo_var_body_A = p_body_A;
    uint8_t wasgo_buffer_body_A[0];
    int wasgo_size_body_A = 0;
    encode_variant(wasgo_var_body_A, wasgo_buffer_body_A, wasgo_size_body_A);
    

    Variant wasgo_var_local_A = p_local_A;
    uint8_t wasgo_buffer_local_A[16];
    int wasgo_size_local_A = 16;
    encode_variant(wasgo_var_local_A, wasgo_buffer_local_A, wasgo_size_local_A);
    

    Variant wasgo_var_body_B = p_body_B;
    uint8_t wasgo_buffer_body_B[0];
    int wasgo_size_body_B = 0;
    encode_variant(wasgo_var_body_B, wasgo_buffer_body_B, wasgo_size_body_B);
    

    Variant wasgo_var_local_B = p_local_B;
    uint8_t wasgo_buffer_local_B[16];
    int wasgo_size_local_B = 16;
    encode_variant(wasgo_var_local_B, wasgo_buffer_local_B, wasgo_size_local_B);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_PhysicsServer_wrapper_joint_create_pin(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_body_A, wasgo_size_body_A, wasgo_buffer_local_A, wasgo_size_local_A, wasgo_buffer_body_B, wasgo_size_body_B, wasgo_buffer_local_B, wasgo_size_local_B);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
RID PhysicsServer::joint_create_slider(RID p_body_A, Transform p_local_ref_A, RID p_body_B, Transform p_local_ref_B){

    Variant wasgo_var_body_A = p_body_A;
    uint8_t wasgo_buffer_body_A[0];
    int wasgo_size_body_A = 0;
    encode_variant(wasgo_var_body_A, wasgo_buffer_body_A, wasgo_size_body_A);
    

    Variant wasgo_var_local_ref_A = p_local_ref_A;
    uint8_t wasgo_buffer_local_ref_A[52];
    int wasgo_size_local_ref_A = 52;
    encode_variant(wasgo_var_local_ref_A, wasgo_buffer_local_ref_A, wasgo_size_local_ref_A);
    

    Variant wasgo_var_body_B = p_body_B;
    uint8_t wasgo_buffer_body_B[0];
    int wasgo_size_body_B = 0;
    encode_variant(wasgo_var_body_B, wasgo_buffer_body_B, wasgo_size_body_B);
    

    Variant wasgo_var_local_ref_B = p_local_ref_B;
    uint8_t wasgo_buffer_local_ref_B[52];
    int wasgo_size_local_ref_B = 52;
    encode_variant(wasgo_var_local_ref_B, wasgo_buffer_local_ref_B, wasgo_size_local_ref_B);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_PhysicsServer_wrapper_joint_create_slider(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_body_A, wasgo_size_body_A, wasgo_buffer_local_ref_A, wasgo_size_local_ref_A, wasgo_buffer_body_B, wasgo_size_body_B, wasgo_buffer_local_ref_B, wasgo_size_local_ref_B);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
int PhysicsServer::joint_get_solver_priority(RID p_joint){

    Variant wasgo_var_joint = p_joint;
    uint8_t wasgo_buffer_joint[0];
    int wasgo_size_joint = 0;
    encode_variant(wasgo_var_joint, wasgo_buffer_joint, wasgo_size_joint);
    
	return (int) _wasgo_PhysicsServer_wrapper_joint_get_solver_priority(wasgo_id, wasgo_buffer_joint, wasgo_size_joint);
}
PhysicsServer::JointType PhysicsServer::joint_get_type(RID p_joint){

    Variant wasgo_var_joint = p_joint;
    uint8_t wasgo_buffer_joint[0];
    int wasgo_size_joint = 0;
    encode_variant(wasgo_var_joint, wasgo_buffer_joint, wasgo_size_joint);
    
	return PhysicsServer::JointType(_wasgo_PhysicsServer_wrapper_joint_get_type(wasgo_id, wasgo_buffer_joint, wasgo_size_joint));
}
void PhysicsServer::joint_set_solver_priority(RID p_joint, int p_priority){

    Variant wasgo_var_joint = p_joint;
    uint8_t wasgo_buffer_joint[0];
    int wasgo_size_joint = 0;
    encode_variant(wasgo_var_joint, wasgo_buffer_joint, wasgo_size_joint);
    
	_wasgo_PhysicsServer_wrapper_joint_set_solver_priority(wasgo_id, wasgo_buffer_joint, wasgo_size_joint, p_priority);
}
Vector3 PhysicsServer::pin_joint_get_local_a(RID p_joint){

    Variant wasgo_var_joint = p_joint;
    uint8_t wasgo_buffer_joint[0];
    int wasgo_size_joint = 0;
    encode_variant(wasgo_var_joint, wasgo_buffer_joint, wasgo_size_joint);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_PhysicsServer_wrapper_pin_joint_get_local_a(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_joint, wasgo_size_joint);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
Vector3 PhysicsServer::pin_joint_get_local_b(RID p_joint){

    Variant wasgo_var_joint = p_joint;
    uint8_t wasgo_buffer_joint[0];
    int wasgo_size_joint = 0;
    encode_variant(wasgo_var_joint, wasgo_buffer_joint, wasgo_size_joint);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_PhysicsServer_wrapper_pin_joint_get_local_b(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_joint, wasgo_size_joint);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
float PhysicsServer::pin_joint_get_param(RID p_joint, PhysicsServer::PinJointParam p_param){

    Variant wasgo_var_joint = p_joint;
    uint8_t wasgo_buffer_joint[0];
    int wasgo_size_joint = 0;
    encode_variant(wasgo_var_joint, wasgo_buffer_joint, wasgo_size_joint);
    
	return (float) _wasgo_PhysicsServer_wrapper_pin_joint_get_param(wasgo_id, wasgo_buffer_joint, wasgo_size_joint, p_param._get_wasgo_id());
}
void PhysicsServer::pin_joint_set_local_a(RID p_joint, Vector3 p_local_A){

    Variant wasgo_var_joint = p_joint;
    uint8_t wasgo_buffer_joint[0];
    int wasgo_size_joint = 0;
    encode_variant(wasgo_var_joint, wasgo_buffer_joint, wasgo_size_joint);
    

    Variant wasgo_var_local_A = p_local_A;
    uint8_t wasgo_buffer_local_A[16];
    int wasgo_size_local_A = 16;
    encode_variant(wasgo_var_local_A, wasgo_buffer_local_A, wasgo_size_local_A);
    
	_wasgo_PhysicsServer_wrapper_pin_joint_set_local_a(wasgo_id, wasgo_buffer_joint, wasgo_size_joint, wasgo_buffer_local_A, wasgo_size_local_A);
}
void PhysicsServer::pin_joint_set_local_b(RID p_joint, Vector3 p_local_B){

    Variant wasgo_var_joint = p_joint;
    uint8_t wasgo_buffer_joint[0];
    int wasgo_size_joint = 0;
    encode_variant(wasgo_var_joint, wasgo_buffer_joint, wasgo_size_joint);
    

    Variant wasgo_var_local_B = p_local_B;
    uint8_t wasgo_buffer_local_B[16];
    int wasgo_size_local_B = 16;
    encode_variant(wasgo_var_local_B, wasgo_buffer_local_B, wasgo_size_local_B);
    
	_wasgo_PhysicsServer_wrapper_pin_joint_set_local_b(wasgo_id, wasgo_buffer_joint, wasgo_size_joint, wasgo_buffer_local_B, wasgo_size_local_B);
}
void PhysicsServer::pin_joint_set_param(RID p_joint, PhysicsServer::PinJointParam p_param, float p_value){

    Variant wasgo_var_joint = p_joint;
    uint8_t wasgo_buffer_joint[0];
    int wasgo_size_joint = 0;
    encode_variant(wasgo_var_joint, wasgo_buffer_joint, wasgo_size_joint);
    
	_wasgo_PhysicsServer_wrapper_pin_joint_set_param(wasgo_id, wasgo_buffer_joint, wasgo_size_joint, p_param._get_wasgo_id(), p_value);
}
void PhysicsServer::set_active(bool p_active){
	_wasgo_PhysicsServer_wrapper_set_active(wasgo_id, p_active);
}
RID PhysicsServer::shape_create(PhysicsServer::ShapeType p_type){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_PhysicsServer_wrapper_shape_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_type._get_wasgo_id());
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
Variant PhysicsServer::shape_get_data(RID p_shape){

    Variant wasgo_var_shape = p_shape;
    uint8_t wasgo_buffer_shape[0];
    int wasgo_size_shape = 0;
    encode_variant(wasgo_var_shape, wasgo_buffer_shape, wasgo_size_shape);
    
	return Variant(_wasgo_PhysicsServer_wrapper_shape_get_data(wasgo_id, wasgo_buffer_shape, wasgo_size_shape));
}
PhysicsServer::ShapeType PhysicsServer::shape_get_type(RID p_shape){

    Variant wasgo_var_shape = p_shape;
    uint8_t wasgo_buffer_shape[0];
    int wasgo_size_shape = 0;
    encode_variant(wasgo_var_shape, wasgo_buffer_shape, wasgo_size_shape);
    
	return PhysicsServer::ShapeType(_wasgo_PhysicsServer_wrapper_shape_get_type(wasgo_id, wasgo_buffer_shape, wasgo_size_shape));
}
void PhysicsServer::shape_set_data(RID p_shape, Variant p_data){

    Variant wasgo_var_shape = p_shape;
    uint8_t wasgo_buffer_shape[0];
    int wasgo_size_shape = 0;
    encode_variant(wasgo_var_shape, wasgo_buffer_shape, wasgo_size_shape);
    
	_wasgo_PhysicsServer_wrapper_shape_set_data(wasgo_id, wasgo_buffer_shape, wasgo_size_shape, p_data._get_wasgo_id());
}
float PhysicsServer::slider_joint_get_param(RID p_joint, PhysicsServer::SliderJointParam p_param){

    Variant wasgo_var_joint = p_joint;
    uint8_t wasgo_buffer_joint[0];
    int wasgo_size_joint = 0;
    encode_variant(wasgo_var_joint, wasgo_buffer_joint, wasgo_size_joint);
    
	return (float) _wasgo_PhysicsServer_wrapper_slider_joint_get_param(wasgo_id, wasgo_buffer_joint, wasgo_size_joint, p_param._get_wasgo_id());
}
void PhysicsServer::slider_joint_set_param(RID p_joint, PhysicsServer::SliderJointParam p_param, float p_value){

    Variant wasgo_var_joint = p_joint;
    uint8_t wasgo_buffer_joint[0];
    int wasgo_size_joint = 0;
    encode_variant(wasgo_var_joint, wasgo_buffer_joint, wasgo_size_joint);
    
	_wasgo_PhysicsServer_wrapper_slider_joint_set_param(wasgo_id, wasgo_buffer_joint, wasgo_size_joint, p_param._get_wasgo_id(), p_value);
}
RID PhysicsServer::space_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_PhysicsServer_wrapper_space_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
PhysicsDirectSpaceState PhysicsServer::space_get_direct_state(RID p_space){

    Variant wasgo_var_space = p_space;
    uint8_t wasgo_buffer_space[0];
    int wasgo_size_space = 0;
    encode_variant(wasgo_var_space, wasgo_buffer_space, wasgo_size_space);
    
	return PhysicsDirectSpaceState(_wasgo_PhysicsServer_wrapper_space_get_direct_state(wasgo_id, wasgo_buffer_space, wasgo_size_space));
}
float PhysicsServer::space_get_param(RID p_space, PhysicsServer::SpaceParameter p_param){

    Variant wasgo_var_space = p_space;
    uint8_t wasgo_buffer_space[0];
    int wasgo_size_space = 0;
    encode_variant(wasgo_var_space, wasgo_buffer_space, wasgo_size_space);
    
	return (float) _wasgo_PhysicsServer_wrapper_space_get_param(wasgo_id, wasgo_buffer_space, wasgo_size_space, p_param._get_wasgo_id());
}
bool PhysicsServer::space_is_active(RID p_space){

    Variant wasgo_var_space = p_space;
    uint8_t wasgo_buffer_space[0];
    int wasgo_size_space = 0;
    encode_variant(wasgo_var_space, wasgo_buffer_space, wasgo_size_space);
    
	return (bool) _wasgo_PhysicsServer_wrapper_space_is_active(wasgo_id, wasgo_buffer_space, wasgo_size_space);
}
void PhysicsServer::space_set_active(RID p_space, bool p_active){

    Variant wasgo_var_space = p_space;
    uint8_t wasgo_buffer_space[0];
    int wasgo_size_space = 0;
    encode_variant(wasgo_var_space, wasgo_buffer_space, wasgo_size_space);
    
	_wasgo_PhysicsServer_wrapper_space_set_active(wasgo_id, wasgo_buffer_space, wasgo_size_space, p_active);
}
void PhysicsServer::space_set_param(RID p_space, PhysicsServer::SpaceParameter p_param, float p_value){

    Variant wasgo_var_space = p_space;
    uint8_t wasgo_buffer_space[0];
    int wasgo_size_space = 0;
    encode_variant(wasgo_var_space, wasgo_buffer_space, wasgo_size_space);
    
	_wasgo_PhysicsServer_wrapper_space_set_param(wasgo_id, wasgo_buffer_space, wasgo_size_space, p_param._get_wasgo_id(), p_value);
}

PhysicsServer::PhysicsServer(WasGoID p_wasgo_id) : Object(p_wasgo_id){
}
PhysicsServer::PhysicsServer(Object other) : Object(other._get_wasgo_id()){
}
PhysicsServer::PhysicsServer():Object(){
}
PhysicsServer PhysicsServer::new_instance(){
    return PhysicsServer(_wasgo_PhysicsServer_constructor());
}
WasGoID PhysicsServer::_get_wasgo_id(){
    return wasgo_id;
}
PhysicsServer::operator bool(){
    return (bool) wasgo_id;
}
