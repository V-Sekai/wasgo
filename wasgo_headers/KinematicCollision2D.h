/* THIS FILE IS GENERATED */
#ifndef KINEMATICCOLLISION2D_H
#define KINEMATICCOLLISION2D_H

#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "Reference.h"
#include "Variant.h"
#include "Object.h"
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
public:
explicit KinematicCollision2D(WasGoID p_wasgo_id);
explicit KinematicCollision2D(Reference other);
KinematicCollision2D new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_KinematicCollision2D_wrapper_get_collider(WasGoID wasgo_id);
int _wasgo_KinematicCollision2D_wrapper_get_collider_id(WasGoID wasgo_id);
WasGoID _wasgo_KinematicCollision2D_wrapper_get_collider_metadata(WasGoID wasgo_id);
WasGoID _wasgo_KinematicCollision2D_wrapper_get_collider_shape(WasGoID wasgo_id);
int _wasgo_KinematicCollision2D_wrapper_get_collider_shape_index(WasGoID wasgo_id);
void _wasgo_KinematicCollision2D_wrapper_get_collider_velocity(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_KinematicCollision2D_wrapper_get_local_shape(WasGoID wasgo_id);
void _wasgo_KinematicCollision2D_wrapper_get_normal(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_KinematicCollision2D_wrapper_get_position(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_KinematicCollision2D_wrapper_get_remainder(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_KinematicCollision2D_wrapper_get_travel(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);

    //constructor wrappers
    WasGoID _wasgo_KinematicCollision2D_constructor();
            
}
#endif