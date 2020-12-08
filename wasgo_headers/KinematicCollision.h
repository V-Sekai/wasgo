/* THIS FILE IS GENERATED */
#ifndef KINEMATICCOLLISION_H
#define KINEMATICCOLLISION_H

#include "wasgo\wasgoid.h"

#include "Variant.h"
#include "Object.h"
#include "Vector3.h"
#include "Reference.h"
class KinematicCollision : public Reference{
public:
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

protected:
public:
explicit KinematicCollision(WasGoID p_wasgo_id);
explicit KinematicCollision(Reference other);
KinematicCollision();
KinematicCollision new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_KinematicCollision_wrapper_get_collider(WasGoID wasgo_id);
int _wasgo_KinematicCollision_wrapper_get_collider_id(WasGoID wasgo_id);
WasGoID _wasgo_KinematicCollision_wrapper_get_collider_metadata(WasGoID wasgo_id);
WasGoID _wasgo_KinematicCollision_wrapper_get_collider_shape(WasGoID wasgo_id);
int _wasgo_KinematicCollision_wrapper_get_collider_shape_index(WasGoID wasgo_id);
void _wasgo_KinematicCollision_wrapper_get_collider_velocity(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_KinematicCollision_wrapper_get_local_shape(WasGoID wasgo_id);
void _wasgo_KinematicCollision_wrapper_get_normal(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_KinematicCollision_wrapper_get_position(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_KinematicCollision_wrapper_get_remainder(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_KinematicCollision_wrapper_get_travel(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);

    //constructor wrappers
    WasGoID _wasgo_KinematicCollision_constructor();
            
}
#endif