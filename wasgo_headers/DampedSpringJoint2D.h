/* THIS FILE IS GENERATED */
#ifndef DAMPEDSPRINGJOINT2D_H
#define DAMPEDSPRINGJOINT2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Joint2D.h"
class DampedSpringJoint2D : public Joint2D{
float get_damping();
float get_length();
float get_rest_length();
float get_stiffness();
void set_damping(float p_damping);
void set_length(float p_length);
void set_rest_length(float p_rest_length);
void set_stiffness(float p_stiffness);

DampedSpringJoint2D(WasGoId p_wasgo_id);
~DampedSpringJoint2D();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_DampedSpringJoint2D_wrapper_get_damping(WasGoId wasgo_id);
float _wasgo_DampedSpringJoint2D_wrapper_get_length(WasGoId wasgo_id);
float _wasgo_DampedSpringJoint2D_wrapper_get_rest_length(WasGoId wasgo_id);
float _wasgo_DampedSpringJoint2D_wrapper_get_stiffness(WasGoId wasgo_id);
void _wasgo_DampedSpringJoint2D_wrapper_set_damping(WasGoId wasgo_id, float p_damping);
void _wasgo_DampedSpringJoint2D_wrapper_set_length(WasGoId wasgo_id, float p_length);
void _wasgo_DampedSpringJoint2D_wrapper_set_rest_length(WasGoId wasgo_id, float p_rest_length);
void _wasgo_DampedSpringJoint2D_wrapper_set_stiffness(WasGoId wasgo_id, float p_stiffness);
}
#endif