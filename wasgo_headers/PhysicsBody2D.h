/* THIS FILE IS GENERATED */
#ifndef PHYSICSBODY2D_H
#define PHYSICSBODY2D_H

#include "stdint.h"

#include "CollisionObject2D.h"
class PhysicsBody2D : public CollisionObject2D{
public: PhysicsBody2D();
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