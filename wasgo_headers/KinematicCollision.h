/* THIS FILE IS GENERATED */
#ifndef KINEMATICCOLLISION_H
#define KINEMATICCOLLISION_H

#include <stdint.h>

#include "Vector3.h"
#include "Variant.h"
#include "Reference.h"
#include "Object.h"
class KinematicCollision : public Reference{
public: KinematicCollision();
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
Vector3  get_collider_velocity();
Vector3  get_collider_velocity();
Object  get_local_shape();
Object  get_local_shape();
Vector3  get_normal();
Vector3  get_normal();
Vector3  get_position();
Vector3  get_position();
Vector3  get_remainder();
Vector3  get_remainder();
Vector3  get_travel();
Vector3  get_travel();
};
#endif