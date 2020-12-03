/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Spatial.h"
void Spatial::force_update_transform(){
	_wasgo_Spatial_wrapper_force_update_transform(wasgo_id);
}
SpatialGizmo Spatial::get_gizmo(){
	return SpatialGizmo(_wasgo_Spatial_wrapper_get_gizmo(wasgo_id));
}
Transform Spatial::get_global_transform(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_Spatial_wrapper_get_global_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform) wasgo_ret;
    
}
Spatial Spatial::get_parent_spatial(){
	return Spatial(_wasgo_Spatial_wrapper_get_parent_spatial(wasgo_id));
}
Vector3 Spatial::get_rotation(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_Spatial_wrapper_get_rotation(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
Vector3 Spatial::get_rotation_degrees(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_Spatial_wrapper_get_rotation_degrees(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
Vector3 Spatial::get_scale(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_Spatial_wrapper_get_scale(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
Transform Spatial::get_transform(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_Spatial_wrapper_get_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform) wasgo_ret;
    
}
Vector3 Spatial::get_translation(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_Spatial_wrapper_get_translation(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
World Spatial::get_world(){
	return World(_wasgo_Spatial_wrapper_get_world(wasgo_id));
}
void Spatial::global_rotate(Vector3 p_axis, float p_angle){

    Variant wasgo_var_axis = p_axis;
    uint8_t wasgo_buffer_axis[16];
    int wasgo_size_axis = 16;
    encode_variant(wasgo_var_axis, wasgo_buffer_axis, wasgo_size_axis);
    
	_wasgo_Spatial_wrapper_global_rotate(wasgo_id, wasgo_buffer_axis, wasgo_size_axis, p_angle);
}
void Spatial::global_scale(Vector3 p_scale){

    Variant wasgo_var_scale = p_scale;
    uint8_t wasgo_buffer_scale[16];
    int wasgo_size_scale = 16;
    encode_variant(wasgo_var_scale, wasgo_buffer_scale, wasgo_size_scale);
    
	_wasgo_Spatial_wrapper_global_scale(wasgo_id, wasgo_buffer_scale, wasgo_size_scale);
}
void Spatial::global_translate(Vector3 p_offset){

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[16];
    int wasgo_size_offset = 16;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    
	_wasgo_Spatial_wrapper_global_translate(wasgo_id, wasgo_buffer_offset, wasgo_size_offset);
}
void Spatial::hide(){
	_wasgo_Spatial_wrapper_hide(wasgo_id);
}
bool Spatial::is_local_transform_notification_enabled(){
	return (bool) _wasgo_Spatial_wrapper_is_local_transform_notification_enabled(wasgo_id);
}
bool Spatial::is_scale_disabled(){
	return (bool) _wasgo_Spatial_wrapper_is_scale_disabled(wasgo_id);
}
bool Spatial::is_set_as_toplevel(){
	return (bool) _wasgo_Spatial_wrapper_is_set_as_toplevel(wasgo_id);
}
bool Spatial::is_transform_notification_enabled(){
	return (bool) _wasgo_Spatial_wrapper_is_transform_notification_enabled(wasgo_id);
}
bool Spatial::is_visible(){
	return (bool) _wasgo_Spatial_wrapper_is_visible(wasgo_id);
}
bool Spatial::is_visible_in_tree(){
	return (bool) _wasgo_Spatial_wrapper_is_visible_in_tree(wasgo_id);
}
void Spatial::look_at(Vector3 p_target, Vector3 p_up){

    Variant wasgo_var_target = p_target;
    uint8_t wasgo_buffer_target[16];
    int wasgo_size_target = 16;
    encode_variant(wasgo_var_target, wasgo_buffer_target, wasgo_size_target);
    

    Variant wasgo_var_up = p_up;
    uint8_t wasgo_buffer_up[16];
    int wasgo_size_up = 16;
    encode_variant(wasgo_var_up, wasgo_buffer_up, wasgo_size_up);
    
	_wasgo_Spatial_wrapper_look_at(wasgo_id, wasgo_buffer_target, wasgo_size_target, wasgo_buffer_up, wasgo_size_up);
}
void Spatial::look_at_from_position(Vector3 p_position, Vector3 p_target, Vector3 p_up){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[16];
    int wasgo_size_position = 16;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    

    Variant wasgo_var_target = p_target;
    uint8_t wasgo_buffer_target[16];
    int wasgo_size_target = 16;
    encode_variant(wasgo_var_target, wasgo_buffer_target, wasgo_size_target);
    

    Variant wasgo_var_up = p_up;
    uint8_t wasgo_buffer_up[16];
    int wasgo_size_up = 16;
    encode_variant(wasgo_var_up, wasgo_buffer_up, wasgo_size_up);
    
	_wasgo_Spatial_wrapper_look_at_from_position(wasgo_id, wasgo_buffer_position, wasgo_size_position, wasgo_buffer_target, wasgo_size_target, wasgo_buffer_up, wasgo_size_up);
}
void Spatial::orthonormalize(){
	_wasgo_Spatial_wrapper_orthonormalize(wasgo_id);
}
void Spatial::rotate(Vector3 p_axis, float p_angle){

    Variant wasgo_var_axis = p_axis;
    uint8_t wasgo_buffer_axis[16];
    int wasgo_size_axis = 16;
    encode_variant(wasgo_var_axis, wasgo_buffer_axis, wasgo_size_axis);
    
	_wasgo_Spatial_wrapper_rotate(wasgo_id, wasgo_buffer_axis, wasgo_size_axis, p_angle);
}
void Spatial::rotate_object_local(Vector3 p_axis, float p_angle){

    Variant wasgo_var_axis = p_axis;
    uint8_t wasgo_buffer_axis[16];
    int wasgo_size_axis = 16;
    encode_variant(wasgo_var_axis, wasgo_buffer_axis, wasgo_size_axis);
    
	_wasgo_Spatial_wrapper_rotate_object_local(wasgo_id, wasgo_buffer_axis, wasgo_size_axis, p_angle);
}
void Spatial::rotate_x(float p_angle){
	_wasgo_Spatial_wrapper_rotate_x(wasgo_id, p_angle);
}
void Spatial::rotate_y(float p_angle){
	_wasgo_Spatial_wrapper_rotate_y(wasgo_id, p_angle);
}
void Spatial::rotate_z(float p_angle){
	_wasgo_Spatial_wrapper_rotate_z(wasgo_id, p_angle);
}
void Spatial::scale_object_local(Vector3 p_scale){

    Variant wasgo_var_scale = p_scale;
    uint8_t wasgo_buffer_scale[16];
    int wasgo_size_scale = 16;
    encode_variant(wasgo_var_scale, wasgo_buffer_scale, wasgo_size_scale);
    
	_wasgo_Spatial_wrapper_scale_object_local(wasgo_id, wasgo_buffer_scale, wasgo_size_scale);
}
void Spatial::set_as_toplevel(bool p_enable){
	_wasgo_Spatial_wrapper_set_as_toplevel(wasgo_id, p_enable);
}
void Spatial::set_disable_scale(bool p_disable){
	_wasgo_Spatial_wrapper_set_disable_scale(wasgo_id, p_disable);
}
void Spatial::set_gizmo(SpatialGizmo p_gizmo){
	_wasgo_Spatial_wrapper_set_gizmo(wasgo_id, p_gizmo._get_wasgo_id());
}
void Spatial::set_global_transform(Transform p_global){

    Variant wasgo_var_global = p_global;
    uint8_t wasgo_buffer_global[52];
    int wasgo_size_global = 52;
    encode_variant(wasgo_var_global, wasgo_buffer_global, wasgo_size_global);
    
	_wasgo_Spatial_wrapper_set_global_transform(wasgo_id, wasgo_buffer_global, wasgo_size_global);
}
void Spatial::set_identity(){
	_wasgo_Spatial_wrapper_set_identity(wasgo_id);
}
void Spatial::set_ignore_transform_notification(bool p_enabled){
	_wasgo_Spatial_wrapper_set_ignore_transform_notification(wasgo_id, p_enabled);
}
void Spatial::set_notify_local_transform(bool p_enable){
	_wasgo_Spatial_wrapper_set_notify_local_transform(wasgo_id, p_enable);
}
void Spatial::set_notify_transform(bool p_enable){
	_wasgo_Spatial_wrapper_set_notify_transform(wasgo_id, p_enable);
}
void Spatial::set_rotation(Vector3 p_euler){

    Variant wasgo_var_euler = p_euler;
    uint8_t wasgo_buffer_euler[16];
    int wasgo_size_euler = 16;
    encode_variant(wasgo_var_euler, wasgo_buffer_euler, wasgo_size_euler);
    
	_wasgo_Spatial_wrapper_set_rotation(wasgo_id, wasgo_buffer_euler, wasgo_size_euler);
}
void Spatial::set_rotation_degrees(Vector3 p_euler_degrees){

    Variant wasgo_var_euler_degrees = p_euler_degrees;
    uint8_t wasgo_buffer_euler_degrees[16];
    int wasgo_size_euler_degrees = 16;
    encode_variant(wasgo_var_euler_degrees, wasgo_buffer_euler_degrees, wasgo_size_euler_degrees);
    
	_wasgo_Spatial_wrapper_set_rotation_degrees(wasgo_id, wasgo_buffer_euler_degrees, wasgo_size_euler_degrees);
}
void Spatial::set_scale(Vector3 p_scale){

    Variant wasgo_var_scale = p_scale;
    uint8_t wasgo_buffer_scale[16];
    int wasgo_size_scale = 16;
    encode_variant(wasgo_var_scale, wasgo_buffer_scale, wasgo_size_scale);
    
	_wasgo_Spatial_wrapper_set_scale(wasgo_id, wasgo_buffer_scale, wasgo_size_scale);
}
void Spatial::set_transform(Transform p_local){

    Variant wasgo_var_local = p_local;
    uint8_t wasgo_buffer_local[52];
    int wasgo_size_local = 52;
    encode_variant(wasgo_var_local, wasgo_buffer_local, wasgo_size_local);
    
	_wasgo_Spatial_wrapper_set_transform(wasgo_id, wasgo_buffer_local, wasgo_size_local);
}
void Spatial::set_translation(Vector3 p_translation){

    Variant wasgo_var_translation = p_translation;
    uint8_t wasgo_buffer_translation[16];
    int wasgo_size_translation = 16;
    encode_variant(wasgo_var_translation, wasgo_buffer_translation, wasgo_size_translation);
    
	_wasgo_Spatial_wrapper_set_translation(wasgo_id, wasgo_buffer_translation, wasgo_size_translation);
}
void Spatial::set_visible(bool p_visible){
	_wasgo_Spatial_wrapper_set_visible(wasgo_id, p_visible);
}
void Spatial::show(){
	_wasgo_Spatial_wrapper_show(wasgo_id);
}
Vector3 Spatial::to_global(Vector3 p_local_point){

    Variant wasgo_var_local_point = p_local_point;
    uint8_t wasgo_buffer_local_point[16];
    int wasgo_size_local_point = 16;
    encode_variant(wasgo_var_local_point, wasgo_buffer_local_point, wasgo_size_local_point);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_Spatial_wrapper_to_global(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_local_point, wasgo_size_local_point);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
Vector3 Spatial::to_local(Vector3 p_global_point){

    Variant wasgo_var_global_point = p_global_point;
    uint8_t wasgo_buffer_global_point[16];
    int wasgo_size_global_point = 16;
    encode_variant(wasgo_var_global_point, wasgo_buffer_global_point, wasgo_size_global_point);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_Spatial_wrapper_to_local(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_global_point, wasgo_size_global_point);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
void Spatial::translate(Vector3 p_offset){

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[16];
    int wasgo_size_offset = 16;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    
	_wasgo_Spatial_wrapper_translate(wasgo_id, wasgo_buffer_offset, wasgo_size_offset);
}
void Spatial::translate_object_local(Vector3 p_offset){

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[16];
    int wasgo_size_offset = 16;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    
	_wasgo_Spatial_wrapper_translate_object_local(wasgo_id, wasgo_buffer_offset, wasgo_size_offset);
}
void Spatial::update_gizmo(){
	_wasgo_Spatial_wrapper_update_gizmo(wasgo_id);
}

Spatial::Spatial(WasGoId p_wasgo_id) : Node(p_wasgo_id){
}
Spatial::Spatial(){
    wasgo_id = _wasgo_Spatial_constructor();
}
Spatial::~Spatial(){
    _wasgo_Spatial_destructor(wasgo_id);
}