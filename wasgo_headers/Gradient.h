/* THIS FILE IS GENERATED */
#ifndef GRADIENT_H
#define GRADIENT_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Resource.h"
class Gradient : public Resource{
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

Gradient(WasGoId p_wasgo_id);
~Gradient();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Gradient_wrapper_add_point(WasGoId wasgo_id, float p_offset, WasGo::WasGoId p_color);
WasGo::WasGoId _wasgo_Gradient_wrapper_get_color(WasGoId wasgo_id, int p_point);
WasGo::WasGoId _wasgo_Gradient_wrapper_get_colors(WasGoId wasgo_id);
float _wasgo_Gradient_wrapper_get_offset(WasGoId wasgo_id, int p_point);
WasGo::WasGoId _wasgo_Gradient_wrapper_get_offsets(WasGoId wasgo_id);
int _wasgo_Gradient_wrapper_get_point_count(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Gradient_wrapper_interpolate(WasGoId wasgo_id, float p_offset);
void _wasgo_Gradient_wrapper_remove_point(WasGoId wasgo_id, int p_offset);
void _wasgo_Gradient_wrapper_set_color(WasGoId wasgo_id, int p_point, WasGo::WasGoId p_color);
void _wasgo_Gradient_wrapper_set_colors(WasGoId wasgo_id, WasGo::WasGoId p_colors);
void _wasgo_Gradient_wrapper_set_offset(WasGoId wasgo_id, int p_point, float p_offset);
void _wasgo_Gradient_wrapper_set_offsets(WasGoId wasgo_id, WasGo::WasGoId p_offsets);
}
#endif