/* THIS FILE IS GENERATED */
#ifndef GRADIENT_H
#define GRADIENT_H

#include "wasgo\wasgoid.h"

#include "Variant.h"
#include "Resource.h"
#include "Color.h"
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
public:
explicit Gradient(WasGoID p_wasgo_id);
explicit Gradient(Resource other);
Gradient();
Gradient new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Gradient_wrapper_add_point(WasGoID wasgo_id, float p_offset, const uint8_t * p_color, int wasgo_throwaway, int p_color_wasgo_buffer_size);
void _wasgo_Gradient_wrapper_get_color(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_point);
WasGoID _wasgo_Gradient_wrapper_get_colors(WasGoID wasgo_id);
float _wasgo_Gradient_wrapper_get_offset(WasGoID wasgo_id, int p_point);
WasGoID _wasgo_Gradient_wrapper_get_offsets(WasGoID wasgo_id);
int _wasgo_Gradient_wrapper_get_point_count(WasGoID wasgo_id);
void _wasgo_Gradient_wrapper_interpolate(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, float p_offset);
void _wasgo_Gradient_wrapper_remove_point(WasGoID wasgo_id, int p_offset);
void _wasgo_Gradient_wrapper_set_color(WasGoID wasgo_id, int p_point, const uint8_t * p_color, int wasgo_throwaway, int p_color_wasgo_buffer_size);
void _wasgo_Gradient_wrapper_set_colors(WasGoID wasgo_id, WasGoID p_colors);
void _wasgo_Gradient_wrapper_set_offset(WasGoID wasgo_id, int p_point, float p_offset);
void _wasgo_Gradient_wrapper_set_offsets(WasGoID wasgo_id, WasGoID p_offsets);

    //constructor wrappers
    WasGoID _wasgo_Gradient_constructor();
            
}
#endif