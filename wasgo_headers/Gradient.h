/* THIS FILE IS GENERATED */
#ifndef GRADIENT_H
#define GRADIENT_H

#include "wasgo\wasgo.h"

#include "Color.h"
#include "Resource.h"
#include "Variant.h"
class Gradient : public Resource{
public:
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

protected:
Gradient(WasGoId p_wasgo_id);
public:
Gradient();
~Gradient();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Gradient_wrapper_add_point(WasGoId wasgo_id, float p_offset, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_Gradient_wrapper_get_color(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_point);
WasGoId _wasgo_Gradient_wrapper_get_colors(WasGoId wasgo_id);
float _wasgo_Gradient_wrapper_get_offset(WasGoId wasgo_id, int p_point);
WasGoId _wasgo_Gradient_wrapper_get_offsets(WasGoId wasgo_id);
int _wasgo_Gradient_wrapper_get_point_count(WasGoId wasgo_id);
void _wasgo_Gradient_wrapper_interpolate(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, float p_offset);
void _wasgo_Gradient_wrapper_remove_point(WasGoId wasgo_id, int p_offset);
void _wasgo_Gradient_wrapper_set_color(WasGoId wasgo_id, int p_point, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_Gradient_wrapper_set_colors(WasGoId wasgo_id, WasGoId p_colors);
void _wasgo_Gradient_wrapper_set_offset(WasGoId wasgo_id, int p_point, float p_offset);
void _wasgo_Gradient_wrapper_set_offsets(WasGoId wasgo_id, WasGoId p_offsets);

    //constructor and destructor wrappers
    WasGoId _wasgo_Gradient_constructor();
    void _wasgo_Gradient_destructor(WasGoId p_wasgo_id);
            
}
#endif