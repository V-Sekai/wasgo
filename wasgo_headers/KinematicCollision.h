/* THIS FILE IS GENERATED */
#ifndef KINEMATICCOLLISION_H
#define KINEMATICCOLLISION_H

#include "stdint.h"

#include "Reference.h"
#include "Object.h"
#include "Variant.h"
class KinematicCollision : public Reference{
public: KinematicCollision();
Object get_collider();
int get_collider_id();
Variant get_collider_metadata();
Object get_collider_shape();
int get_collider_shape_index();
Vector3 get_collider_velocity();
Object get_local_shape();
Vector3 get_normal();
Vector3 get_position();
Vector3 get_remainder();
Vector3 get_travel();
};
#endif