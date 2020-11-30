/* THIS FILE IS GENERATED */
#include "PhysicsShapeQueryResult.h"
int PhysicsShapeQueryResult::get_result_count(){
	return (int) _wasgo_PhysicsShapeQueryResult_wrapper_get_result_count(wasgo_id));
}
Object PhysicsShapeQueryResult::get_result_object(int p_idx){
	return Object::from_wasgo_id(_wasgo_PhysicsShapeQueryResult_wrapper_get_result_object(wasgo_id, idx));
}
int PhysicsShapeQueryResult::get_result_object_id(int p_idx){
	return (int) _wasgo_PhysicsShapeQueryResult_wrapper_get_result_object_id(wasgo_id, idx));
}
int PhysicsShapeQueryResult::get_result_object_shape(int p_idx){
	return (int) _wasgo_PhysicsShapeQueryResult_wrapper_get_result_object_shape(wasgo_id, idx));
}
RID PhysicsShapeQueryResult::get_result_rid(int p_idx){
	return RID::from_wasgo_id(_wasgo_PhysicsShapeQueryResult_wrapper_get_result_rid(wasgo_id, idx));
}