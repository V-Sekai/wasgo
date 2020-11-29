/* THIS FILE IS GENERATED */
#ifndef PHYSICSBODY_H
#define PHYSICSBODY_H

#include "stdint.h"

#include "CollisionObject.h"
class PhysicsBody : public CollisionObject{
public: PhysicsBody();
int get_collision_layer();
bool get_collision_layer_bit(int p_bit);
int get_collision_mask();
bool get_collision_mask_bit(int p_bit);
void set_collision_layer(int p_layer);
void set_collision_layer_bit(int p_bit, bool p_value);
void set_collision_mask(int p_mask);
void set_collision_mask_bit(int p_bit, bool p_value);
};
#endif