/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CollisionObject2D.h"
int CollisionObject2D::create_shape_owner(Object p_owner){
	return (int) _wasgo_CollisionObject2D_wrapper_create_shape_owner(wasgo_id, p_owner._get_wasgo_id());
}
RID CollisionObject2D::get_rid(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_CollisionObject2D_wrapper_get_rid(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
float CollisionObject2D::get_shape_owner_one_way_collision_margin(int p_owner_id){
	return (float) _wasgo_CollisionObject2D_wrapper_get_shape_owner_one_way_collision_margin(wasgo_id, p_owner_id);
}
Array CollisionObject2D::get_shape_owners(){
	return Array(_wasgo_CollisionObject2D_wrapper_get_shape_owners(wasgo_id));
}
bool CollisionObject2D::is_pickable(){
	return (bool) _wasgo_CollisionObject2D_wrapper_is_pickable(wasgo_id);
}
bool CollisionObject2D::is_shape_owner_disabled(int p_owner_id){
	return (bool) _wasgo_CollisionObject2D_wrapper_is_shape_owner_disabled(wasgo_id, p_owner_id);
}
bool CollisionObject2D::is_shape_owner_one_way_collision_enabled(int p_owner_id){
	return (bool) _wasgo_CollisionObject2D_wrapper_is_shape_owner_one_way_collision_enabled(wasgo_id, p_owner_id);
}
void CollisionObject2D::remove_shape_owner(int p_owner_id){
	_wasgo_CollisionObject2D_wrapper_remove_shape_owner(wasgo_id, p_owner_id);
}
void CollisionObject2D::set_pickable(bool p_enabled){
	_wasgo_CollisionObject2D_wrapper_set_pickable(wasgo_id, p_enabled);
}
int CollisionObject2D::shape_find_owner(int p_shape_index){
	return (int) _wasgo_CollisionObject2D_wrapper_shape_find_owner(wasgo_id, p_shape_index);
}
void CollisionObject2D::shape_owner_add_shape(int p_owner_id, Shape2D p_shape){
	_wasgo_CollisionObject2D_wrapper_shape_owner_add_shape(wasgo_id, p_owner_id, p_shape._get_wasgo_id());
}
void CollisionObject2D::shape_owner_clear_shapes(int p_owner_id){
	_wasgo_CollisionObject2D_wrapper_shape_owner_clear_shapes(wasgo_id, p_owner_id);
}
Object CollisionObject2D::shape_owner_get_owner(int p_owner_id){
	return Object(_wasgo_CollisionObject2D_wrapper_shape_owner_get_owner(wasgo_id, p_owner_id));
}
Shape2D CollisionObject2D::shape_owner_get_shape(int p_owner_id, int p_shape_id){
	return Shape2D(_wasgo_CollisionObject2D_wrapper_shape_owner_get_shape(wasgo_id, p_owner_id, p_shape_id));
}
int CollisionObject2D::shape_owner_get_shape_count(int p_owner_id){
	return (int) _wasgo_CollisionObject2D_wrapper_shape_owner_get_shape_count(wasgo_id, p_owner_id);
}
int CollisionObject2D::shape_owner_get_shape_index(int p_owner_id, int p_shape_id){
	return (int) _wasgo_CollisionObject2D_wrapper_shape_owner_get_shape_index(wasgo_id, p_owner_id, p_shape_id);
}
Transform2D CollisionObject2D::shape_owner_get_transform(int p_owner_id){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_CollisionObject2D_wrapper_shape_owner_get_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_owner_id);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform2D) wasgo_ret;
    
}
void CollisionObject2D::shape_owner_remove_shape(int p_owner_id, int p_shape_id){
	_wasgo_CollisionObject2D_wrapper_shape_owner_remove_shape(wasgo_id, p_owner_id, p_shape_id);
}
void CollisionObject2D::shape_owner_set_disabled(int p_owner_id, bool p_disabled){
	_wasgo_CollisionObject2D_wrapper_shape_owner_set_disabled(wasgo_id, p_owner_id, p_disabled);
}
void CollisionObject2D::shape_owner_set_one_way_collision(int p_owner_id, bool p_enable){
	_wasgo_CollisionObject2D_wrapper_shape_owner_set_one_way_collision(wasgo_id, p_owner_id, p_enable);
}
void CollisionObject2D::shape_owner_set_one_way_collision_margin(int p_owner_id, float p_margin){
	_wasgo_CollisionObject2D_wrapper_shape_owner_set_one_way_collision_margin(wasgo_id, p_owner_id, p_margin);
}
void CollisionObject2D::shape_owner_set_transform(int p_owner_id, Transform2D p_transform){

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[28];
    int wasgo_size_transform = 28;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_CollisionObject2D_wrapper_shape_owner_set_transform(wasgo_id, p_owner_id, wasgo_buffer_transform, wasgo_size_transform);
}