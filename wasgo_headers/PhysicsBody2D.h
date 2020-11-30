/* THIS FILE IS GENERATED */
#ifndef PHYSICSBODY2D_H
#define PHYSICSBODY2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "CollisionObject2D.h"
class PhysicsBody2D : public CollisionObject2D{
int get_collision_layer();
bool get_collision_layer_bit(int p_bit);
int get_collision_mask();
bool get_collision_mask_bit(int p_bit);
void set_collision_layer(int p_layer);
void set_collision_layer_bit(int p_bit, bool p_value);
void set_collision_mask(int p_mask);
void set_collision_mask_bit(int p_bit, bool p_value);
};


//Wrapper Functions
extern "C"{
int _wasgo_PhysicsBody2D_wrapper_get_collision_layer(WasGoId wasgo_id);
int _wasgo_PhysicsBody2D_wrapper_get_collision_layer_bit(WasGoId wasgo_id, int p_bit);
int _wasgo_PhysicsBody2D_wrapper_get_collision_mask(WasGoId wasgo_id);
int _wasgo_PhysicsBody2D_wrapper_get_collision_mask_bit(WasGoId wasgo_id, int p_bit);
void _wasgo_PhysicsBody2D_wrapper_set_collision_layer(WasGoId wasgo_id, int p_layer);
void _wasgo_PhysicsBody2D_wrapper_set_collision_layer_bit(WasGoId wasgo_id, int p_bit, bool p_value);
void _wasgo_PhysicsBody2D_wrapper_set_collision_mask(WasGoId wasgo_id, int p_mask);
void _wasgo_PhysicsBody2D_wrapper_set_collision_mask_bit(WasGoId wasgo_id, int p_bit, bool p_value);
}
#endif