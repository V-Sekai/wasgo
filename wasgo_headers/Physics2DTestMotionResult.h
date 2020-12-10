/* THIS FILE IS GENERATED */
#ifndef PHYSICS2DTESTMOTIONRESULT_H
#define PHYSICS2DTESTMOTIONRESULT_H

#include "wasgo\wasgoid.h"

#include "Vector2.h"
#include "RID.h"
#include "Reference.h"
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
explicit Physics2DTestMotionResult(WasGoID p_wasgo_id);
explicit Physics2DTestMotionResult(Reference other);
Physics2DTestMotionResult();
Physics2DTestMotionResult new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_Physics2DTestMotionResult_wrapper_get_collider(WasGoID wasgo_id);
int _wasgo_Physics2DTestMotionResult_wrapper_get_collider_id(WasGoID wasgo_id);
void _wasgo_Physics2DTestMotionResult_wrapper_get_collider_rid(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Physics2DTestMotionResult_wrapper_get_collider_shape(WasGoID wasgo_id);
void _wasgo_Physics2DTestMotionResult_wrapper_get_collider_velocity(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Physics2DTestMotionResult_wrapper_get_collision_normal(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Physics2DTestMotionResult_wrapper_get_collision_point(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Physics2DTestMotionResult_wrapper_get_motion(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Physics2DTestMotionResult_wrapper_get_motion_remainder(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);

    //constructor wrappers
    WasGoID _wasgo_Physics2DTestMotionResult_constructor();
            
}
#endif