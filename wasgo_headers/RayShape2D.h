/* THIS FILE IS GENERATED */
#ifndef RAYSHAPE2D_H
#define RAYSHAPE2D_H

#include <stdint.h>

#include "Shape2D.h"
class RayShape2D : public Shape2D{
public: RayShape2D();
float  get_length();
float  get_length();
bool  get_slips_on_slope();
bool  get_slips_on_slope();
void  set_length(float length);
void  set_slips_on_slope(bool active);
};
#endif