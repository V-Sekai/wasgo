/* THIS FILE IS GENERATED */
#include "Physics2DShapeQueryResult.h"
int Physics2DShapeQueryResult::get_result_count(){
	return (int) _wasgo_Physics2DShapeQueryResult_wrapper_get_result_count(wasgo_id);
}
Object Physics2DShapeQueryResult::get_result_object(int p_idx){
	return Object::from_wasgo_id(_wasgo_Physics2DShapeQueryResult_wrapper_get_result_object(wasgo_id, p_idx));
}
int Physics2DShapeQueryResult::get_result_object_id(int p_idx){
	return (int) _wasgo_Physics2DShapeQueryResult_wrapper_get_result_object_id(wasgo_id, p_idx);
}
int Physics2DShapeQueryResult::get_result_object_shape(int p_idx){
	return (int) _wasgo_Physics2DShapeQueryResult_wrapper_get_result_object_shape(wasgo_id, p_idx);
}
RID Physics2DShapeQueryResult::get_result_rid(int p_idx){
	return RID::from_wasgo_id(_wasgo_Physics2DShapeQueryResult_wrapper_get_result_rid(wasgo_id, p_idx));
}