/* THIS FILE IS GENERATED */
#ifndef PHYSICSBODY_H
#define PHYSICSBODY_H

#include "wasgo\wasgo.h"

#include "CollisionObject.h"
#include "Variant.h"
#include "Node.h"
class PhysicsBody : public CollisionObject{
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
void _wasgo_PhysicsBody_wrapper_add_collision_exception_with(WasGoId wasgo_id, WasGoId p_body);
WasGoId _wasgo_PhysicsBody_wrapper_get_collision_exceptions(WasGoId wasgo_id);
int _wasgo_PhysicsBody_wrapper_get_collision_layer(WasGoId wasgo_id);
int _wasgo_PhysicsBody_wrapper_get_collision_layer_bit(WasGoId wasgo_id, int p_bit);
int _wasgo_PhysicsBody_wrapper_get_collision_mask(WasGoId wasgo_id);
int _wasgo_PhysicsBody_wrapper_get_collision_mask_bit(WasGoId wasgo_id, int p_bit);
void _wasgo_PhysicsBody_wrapper_remove_collision_exception_with(WasGoId wasgo_id, WasGoId p_body);
void _wasgo_PhysicsBody_wrapper_set_collision_layer(WasGoId wasgo_id, int p_layer);
void _wasgo_PhysicsBody_wrapper_set_collision_layer_bit(WasGoId wasgo_id, int p_bit, bool p_value);
void _wasgo_PhysicsBody_wrapper_set_collision_mask(WasGoId wasgo_id, int p_mask);
void _wasgo_PhysicsBody_wrapper_set_collision_mask_bit(WasGoId wasgo_id, int p_bit, bool p_value);

    //constructor and destructor wrappers
    WasGoId _wasgo_PhysicsBody_constructor();
    void _wasgo_PhysicsBody_destructor(WasGoId p_wasgo_id);
            
}
#endif