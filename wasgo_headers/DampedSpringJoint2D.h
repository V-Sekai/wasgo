/* THIS FILE IS GENERATED */
#ifndef DAMPEDSPRINGJOINT2D_H
#define DAMPEDSPRINGJOINT2D_H

#include "stdint.h"

#include "Joint2D.h"
class DampedSpringJoint2D : public Joint2D{
public: DampedSpringJoint2D();
float get_damping();
float get_length();
float get_rest_length();
float get_stiffness();
void set_damping(float p_damping);
void set_length(float p_length);
void set_rest_length(float p_rest_length);
void set_stiffness(float p_stiffness);
};
#endif