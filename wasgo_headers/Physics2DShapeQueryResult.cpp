/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Physics2DShapeQueryResult.h"
int Physics2DShapeQueryResult::get_result_count(){
	return (int) _wasgo_Physics2DShapeQueryResult_wrapper_get_result_count(wasgo_id);
}
Object Physics2DShapeQueryResult::get_result_object(int p_idx){
	return Object(_wasgo_Physics2DShapeQueryResult_wrapper_get_result_object(wasgo_id, p_idx));
}
int Physics2DShapeQueryResult::get_result_object_id(int p_idx){
	return (int) _wasgo_Physics2DShapeQueryResult_wrapper_get_result_object_id(wasgo_id, p_idx);
}
int Physics2DShapeQueryResult::get_result_object_shape(int p_idx){
	return (int) _wasgo_Physics2DShapeQueryResult_wrapper_get_result_object_shape(wasgo_id, p_idx);
}
RID Physics2DShapeQueryResult::get_result_rid(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_Physics2DShapeQueryResult_wrapper_get_result_rid(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}