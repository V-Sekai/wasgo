/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CollisionObject.h"
int CollisionObject::create_shape_owner(Object p_owner){
	return (int) _wasgo_CollisionObject_wrapper_create_shape_owner(wasgo_id, p_owner._get_wasgo_id());
}
bool CollisionObject::get_capture_input_on_drag(){
	return (bool) _wasgo_CollisionObject_wrapper_get_capture_input_on_drag(wasgo_id);
}
RID CollisionObject::get_rid(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_CollisionObject_wrapper_get_rid(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
Array CollisionObject::get_shape_owners(){
	return Array(_wasgo_CollisionObject_wrapper_get_shape_owners(wasgo_id));
}
bool CollisionObject::is_ray_pickable(){
	return (bool) _wasgo_CollisionObject_wrapper_is_ray_pickable(wasgo_id);
}
bool CollisionObject::is_shape_owner_disabled(int p_owner_id){
	return (bool) _wasgo_CollisionObject_wrapper_is_shape_owner_disabled(wasgo_id, p_owner_id);
}
void CollisionObject::remove_shape_owner(int p_owner_id){
	_wasgo_CollisionObject_wrapper_remove_shape_owner(wasgo_id, p_owner_id);
}
void CollisionObject::set_capture_input_on_drag(bool p_enable){
	_wasgo_CollisionObject_wrapper_set_capture_input_on_drag(wasgo_id, p_enable);
}
void CollisionObject::set_ray_pickable(bool p_ray_pickable){
	_wasgo_CollisionObject_wrapper_set_ray_pickable(wasgo_id, p_ray_pickable);
}
int CollisionObject::shape_find_owner(int p_shape_index){
	return (int) _wasgo_CollisionObject_wrapper_shape_find_owner(wasgo_id, p_shape_index);
}
void CollisionObject::shape_owner_add_shape(int p_owner_id, Shape p_shape){
	_wasgo_CollisionObject_wrapper_shape_owner_add_shape(wasgo_id, p_owner_id, p_shape._get_wasgo_id());
}
void CollisionObject::shape_owner_clear_shapes(int p_owner_id){
	_wasgo_CollisionObject_wrapper_shape_owner_clear_shapes(wasgo_id, p_owner_id);
}
Object CollisionObject::shape_owner_get_owner(int p_owner_id){
	return Object(_wasgo_CollisionObject_wrapper_shape_owner_get_owner(wasgo_id, p_owner_id));
}
Shape CollisionObject::shape_owner_get_shape(int p_owner_id, int p_shape_id){
	return Shape(_wasgo_CollisionObject_wrapper_shape_owner_get_shape(wasgo_id, p_owner_id, p_shape_id));
}
int CollisionObject::shape_owner_get_shape_count(int p_owner_id){
	return (int) _wasgo_CollisionObject_wrapper_shape_owner_get_shape_count(wasgo_id, p_owner_id);
}
int CollisionObject::shape_owner_get_shape_index(int p_owner_id, int p_shape_id){
	return (int) _wasgo_CollisionObject_wrapper_shape_owner_get_shape_index(wasgo_id, p_owner_id, p_shape_id);
}
Transform CollisionObject::shape_owner_get_transform(int p_owner_id){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_CollisionObject_wrapper_shape_owner_get_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_owner_id);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform) wasgo_ret;
    
}
void CollisionObject::shape_owner_remove_shape(int p_owner_id, int p_shape_id){
	_wasgo_CollisionObject_wrapper_shape_owner_remove_shape(wasgo_id, p_owner_id, p_shape_id);
}
void CollisionObject::shape_owner_set_disabled(int p_owner_id, bool p_disabled){
	_wasgo_CollisionObject_wrapper_shape_owner_set_disabled(wasgo_id, p_owner_id, p_disabled);
}
void CollisionObject::shape_owner_set_transform(int p_owner_id, Transform p_transform){

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[52];
    int wasgo_size_transform = 52;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_CollisionObject_wrapper_shape_owner_set_transform(wasgo_id, p_owner_id, wasgo_buffer_transform, wasgo_size_transform);
}