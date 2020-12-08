/* THIS FILE IS GENERATED */
#ifndef DAMPEDSPRINGJOINT2D_H
#define DAMPEDSPRINGJOINT2D_H

#include "wasgo\wasgoid.h"

#include "Joint2D.h"
class DampedSpringJoint2D : public Joint2D{
public:
float get_damping();
float get_length();
float get_rest_length();
float get_stiffness();
void set_damping(float p_damping);
void set_length(float p_length);
void set_rest_length(float p_rest_length);
void set_stiffness(float p_stiffness);

protected:
public:
explicit DampedSpringJoint2D(WasGoID p_wasgo_id);
explicit DampedSpringJoint2D(Joint2D other);
DampedSpringJoint2D();
DampedSpringJoint2D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_DampedSpringJoint2D_wrapper_get_damping(WasGoID wasgo_id);
float _wasgo_DampedSpringJoint2D_wrapper_get_length(WasGoID wasgo_id);
float _wasgo_DampedSpringJoint2D_wrapper_get_rest_length(WasGoID wasgo_id);
float _wasgo_DampedSpringJoint2D_wrapper_get_stiffness(WasGoID wasgo_id);
void _wasgo_DampedSpringJoint2D_wrapper_set_damping(WasGoID wasgo_id, float p_damping);
void _wasgo_DampedSpringJoint2D_wrapper_set_length(WasGoID wasgo_id, float p_length);
void _wasgo_DampedSpringJoint2D_wrapper_set_rest_length(WasGoID wasgo_id, float p_rest_length);
void _wasgo_DampedSpringJoint2D_wrapper_set_stiffness(WasGoID wasgo_id, float p_stiffness);

    //constructor wrappers
    WasGoID _wasgo_DampedSpringJoint2D_constructor();
            
}
#endif