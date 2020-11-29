/* THIS FILE IS GENERATED */
#ifndef SPHERESHAPE_H
#define SPHERESHAPE_H

#include "stdint.h"

#include "Shape.h"
class SphereShape : public Shape{
public: SphereShape();
float get_radius();
void set_radius(float p_radius);
};
#endif