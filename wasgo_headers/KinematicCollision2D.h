/* THIS FILE IS GENERATED */
#ifndef KINEMATICCOLLISION2D_H
#define KINEMATICCOLLISION2D_H

#include <stdint.h>

#include "Reference.h"
#include "Vector2.h"
#include "Object.h"
#include "Variant.h"
class KinematicCollision2D : public Reference{
public: KinematicCollision2D();
Object  get_collider();
Object  get_collider();
int  get_collider_id();
int  get_collider_id();
Variant  get_collider_metadata();
Variant  get_collider_metadata();
Object  get_collider_shape();
Object  get_collider_shape();
int  get_collider_shape_index();
int  get_collider_shape_index();
Vector2  get_collider_velocity();
Vector2  get_collider_velocity();
Object  get_local_shape();
Object  get_local_shape();
Vector2  get_normal();
Vector2  get_normal();
Vector2  get_position();
Vector2  get_position();
Vector2  get_remainder();
Vector2  get_remainder();
Vector2  get_travel();
Vector2  get_travel();
};
#endif