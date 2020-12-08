/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Physics2DServer.h"
void Physics2DServer::area_add_shape(RID p_area, RID p_shape, Transform2D p_transform, bool p_disabled){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    

    Variant wasgo_var_shape = p_shape;
    uint8_t wasgo_buffer_shape[0];
    int wasgo_size_shape = 0;
    encode_variant(wasgo_var_shape, wasgo_buffer_shape, wasgo_size_shape);
    

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[28];
    int wasgo_size_transform = 28;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_Physics2DServer_wrapper_area_add_shape(wasgo_id, wasgo_buffer_area, wasgo_size_area, wasgo_buffer_shape, wasgo_size_shape, wasgo_buffer_transform, wasgo_size_transform, p_disabled);
}
void Physics2DServer::area_attach_canvas_instance_id(RID p_area, int p_id){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	_wasgo_Physics2DServer_wrapper_area_attach_canvas_instance_id(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_id);
}
void Physics2DServer::area_attach_object_instance_id(RID p_area, int p_id){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	_wasgo_Physics2DServer_wrapper_area_attach_object_instance_id(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_id);
}
void Physics2DServer::area_clear_shapes(RID p_area){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	_wasgo_Physics2DServer_wrapper_area_clear_shapes(wasgo_id, wasgo_buffer_area, wasgo_size_area);
}
RID Physics2DServer::area_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_Physics2DServer_wrapper_area_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
int Physics2DServer::area_get_canvas_instance_id(RID p_area){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	return (int) _wasgo_Physics2DServer_wrapper_area_get_canvas_instance_id(wasgo_id, wasgo_buffer_area, wasgo_size_area);
}
int Physics2DServer::area_get_object_instance_id(RID p_area){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	return (int) _wasgo_Physics2DServer_wrapper_area_get_object_instance_id(wasgo_id, wasgo_buffer_area, wasgo_size_area);
}
Variant Physics2DServer::area_get_param(RID p_area, Physics2DServer::AreaParameter p_param){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	return Variant(_wasgo_Physics2DServer_wrapper_area_get_param(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_param._get_wasgo_id()));
}
RID Physics2DServer::area_get_shape(RID p_area, int p_shape_idx){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_Physics2DServer_wrapper_area_get_shape(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_area, wasgo_size_area, p_shape_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
int Physics2DServer::area_get_shape_count(RID p_area){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	return (int) _wasgo_Physics2DServer_wrapper_area_get_shape_count(wasgo_id, wasgo_buffer_area, wasgo_size_area);
}
Transform2D Physics2DServer::area_get_shape_transform(RID p_area, int p_shape_idx){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_Physics2DServer_wrapper_area_get_shape_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_area, wasgo_size_area, p_shape_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform2D) wasgo_ret;
    
}
RID Physics2DServer::area_get_space(RID p_area){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_Physics2DServer_wrapper_area_get_space(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_area, wasgo_size_area);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
Physics2DServer::AreaSpaceOverrideMode Physics2DServer::area_get_space_override_mode(RID p_area){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	return Physics2DServer::AreaSpaceOverrideMode(_wasgo_Physics2DServer_wrapper_area_get_space_override_mode(wasgo_id, wasgo_buffer_area, wasgo_size_area));
}
Transform2D Physics2DServer::area_get_transform(RID p_area){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_Physics2DServer_wrapper_area_get_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_area, wasgo_size_area);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform2D) wasgo_ret;
    
}
void Physics2DServer::area_remove_shape(RID p_area, int p_shape_idx){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	_wasgo_Physics2DServer_wrapper_area_remove_shape(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_shape_idx);
}
void Physics2DServer::area_set_area_monitor_callback(RID p_area, Object p_receiver, String p_method){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    
	_wasgo_Physics2DServer_wrapper_area_set_area_monitor_callback(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_receiver._get_wasgo_id(), wasgo_buffer_method, wasgo_size_method);
}
void Physics2DServer::area_set_collision_layer(RID p_area, int p_layer){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	_wasgo_Physics2DServer_wrapper_area_set_collision_layer(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_layer);
}
void Physics2DServer::area_set_collision_mask(RID p_area, int p_mask){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	_wasgo_Physics2DServer_wrapper_area_set_collision_mask(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_mask);
}
void Physics2DServer::area_set_monitor_callback(RID p_area, Object p_receiver, String p_method){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    
	_wasgo_Physics2DServer_wrapper_area_set_monitor_callback(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_receiver._get_wasgo_id(), wasgo_buffer_method, wasgo_size_method);
}
void Physics2DServer::area_set_monitorable(RID p_area, bool p_monitorable){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	_wasgo_Physics2DServer_wrapper_area_set_monitorable(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_monitorable);
}
void Physics2DServer::area_set_param(RID p_area, Physics2DServer::AreaParameter p_param, Variant p_value){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	_wasgo_Physics2DServer_wrapper_area_set_param(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_param._get_wasgo_id(), p_value._get_wasgo_id());
}
void Physics2DServer::area_set_shape(RID p_area, int p_shape_idx, RID p_shape){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    

    Variant wasgo_var_shape = p_shape;
    uint8_t wasgo_buffer_shape[0];
    int wasgo_size_shape = 0;
    encode_variant(wasgo_var_shape, wasgo_buffer_shape, wasgo_size_shape);
    
	_wasgo_Physics2DServer_wrapper_area_set_shape(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_shape_idx, wasgo_buffer_shape, wasgo_size_shape);
}
void Physics2DServer::area_set_shape_disabled(RID p_area, int p_shape_idx, bool p_disabled){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	_wasgo_Physics2DServer_wrapper_area_set_shape_disabled(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_shape_idx, p_disabled);
}
void Physics2DServer::area_set_shape_transform(RID p_area, int p_shape_idx, Transform2D p_transform){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[28];
    int wasgo_size_transform = 28;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_Physics2DServer_wrapper_area_set_shape_transform(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_shape_idx, wasgo_buffer_transform, wasgo_size_transform);
}
void Physics2DServer::area_set_space(RID p_area, RID p_space){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    

    Variant wasgo_var_space = p_space;
    uint8_t wasgo_buffer_space[0];
    int wasgo_size_space = 0;
    encode_variant(wasgo_var_space, wasgo_buffer_space, wasgo_size_space);
    
	_wasgo_Physics2DServer_wrapper_area_set_space(wasgo_id, wasgo_buffer_area, wasgo_size_area, wasgo_buffer_space, wasgo_size_space);
}
void Physics2DServer::area_set_space_override_mode(RID p_area, Physics2DServer::AreaSpaceOverrideMode p_mode){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    
	_wasgo_Physics2DServer_wrapper_area_set_space_override_mode(wasgo_id, wasgo_buffer_area, wasgo_size_area, p_mode._get_wasgo_id());
}
void Physics2DServer::area_set_transform(RID p_area, Transform2D p_transform){

    Variant wasgo_var_area = p_area;
    uint8_t wasgo_buffer_area[0];
    int wasgo_size_area = 0;
    encode_variant(wasgo_var_area, wasgo_buffer_area, wasgo_size_area);
    

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[28];
    int wasgo_size_transform = 28;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_Physics2DServer_wrapper_area_set_transform(wasgo_id, wasgo_buffer_area, wasgo_size_area, wasgo_buffer_transform, wasgo_size_transform);
}
void Physics2DServer::body_add_central_force(RID p_body, Vector2 p_force){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_var_force = p_force;
    uint8_t wasgo_buffer_force[12];
    int wasgo_size_force = 12;
    encode_variant(wasgo_var_force, wasgo_buffer_force, wasgo_size_force);
    
	_wasgo_Physics2DServer_wrapper_body_add_central_force(wasgo_id, wasgo_buffer_body, wasgo_size_body, wasgo_buffer_force, wasgo_size_force);
}
void Physics2DServer::body_add_collision_exception(RID p_body, RID p_excepted_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_var_excepted_body = p_excepted_body;
    uint8_t wasgo_buffer_excepted_body[0];
    int wasgo_size_excepted_body = 0;
    encode_variant(wasgo_var_excepted_body, wasgo_buffer_excepted_body, wasgo_size_excepted_body);
    
	_wasgo_Physics2DServer_wrapper_body_add_collision_exception(wasgo_id, wasgo_buffer_body, wasgo_size_body, wasgo_buffer_excepted_body, wasgo_size_excepted_body);
}
void Physics2DServer::body_add_force(RID p_body, Vector2 p_offset, Vector2 p_force){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[12];
    int wasgo_size_offset = 12;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    

    Variant wasgo_var_force = p_force;
    uint8_t wasgo_buffer_force[12];
    int wasgo_size_force = 12;
    encode_variant(wasgo_var_force, wasgo_buffer_force, wasgo_size_force);
    
	_wasgo_Physics2DServer_wrapper_body_add_force(wasgo_id, wasgo_buffer_body, wasgo_size_body, wasgo_buffer_offset, wasgo_size_offset, wasgo_buffer_force, wasgo_size_force);
}
void Physics2DServer::body_add_shape(RID p_body, RID p_shape, Transform2D p_transform, bool p_disabled){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_var_shape = p_shape;
    uint8_t wasgo_buffer_shape[0];
    int wasgo_size_shape = 0;
    encode_variant(wasgo_var_shape, wasgo_buffer_shape, wasgo_size_shape);
    

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[28];
    int wasgo_size_transform = 28;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_Physics2DServer_wrapper_body_add_shape(wasgo_id, wasgo_buffer_body, wasgo_size_body, wasgo_buffer_shape, wasgo_size_shape, wasgo_buffer_transform, wasgo_size_transform, p_disabled);
}
void Physics2DServer::body_add_torque(RID p_body, float p_torque){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_Physics2DServer_wrapper_body_add_torque(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_torque);
}
void Physics2DServer::body_apply_central_impulse(RID p_body, Vector2 p_impulse){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_var_impulse = p_impulse;
    uint8_t wasgo_buffer_impulse[12];
    int wasgo_size_impulse = 12;
    encode_variant(wasgo_var_impulse, wasgo_buffer_impulse, wasgo_size_impulse);
    
	_wasgo_Physics2DServer_wrapper_body_apply_central_impulse(wasgo_id, wasgo_buffer_body, wasgo_size_body, wasgo_buffer_impulse, wasgo_size_impulse);
}
void Physics2DServer::body_apply_impulse(RID p_body, Vector2 p_position, Vector2 p_impulse){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    

    Variant wasgo_var_impulse = p_impulse;
    uint8_t wasgo_buffer_impulse[12];
    int wasgo_size_impulse = 12;
    encode_variant(wasgo_var_impulse, wasgo_buffer_impulse, wasgo_size_impulse);
    
	_wasgo_Physics2DServer_wrapper_body_apply_impulse(wasgo_id, wasgo_buffer_body, wasgo_size_body, wasgo_buffer_position, wasgo_size_position, wasgo_buffer_impulse, wasgo_size_impulse);
}
void Physics2DServer::body_apply_torque_impulse(RID p_body, float p_impulse){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_Physics2DServer_wrapper_body_apply_torque_impulse(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_impulse);
}
void Physics2DServer::body_attach_canvas_instance_id(RID p_body, int p_id){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_Physics2DServer_wrapper_body_attach_canvas_instance_id(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_id);
}
void Physics2DServer::body_attach_object_instance_id(RID p_body, int p_id){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_Physics2DServer_wrapper_body_attach_object_instance_id(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_id);
}
void Physics2DServer::body_clear_shapes(RID p_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_Physics2DServer_wrapper_body_clear_shapes(wasgo_id, wasgo_buffer_body, wasgo_size_body);
}
RID Physics2DServer::body_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_Physics2DServer_wrapper_body_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
int Physics2DServer::body_get_canvas_instance_id(RID p_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return (int) _wasgo_Physics2DServer_wrapper_body_get_canvas_instance_id(wasgo_id, wasgo_buffer_body, wasgo_size_body);
}
int Physics2DServer::body_get_collision_layer(RID p_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return (int) _wasgo_Physics2DServer_wrapper_body_get_collision_layer(wasgo_id, wasgo_buffer_body, wasgo_size_body);
}
int Physics2DServer::body_get_collision_mask(RID p_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return (int) _wasgo_Physics2DServer_wrapper_body_get_collision_mask(wasgo_id, wasgo_buffer_body, wasgo_size_body);
}
Physics2DServer::CCDMode Physics2DServer::body_get_continuous_collision_detection_mode(RID p_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return Physics2DServer::CCDMode(_wasgo_Physics2DServer_wrapper_body_get_continuous_collision_detection_mode(wasgo_id, wasgo_buffer_body, wasgo_size_body));
}
Physics2DDirectBodyState Physics2DServer::body_get_direct_state(RID p_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return Physics2DDirectBodyState(_wasgo_Physics2DServer_wrapper_body_get_direct_state(wasgo_id, wasgo_buffer_body, wasgo_size_body));
}
int Physics2DServer::body_get_max_contacts_reported(RID p_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return (int) _wasgo_Physics2DServer_wrapper_body_get_max_contacts_reported(wasgo_id, wasgo_buffer_body, wasgo_size_body);
}
Physics2DServer::BodyMode Physics2DServer::body_get_mode(RID p_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return Physics2DServer::BodyMode(_wasgo_Physics2DServer_wrapper_body_get_mode(wasgo_id, wasgo_buffer_body, wasgo_size_body));
}
int Physics2DServer::body_get_object_instance_id(RID p_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return (int) _wasgo_Physics2DServer_wrapper_body_get_object_instance_id(wasgo_id, wasgo_buffer_body, wasgo_size_body);
}
float Physics2DServer::body_get_param(RID p_body, Physics2DServer::BodyParameter p_param){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return (float) _wasgo_Physics2DServer_wrapper_body_get_param(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_param._get_wasgo_id());
}
RID Physics2DServer::body_get_shape(RID p_body, int p_shape_idx){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_Physics2DServer_wrapper_body_get_shape(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_body, wasgo_size_body, p_shape_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
int Physics2DServer::body_get_shape_count(RID p_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return (int) _wasgo_Physics2DServer_wrapper_body_get_shape_count(wasgo_id, wasgo_buffer_body, wasgo_size_body);
}
Variant Physics2DServer::body_get_shape_metadata(RID p_body, int p_shape_idx){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return Variant(_wasgo_Physics2DServer_wrapper_body_get_shape_metadata(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_shape_idx));
}
Transform2D Physics2DServer::body_get_shape_transform(RID p_body, int p_shape_idx){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_Physics2DServer_wrapper_body_get_shape_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_body, wasgo_size_body, p_shape_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform2D) wasgo_ret;
    
}
RID Physics2DServer::body_get_space(RID p_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_Physics2DServer_wrapper_body_get_space(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_body, wasgo_size_body);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
Variant Physics2DServer::body_get_state(RID p_body, Physics2DServer::BodyState p_state){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return Variant(_wasgo_Physics2DServer_wrapper_body_get_state(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_state._get_wasgo_id()));
}
bool Physics2DServer::body_is_omitting_force_integration(RID p_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return (bool) _wasgo_Physics2DServer_wrapper_body_is_omitting_force_integration(wasgo_id, wasgo_buffer_body, wasgo_size_body);
}
void Physics2DServer::body_remove_collision_exception(RID p_body, RID p_excepted_body){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_var_excepted_body = p_excepted_body;
    uint8_t wasgo_buffer_excepted_body[0];
    int wasgo_size_excepted_body = 0;
    encode_variant(wasgo_var_excepted_body, wasgo_buffer_excepted_body, wasgo_size_excepted_body);
    
	_wasgo_Physics2DServer_wrapper_body_remove_collision_exception(wasgo_id, wasgo_buffer_body, wasgo_size_body, wasgo_buffer_excepted_body, wasgo_size_excepted_body);
}
void Physics2DServer::body_remove_shape(RID p_body, int p_shape_idx){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_Physics2DServer_wrapper_body_remove_shape(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_shape_idx);
}
void Physics2DServer::body_set_axis_velocity(RID p_body, Vector2 p_axis_velocity){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_var_axis_velocity = p_axis_velocity;
    uint8_t wasgo_buffer_axis_velocity[12];
    int wasgo_size_axis_velocity = 12;
    encode_variant(wasgo_var_axis_velocity, wasgo_buffer_axis_velocity, wasgo_size_axis_velocity);
    
	_wasgo_Physics2DServer_wrapper_body_set_axis_velocity(wasgo_id, wasgo_buffer_body, wasgo_size_body, wasgo_buffer_axis_velocity, wasgo_size_axis_velocity);
}
void Physics2DServer::body_set_collision_layer(RID p_body, int p_layer){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_Physics2DServer_wrapper_body_set_collision_layer(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_layer);
}
void Physics2DServer::body_set_collision_mask(RID p_body, int p_mask){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_Physics2DServer_wrapper_body_set_collision_mask(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_mask);
}
void Physics2DServer::body_set_continuous_collision_detection_mode(RID p_body, Physics2DServer::CCDMode p_mode){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_Physics2DServer_wrapper_body_set_continuous_collision_detection_mode(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_mode._get_wasgo_id());
}
void Physics2DServer::body_set_force_integration_callback(RID p_body, Object p_receiver, String p_method, Variant p_userdata){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    
	_wasgo_Physics2DServer_wrapper_body_set_force_integration_callback(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_receiver._get_wasgo_id(), wasgo_buffer_method, wasgo_size_method, p_userdata._get_wasgo_id());
}
void Physics2DServer::body_set_max_contacts_reported(RID p_body, int p_amount){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_Physics2DServer_wrapper_body_set_max_contacts_reported(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_amount);
}
void Physics2DServer::body_set_mode(RID p_body, Physics2DServer::BodyMode p_mode){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_Physics2DServer_wrapper_body_set_mode(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_mode._get_wasgo_id());
}
void Physics2DServer::body_set_omit_force_integration(RID p_body, bool p_enable){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_Physics2DServer_wrapper_body_set_omit_force_integration(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_enable);
}
void Physics2DServer::body_set_param(RID p_body, Physics2DServer::BodyParameter p_param, float p_value){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_Physics2DServer_wrapper_body_set_param(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_param._get_wasgo_id(), p_value);
}
void Physics2DServer::body_set_shape(RID p_body, int p_shape_idx, RID p_shape){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_var_shape = p_shape;
    uint8_t wasgo_buffer_shape[0];
    int wasgo_size_shape = 0;
    encode_variant(wasgo_var_shape, wasgo_buffer_shape, wasgo_size_shape);
    
	_wasgo_Physics2DServer_wrapper_body_set_shape(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_shape_idx, wasgo_buffer_shape, wasgo_size_shape);
}
void Physics2DServer::body_set_shape_as_one_way_collision(RID p_body, int p_shape_idx, bool p_enable, float p_margin){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_Physics2DServer_wrapper_body_set_shape_as_one_way_collision(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_shape_idx, p_enable, p_margin);
}
void Physics2DServer::body_set_shape_disabled(RID p_body, int p_shape_idx, bool p_disabled){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_Physics2DServer_wrapper_body_set_shape_disabled(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_shape_idx, p_disabled);
}
void Physics2DServer::body_set_shape_metadata(RID p_body, int p_shape_idx, Variant p_metadata){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_Physics2DServer_wrapper_body_set_shape_metadata(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_shape_idx, p_metadata._get_wasgo_id());
}
void Physics2DServer::body_set_shape_transform(RID p_body, int p_shape_idx, Transform2D p_transform){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[28];
    int wasgo_size_transform = 28;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_Physics2DServer_wrapper_body_set_shape_transform(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_shape_idx, wasgo_buffer_transform, wasgo_size_transform);
}
void Physics2DServer::body_set_space(RID p_body, RID p_space){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_var_space = p_space;
    uint8_t wasgo_buffer_space[0];
    int wasgo_size_space = 0;
    encode_variant(wasgo_var_space, wasgo_buffer_space, wasgo_size_space);
    
	_wasgo_Physics2DServer_wrapper_body_set_space(wasgo_id, wasgo_buffer_body, wasgo_size_body, wasgo_buffer_space, wasgo_size_space);
}
void Physics2DServer::body_set_state(RID p_body, Physics2DServer::BodyState p_state, Variant p_value){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	_wasgo_Physics2DServer_wrapper_body_set_state(wasgo_id, wasgo_buffer_body, wasgo_size_body, p_state._get_wasgo_id(), p_value._get_wasgo_id());
}
bool Physics2DServer::body_test_motion(RID p_body, Transform2D p_from, Vector2 p_motion, bool p_infinite_inertia, float p_margin, Physics2DTestMotionResult p_result){

    Variant wasgo_var_body = p_body;
    uint8_t wasgo_buffer_body[0];
    int wasgo_size_body = 0;
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    

    Variant wasgo_var_from = p_from;
    uint8_t wasgo_buffer_from[28];
    int wasgo_size_from = 28;
    encode_variant(wasgo_var_from, wasgo_buffer_from, wasgo_size_from);
    

    Variant wasgo_var_motion = p_motion;
    uint8_t wasgo_buffer_motion[12];
    int wasgo_size_motion = 12;
    encode_variant(wasgo_var_motion, wasgo_buffer_motion, wasgo_size_motion);
    
	return (bool) _wasgo_Physics2DServer_wrapper_body_test_motion(wasgo_id, wasgo_buffer_body, wasgo_size_body, wasgo_buffer_from, wasgo_size_from, wasgo_buffer_motion, wasgo_size_motion, p_infinite_inertia, p_margin, p_result._get_wasgo_id());
}
RID Physics2DServer::capsule_shape_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_Physics2DServer_wrapper_capsule_shape_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
RID Physics2DServer::circle_shape_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_Physics2DServer_wrapper_circle_shape_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
RID Physics2DServer::concave_polygon_shape_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_Physics2DServer_wrapper_concave_polygon_shape_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
RID Physics2DServer::convex_polygon_shape_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_Physics2DServer_wrapper_convex_polygon_shape_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
RID Physics2DServer::damped_spring_joint_create(Vector2 p_anchor_a, Vector2 p_anchor_b, RID p_body_a, RID p_body_b){

    Variant wasgo_var_anchor_a = p_anchor_a;
    uint8_t wasgo_buffer_anchor_a[12];
    int wasgo_size_anchor_a = 12;
    encode_variant(wasgo_var_anchor_a, wasgo_buffer_anchor_a, wasgo_size_anchor_a);
    

    Variant wasgo_var_anchor_b = p_anchor_b;
    uint8_t wasgo_buffer_anchor_b[12];
    int wasgo_size_anchor_b = 12;
    encode_variant(wasgo_var_anchor_b, wasgo_buffer_anchor_b, wasgo_size_anchor_b);
    

    Variant wasgo_var_body_a = p_body_a;
    uint8_t wasgo_buffer_body_a[0];
    int wasgo_size_body_a = 0;
    encode_variant(wasgo_var_body_a, wasgo_buffer_body_a, wasgo_size_body_a);
    

    Variant wasgo_var_body_b = p_body_b;
    uint8_t wasgo_buffer_body_b[0];
    int wasgo_size_body_b = 0;
    encode_variant(wasgo_var_body_b, wasgo_buffer_body_b, wasgo_size_body_b);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_Physics2DServer_wrapper_damped_spring_joint_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_anchor_a, wasgo_size_anchor_a, wasgo_buffer_anchor_b, wasgo_size_anchor_b, wasgo_buffer_body_a, wasgo_size_body_a, wasgo_buffer_body_b, wasgo_size_body_b);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
float Physics2DServer::damped_string_joint_get_param(RID p_joint, Physics2DServer::DampedStringParam p_param){

    Variant wasgo_var_joint = p_joint;
    uint8_t wasgo_buffer_joint[0];
    int wasgo_size_joint = 0;
    encode_variant(wasgo_var_joint, wasgo_buffer_joint, wasgo_size_joint);
    
	return (float) _wasgo_Physics2DServer_wrapper_damped_string_joint_get_param(wasgo_id, wasgo_buffer_joint, wasgo_size_joint, p_param._get_wasgo_id());
}
void Physics2DServer::damped_string_joint_set_param(RID p_joint, Physics2DServer::DampedStringParam p_param, float p_value){

    Variant wasgo_var_joint = p_joint;
    uint8_t wasgo_buffer_joint[0];
    int wasgo_size_joint = 0;
    encode_variant(wasgo_var_joint, wasgo_buffer_joint, wasgo_size_joint);
    
	_wasgo_Physics2DServer_wrapper_damped_string_joint_set_param(wasgo_id, wasgo_buffer_joint, wasgo_size_joint, p_param._get_wasgo_id(), p_value);
}
void Physics2DServer::free_rid(RID p_rid){

    Variant wasgo_var_rid = p_rid;
    uint8_t wasgo_buffer_rid[0];
    int wasgo_size_rid = 0;
    encode_variant(wasgo_var_rid, wasgo_buffer_rid, wasgo_size_rid);
    
	_wasgo_Physics2DServer_wrapper_free_rid(wasgo_id, wasgo_buffer_rid, wasgo_size_rid);
}
int Physics2DServer::get_process_info(Physics2DServer::ProcessInfo p_process_info){
	return (int) _wasgo_Physics2DServer_wrapper_get_process_info(wasgo_id, p_process_info._get_wasgo_id());
}
RID Physics2DServer::groove_joint_create(Vector2 p_groove1_a, Vector2 p_groove2_a, Vector2 p_anchor_b, RID p_body_a, RID p_body_b){

    Variant wasgo_var_groove1_a = p_groove1_a;
    uint8_t wasgo_buffer_groove1_a[12];
    int wasgo_size_groove1_a = 12;
    encode_variant(wasgo_var_groove1_a, wasgo_buffer_groove1_a, wasgo_size_groove1_a);
    

    Variant wasgo_var_groove2_a = p_groove2_a;
    uint8_t wasgo_buffer_groove2_a[12];
    int wasgo_size_groove2_a = 12;
    encode_variant(wasgo_var_groove2_a, wasgo_buffer_groove2_a, wasgo_size_groove2_a);
    

    Variant wasgo_var_anchor_b = p_anchor_b;
    uint8_t wasgo_buffer_anchor_b[12];
    int wasgo_size_anchor_b = 12;
    encode_variant(wasgo_var_anchor_b, wasgo_buffer_anchor_b, wasgo_size_anchor_b);
    

    Variant wasgo_var_body_a = p_body_a;
    uint8_t wasgo_buffer_body_a[0];
    int wasgo_size_body_a = 0;
    encode_variant(wasgo_var_body_a, wasgo_buffer_body_a, wasgo_size_body_a);
    

    Variant wasgo_var_body_b = p_body_b;
    uint8_t wasgo_buffer_body_b[0];
    int wasgo_size_body_b = 0;
    encode_variant(wasgo_var_body_b, wasgo_buffer_body_b, wasgo_size_body_b);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_Physics2DServer_wrapper_groove_joint_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_groove1_a, wasgo_size_groove1_a, wasgo_buffer_groove2_a, wasgo_size_groove2_a, wasgo_buffer_anchor_b, wasgo_size_anchor_b, wasgo_buffer_body_a, wasgo_size_body_a, wasgo_buffer_body_b, wasgo_size_body_b);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
float Physics2DServer::joint_get_param(RID p_joint, Physics2DServer::JointParam p_param){

    Variant wasgo_var_joint = p_joint;
    uint8_t wasgo_buffer_joint[0];
    int wasgo_size_joint = 0;
    encode_variant(wasgo_var_joint, wasgo_buffer_joint, wasgo_size_joint);
    
	return (float) _wasgo_Physics2DServer_wrapper_joint_get_param(wasgo_id, wasgo_buffer_joint, wasgo_size_joint, p_param._get_wasgo_id());
}
Physics2DServer::JointType Physics2DServer::joint_get_type(RID p_joint){

    Variant wasgo_var_joint = p_joint;
    uint8_t wasgo_buffer_joint[0];
    int wasgo_size_joint = 0;
    encode_variant(wasgo_var_joint, wasgo_buffer_joint, wasgo_size_joint);
    
	return Physics2DServer::JointType(_wasgo_Physics2DServer_wrapper_joint_get_type(wasgo_id, wasgo_buffer_joint, wasgo_size_joint));
}
void Physics2DServer::joint_set_param(RID p_joint, Physics2DServer::JointParam p_param, float p_value){

    Variant wasgo_var_joint = p_joint;
    uint8_t wasgo_buffer_joint[0];
    int wasgo_size_joint = 0;
    encode_variant(wasgo_var_joint, wasgo_buffer_joint, wasgo_size_joint);
    
	_wasgo_Physics2DServer_wrapper_joint_set_param(wasgo_id, wasgo_buffer_joint, wasgo_size_joint, p_param._get_wasgo_id(), p_value);
}
RID Physics2DServer::line_shape_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_Physics2DServer_wrapper_line_shape_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
RID Physics2DServer::pin_joint_create(Vector2 p_anchor, RID p_body_a, RID p_body_b){

    Variant wasgo_var_anchor = p_anchor;
    uint8_t wasgo_buffer_anchor[12];
    int wasgo_size_anchor = 12;
    encode_variant(wasgo_var_anchor, wasgo_buffer_anchor, wasgo_size_anchor);
    

    Variant wasgo_var_body_a = p_body_a;
    uint8_t wasgo_buffer_body_a[0];
    int wasgo_size_body_a = 0;
    encode_variant(wasgo_var_body_a, wasgo_buffer_body_a, wasgo_size_body_a);
    

    Variant wasgo_var_body_b = p_body_b;
    uint8_t wasgo_buffer_body_b[0];
    int wasgo_size_body_b = 0;
    encode_variant(wasgo_var_body_b, wasgo_buffer_body_b, wasgo_size_body_b);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_Physics2DServer_wrapper_pin_joint_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_anchor, wasgo_size_anchor, wasgo_buffer_body_a, wasgo_size_body_a, wasgo_buffer_body_b, wasgo_size_body_b);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
RID Physics2DServer::ray_shape_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_Physics2DServer_wrapper_ray_shape_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
RID Physics2DServer::rectangle_shape_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_Physics2DServer_wrapper_rectangle_shape_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
RID Physics2DServer::segment_shape_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_Physics2DServer_wrapper_segment_shape_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
void Physics2DServer::set_active(bool p_active){
	_wasgo_Physics2DServer_wrapper_set_active(wasgo_id, p_active);
}
Variant Physics2DServer::shape_get_data(RID p_shape){

    Variant wasgo_var_shape = p_shape;
    uint8_t wasgo_buffer_shape[0];
    int wasgo_size_shape = 0;
    encode_variant(wasgo_var_shape, wasgo_buffer_shape, wasgo_size_shape);
    
	return Variant(_wasgo_Physics2DServer_wrapper_shape_get_data(wasgo_id, wasgo_buffer_shape, wasgo_size_shape));
}
Physics2DServer::ShapeType Physics2DServer::shape_get_type(RID p_shape){

    Variant wasgo_var_shape = p_shape;
    uint8_t wasgo_buffer_shape[0];
    int wasgo_size_shape = 0;
    encode_variant(wasgo_var_shape, wasgo_buffer_shape, wasgo_size_shape);
    
	return Physics2DServer::ShapeType(_wasgo_Physics2DServer_wrapper_shape_get_type(wasgo_id, wasgo_buffer_shape, wasgo_size_shape));
}
void Physics2DServer::shape_set_data(RID p_shape, Variant p_data){

    Variant wasgo_var_shape = p_shape;
    uint8_t wasgo_buffer_shape[0];
    int wasgo_size_shape = 0;
    encode_variant(wasgo_var_shape, wasgo_buffer_shape, wasgo_size_shape);
    
	_wasgo_Physics2DServer_wrapper_shape_set_data(wasgo_id, wasgo_buffer_shape, wasgo_size_shape, p_data._get_wasgo_id());
}
RID Physics2DServer::space_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_Physics2DServer_wrapper_space_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
Physics2DDirectSpaceState Physics2DServer::space_get_direct_state(RID p_space){

    Variant wasgo_var_space = p_space;
    uint8_t wasgo_buffer_space[0];
    int wasgo_size_space = 0;
    encode_variant(wasgo_var_space, wasgo_buffer_space, wasgo_size_space);
    
	return Physics2DDirectSpaceState(_wasgo_Physics2DServer_wrapper_space_get_direct_state(wasgo_id, wasgo_buffer_space, wasgo_size_space));
}
float Physics2DServer::space_get_param(RID p_space, Physics2DServer::SpaceParameter p_param){

    Variant wasgo_var_space = p_space;
    uint8_t wasgo_buffer_space[0];
    int wasgo_size_space = 0;
    encode_variant(wasgo_var_space, wasgo_buffer_space, wasgo_size_space);
    
	return (float) _wasgo_Physics2DServer_wrapper_space_get_param(wasgo_id, wasgo_buffer_space, wasgo_size_space, p_param._get_wasgo_id());
}
bool Physics2DServer::space_is_active(RID p_space){

    Variant wasgo_var_space = p_space;
    uint8_t wasgo_buffer_space[0];
    int wasgo_size_space = 0;
    encode_variant(wasgo_var_space, wasgo_buffer_space, wasgo_size_space);
    
	return (bool) _wasgo_Physics2DServer_wrapper_space_is_active(wasgo_id, wasgo_buffer_space, wasgo_size_space);
}
void Physics2DServer::space_set_active(RID p_space, bool p_active){

    Variant wasgo_var_space = p_space;
    uint8_t wasgo_buffer_space[0];
    int wasgo_size_space = 0;
    encode_variant(wasgo_var_space, wasgo_buffer_space, wasgo_size_space);
    
	_wasgo_Physics2DServer_wrapper_space_set_active(wasgo_id, wasgo_buffer_space, wasgo_size_space, p_active);
}
void Physics2DServer::space_set_param(RID p_space, Physics2DServer::SpaceParameter p_param, float p_value){

    Variant wasgo_var_space = p_space;
    uint8_t wasgo_buffer_space[0];
    int wasgo_size_space = 0;
    encode_variant(wasgo_var_space, wasgo_buffer_space, wasgo_size_space);
    
	_wasgo_Physics2DServer_wrapper_space_set_param(wasgo_id, wasgo_buffer_space, wasgo_size_space, p_param._get_wasgo_id(), p_value);
}

Physics2DServer::Physics2DServer(WasGoID p_wasgo_id) : Object(p_wasgo_id){
}
Physics2DServer::Physics2DServer(Object other) : Object(other._get_wasgo_id()){
}
Physics2DServer::Physics2DServer():Object(){
}
Physics2DServer Physics2DServer::new_instance(){
    return Physics2DServer(_wasgo_Physics2DServer_constructor());
}
WasGoID Physics2DServer::_get_wasgo_id(){
    return wasgo_id;
}
Physics2DServer::operator bool(){
    return (bool) wasgo_id;
}
