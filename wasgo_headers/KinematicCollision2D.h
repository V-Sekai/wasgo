/* THIS FILE IS GENERATED */
#ifndef KINEMATICCOLLISION2D_H
#define KINEMATICCOLLISION2D_H

#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "Object.h"
#include "Variant.h"
#include "Reference.h"
class KinematicCollision2D : public Reference{
public:
Object get_collider();
int get_collider_id();
Variant get_collider_metadata();
Object get_collider_shape();
int get_collider_shape_index();
Vector2 get_collider_velocity();
Object get_local_shape();
Vector2 get_normal();
Vector2 get_position();
Vector2 get_remainder();
Vector2 get_travel();

protected:
KinematicCollision2D(WasGoId p_wasgo_id);
public:
KinematicCollision2D();
~KinematicCollision2D();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_KinematicCollision2D_wrapper_get_collider(WasGoId wasgo_id);
int _wasgo_KinematicCollision2D_wrapper_get_collider_id(WasGoId wasgo_id);
WasGoId _wasgo_KinematicCollision2D_wrapper_get_collider_metadata(WasGoId wasgo_id);
WasGoId _wasgo_KinematicCollision2D_wrapper_get_collider_shape(WasGoId wasgo_id);
int _wasgo_KinematicCollision2D_wrapper_get_collider_shape_index(WasGoId wasgo_id);
void _wasgo_KinematicCollision2D_wrapper_get_collider_velocity(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_KinematicCollision2D_wrapper_get_local_shape(WasGoId wasgo_id);
void _wasgo_KinematicCollision2D_wrapper_get_normal(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_KinematicCollision2D_wrapper_get_position(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_KinematicCollision2D_wrapper_get_remainder(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_KinematicCollision2D_wrapper_get_travel(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_KinematicCollision2D_constructor();
    void _wasgo_KinematicCollision2D_destructor(WasGoId p_wasgo_id);
            
}
#endif