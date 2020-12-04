/* THIS FILE IS GENERATED */
#ifndef PHYSICSBODY2D_H
#define PHYSICSBODY2D_H

#include "wasgo\wasgo.h"

#include "CollisionObject2D.h"
#include "Node.h"
#include "Variant.h"
class PhysicsBody2D : public CollisionObject2D{
public:
void add_collision_exception_with(Node p_body);
Array get_collision_exceptions();
int get_collision_layer();
bool get_collision_layer_bit(int p_bit);
int get_collision_mask();
bool get_collision_mask_bit(int p_bit);
void remove_collision_exception_with(Node p_body);
void set_collision_layer(int p_layer);
void set_collision_layer_bit(int p_bit, bool p_value);
void set_collision_mask(int p_mask);
void set_collision_mask_bit(int p_bit, bool p_value);
};


//Wrapper Functions
extern "C"{
void _wasgo_PhysicsBody2D_wrapper_add_collision_exception_with(WasGoID wasgo_id, WasGoID p_body);
WasGoID _wasgo_PhysicsBody2D_wrapper_get_collision_exceptions(WasGoID wasgo_id);
int _wasgo_PhysicsBody2D_wrapper_get_collision_layer(WasGoID wasgo_id);
int _wasgo_PhysicsBody2D_wrapper_get_collision_layer_bit(WasGoID wasgo_id, int p_bit);
int _wasgo_PhysicsBody2D_wrapper_get_collision_mask(WasGoID wasgo_id);
int _wasgo_PhysicsBody2D_wrapper_get_collision_mask_bit(WasGoID wasgo_id, int p_bit);
void _wasgo_PhysicsBody2D_wrapper_remove_collision_exception_with(WasGoID wasgo_id, WasGoID p_body);
void _wasgo_PhysicsBody2D_wrapper_set_collision_layer(WasGoID wasgo_id, int p_layer);
void _wasgo_PhysicsBody2D_wrapper_set_collision_layer_bit(WasGoID wasgo_id, int p_bit, bool p_value);
void _wasgo_PhysicsBody2D_wrapper_set_collision_mask(WasGoID wasgo_id, int p_mask);
void _wasgo_PhysicsBody2D_wrapper_set_collision_mask_bit(WasGoID wasgo_id, int p_bit, bool p_value);

    //constructor wrappers
    WasGoID _wasgo_PhysicsBody2D_constructor();
            
}
#endif