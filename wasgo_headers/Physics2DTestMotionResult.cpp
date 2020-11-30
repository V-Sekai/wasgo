/* THIS FILE IS GENERATED */
#include "Physics2DTestMotionResult.h"
Object Physics2DTestMotionResult::get_collider(){
	return Object::from_wasgo_id(_wasgo_Physics2DTestMotionResult_wrapper_get_collider(wasgo_id));
}
int Physics2DTestMotionResult::get_collider_id(){
	return (int) _wasgo_Physics2DTestMotionResult_wrapper_get_collider_id(wasgo_id));
}
RID Physics2DTestMotionResult::get_collider_rid(){
	return RID::from_wasgo_id(_wasgo_Physics2DTestMotionResult_wrapper_get_collider_rid(wasgo_id));
}
int Physics2DTestMotionResult::get_collider_shape(){
	return (int) _wasgo_Physics2DTestMotionResult_wrapper_get_collider_shape(wasgo_id));
}
Vector2 Physics2DTestMotionResult::get_collider_velocity(){
	return Vector2::from_wasgo_id(_wasgo_Physics2DTestMotionResult_wrapper_get_collider_velocity(wasgo_id));
}
Vector2 Physics2DTestMotionResult::get_collision_normal(){
	return Vector2::from_wasgo_id(_wasgo_Physics2DTestMotionResult_wrapper_get_collision_normal(wasgo_id));
}
Vector2 Physics2DTestMotionResult::get_collision_point(){
	return Vector2::from_wasgo_id(_wasgo_Physics2DTestMotionResult_wrapper_get_collision_point(wasgo_id));
}
Vector2 Physics2DTestMotionResult::get_motion(){
	return Vector2::from_wasgo_id(_wasgo_Physics2DTestMotionResult_wrapper_get_motion(wasgo_id));
}
Vector2 Physics2DTestMotionResult::get_motion_remainder(){
	return Vector2::from_wasgo_id(_wasgo_Physics2DTestMotionResult_wrapper_get_motion_remainder(wasgo_id));
}

Physics2DTestMotionResult::Physics2DTestMotionResult(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
Physics2DTestMotionResult::~Physics2DTestMotionResult(){
}