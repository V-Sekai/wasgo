/* THIS FILE IS GENERATED */
#ifndef CYLINDERSHAPE_H
#define CYLINDERSHAPE_H

#include "stdint.h"

#include "Shape.h"
class CylinderShape : public Shape{
public: CylinderShape();
float get_height();
float get_radius();
void set_height(float p_height);
void set_radius(float p_radius);
};
#endif