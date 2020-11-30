/* THIS FILE IS GENERATED */
#ifndef PHYSICS2DTESTMOTIONRESULT_H
#define PHYSICS2DTESTMOTIONRESULT_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Object.h"
#include "Reference.h"
class Physics2DTestMotionResult : public Reference{
Object get_collider();
int get_collider_id();
RID get_collider_rid();
int get_collider_shape();
Vector2 get_collider_velocity();
Vector2 get_collision_normal();
Vector2 get_collision_point();
Vector2 get_motion();
Vector2 get_motion_remainder();

Physics2DTestMotionResult(WasGoId p_wasgo_id);
~Physics2DTestMotionResult();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_Physics2DTestMotionResult_wrapper_get_collider(WasGoId wasgo_id);
int _wasgo_Physics2DTestMotionResult_wrapper_get_collider_id(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Physics2DTestMotionResult_wrapper_get_collider_rid(WasGoId wasgo_id);
int _wasgo_Physics2DTestMotionResult_wrapper_get_collider_shape(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Physics2DTestMotionResult_wrapper_get_collider_velocity(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Physics2DTestMotionResult_wrapper_get_collision_normal(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Physics2DTestMotionResult_wrapper_get_collision_point(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Physics2DTestMotionResult_wrapper_get_motion(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Physics2DTestMotionResult_wrapper_get_motion_remainder(WasGoId wasgo_id);
}
#endif