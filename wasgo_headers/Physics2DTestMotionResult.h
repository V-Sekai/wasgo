/* THIS FILE IS GENERATED */
#ifndef PHYSICS2DTESTMOTIONRESULT_H
#define PHYSICS2DTESTMOTIONRESULT_H

#include <stdint.h>

#include "Vector2.h"
#include "RID.h"
#include "Reference.h"
#include "Object.h"
class Physics2DTestMotionResult : public Reference{
public: Physics2DTestMotionResult();
Object  get_collider();
Object  get_collider();
int  get_collider_id();
int  get_collider_id();
RID  get_collider_rid();
RID  get_collider_rid();
int  get_collider_shape();
int  get_collider_shape();
Vector2  get_collider_velocity();
Vector2  get_collider_velocity();
Vector2  get_collision_normal();
Vector2  get_collision_normal();
Vector2  get_collision_point();
Vector2  get_collision_point();
Vector2  get_motion();
Vector2  get_motion();
Vector2  get_motion_remainder();
Vector2  get_motion_remainder();
};
#endif