/* THIS FILE IS GENERATED */
#ifndef CAPSULESHAPE_H
#define CAPSULESHAPE_H

#include "stdint.h"

#include "Shape.h"
class CapsuleShape : public Shape{
public: CapsuleShape();
float get_height();
float get_radius();
void set_height(float p_height);
void set_radius(float p_radius);
};
#endif