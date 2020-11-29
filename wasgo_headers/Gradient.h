/* THIS FILE IS GENERATED */
#ifndef GRADIENT_H
#define GRADIENT_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
class Gradient : public Resource{
public: Gradient();
void add_point(float p_offset, Color p_color);
Color get_color(int p_point);
PoolColorArray get_colors();
float get_offset(int p_point);
PoolRealArray get_offsets();
int get_point_count();
Color interpolate(float p_offset);
void remove_point(int p_offset);
void set_color(int p_point, Color p_color);
void set_colors(PoolColorArray p_colors);
void set_offset(int p_point, float p_offset);
void set_offsets(PoolRealArray p_offsets);
};
#endif