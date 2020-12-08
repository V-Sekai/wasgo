/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PhysicsShapeQueryResult.h"
int PhysicsShapeQueryResult::get_result_count(){
	return (int) _wasgo_PhysicsShapeQueryResult_wrapper_get_result_count(wasgo_id);
}
Object PhysicsShapeQueryResult::get_result_object(int p_idx){
	return Object(_wasgo_PhysicsShapeQueryResult_wrapper_get_result_object(wasgo_id, p_idx));
}
int PhysicsShapeQueryResult::get_result_object_id(int p_idx){
	return (int) _wasgo_PhysicsShapeQueryResult_wrapper_get_result_object_id(wasgo_id, p_idx);
}
int PhysicsShapeQueryResult::get_result_object_shape(int p_idx){
	return (int) _wasgo_PhysicsShapeQueryResult_wrapper_get_result_object_shape(wasgo_id, p_idx);
}
RID PhysicsShapeQueryResult::get_result_rid(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_PhysicsShapeQueryResult_wrapper_get_result_rid(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}

PhysicsShapeQueryResult::PhysicsShapeQueryResult(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
PhysicsShapeQueryResult::PhysicsShapeQueryResult(Reference other) : Reference(other._get_wasgo_id()){
}
PhysicsShapeQueryResult::PhysicsShapeQueryResult():Reference(){
}
PhysicsShapeQueryResult PhysicsShapeQueryResult::new_instance(){
    return PhysicsShapeQueryResult(_wasgo_PhysicsShapeQueryResult_constructor());
}
WasGoID PhysicsShapeQueryResult::_get_wasgo_id(){
    return wasgo_id;
}
PhysicsShapeQueryResult::operator bool(){
    return (bool) wasgo_id;
}
