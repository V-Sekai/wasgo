/* THIS FILE IS GENERATED */
#ifndef PHYSICS2DTESTMOTIONRESULT_H
#define PHYSICS2DTESTMOTIONRESULT_H

#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "Reference.h"
#include "RID.h"
#include "Object.h"
class Physics2DTestMotionResult : public Reference{
public:
Object get_collider();
int get_collider_id();
RID get_collider_rid();
int get_collider_shape();
Vector2 get_collider_velocity();
Vector2 get_collision_normal();
Vector2 get_collision_point();
Vector2 get_motion();
Vector2 get_motion_remainder();

protected:
public:
explicit Physics2DTestMotionResult(WasGoId p_wasgo_id);
explicit Physics2DTestMotionResult(Reference other);
Physics2DTestMotionResult new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_Physics2DTestMotionResult_wrapper_get_collider(WasGoId wasgo_id);
int _wasgo_Physics2DTestMotionResult_wrapper_get_collider_id(WasGoId wasgo_id);
void _wasgo_Physics2DTestMotionResult_wrapper_get_collider_rid(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Physics2DTestMotionResult_wrapper_get_collider_shape(WasGoId wasgo_id);
void _wasgo_Physics2DTestMotionResult_wrapper_get_collider_velocity(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Physics2DTestMotionResult_wrapper_get_collision_normal(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Physics2DTestMotionResult_wrapper_get_collision_point(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Physics2DTestMotionResult_wrapper_get_motion(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Physics2DTestMotionResult_wrapper_get_motion_remainder(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);

    //constructor wrappers
    WasGoId _wasgo_Physics2DTestMotionResult_constructor();
            
}
#endif