/* THIS FILE IS GENERATED */
#ifndef CAPSULESHAPE2D_H
#define CAPSULESHAPE2D_H

#include "stdint.h"

#include "Shape2D.h"
class CapsuleShape2D : public Shape2D{
public: CapsuleShape2D();
float get_height();
float get_radius();
void set_height(float p_height);
void set_radius(float p_radius);
};
#endif