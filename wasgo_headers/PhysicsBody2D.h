/* THIS FILE IS GENERATED */
#ifndef PHYSICSBODY2D_H
#define PHYSICSBODY2D_H

#include <stdint.h>

#include "Node.h"
#include "Variant.h"
#include "CollisionObject2D.h"
class PhysicsBody2D : public CollisionObject2D{
public: PhysicsBody2D();
int  _get_layers();
int  _get_layers();
void  _set_layers(int mask);
void  add_collision_exception_with(Node body);
Array  get_collision_exceptions();
Array  get_collision_exceptions();
int  get_collision_layer();
int  get_collision_layer();
bool  get_collision_layer_bit(int bit);
int  get_collision_mask();
int  get_collision_mask();
bool  get_collision_mask_bit(int bit);
void  remove_collision_exception_with(Node body);
void  set_collision_layer(int layer);
void  set_collision_layer_bit(int bit, bool value);
void  set_collision_mask(int mask);
void  set_collision_mask_bit(int bit, bool value);
};
#endif