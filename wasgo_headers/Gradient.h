/* THIS FILE IS GENERATED */
#ifndef GRADIENT_H
#define GRADIENT_H

#include <stdint.h>

#include "Resource.h"
#include "Variant.h"
#include "PoolRealArray.h"
class Gradient : public Resource{
public: Gradient();
void  add_point(float offset, Color color);
Color  get_color(int point);
PoolColorArray  get_colors();
PoolColorArray  get_colors();
float  get_offset(int point);
PoolRealArray  get_offsets();
PoolRealArray  get_offsets();
int  get_point_count();
int  get_point_count();
Color  interpolate(float offset);
void  remove_point(int offset);
void  set_color(int point, Color color);
void  set_colors(PoolColorArray colors);
void  set_offset(int point, float offset);
void  set_offsets(PoolRealArray offsets);
};
#endif