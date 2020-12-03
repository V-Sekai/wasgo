/* THIS FILE IS GENERATED */
#ifndef STYLEBOXLINE_H
#define STYLEBOXLINE_H

#include "wasgo\wasgo.h"

#include "StyleBox.h"
#include "Color.h"
class StyleBoxLine : public StyleBox{
public:
Color get_color();
float get_grow_begin();
float get_grow_end();
int get_thickness();
bool is_vertical();
void set_color(Color p_color);
void set_grow_begin(float p_offset);
void set_grow_end(float p_offset);
void set_thickness(int p_thickness);
void set_vertical(bool p_vertical);

protected:
StyleBoxLine(WasGoId p_wasgo_id);
public:
StyleBoxLine();
~StyleBoxLine();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_StyleBoxLine_wrapper_get_color(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_StyleBoxLine_wrapper_get_grow_begin(WasGoId wasgo_id);
float _wasgo_StyleBoxLine_wrapper_get_grow_end(WasGoId wasgo_id);
int _wasgo_StyleBoxLine_wrapper_get_thickness(WasGoId wasgo_id);
int _wasgo_StyleBoxLine_wrapper_is_vertical(WasGoId wasgo_id);
void _wasgo_StyleBoxLine_wrapper_set_color(WasGoId wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_StyleBoxLine_wrapper_set_grow_begin(WasGoId wasgo_id, float p_offset);
void _wasgo_StyleBoxLine_wrapper_set_grow_end(WasGoId wasgo_id, float p_offset);
void _wasgo_StyleBoxLine_wrapper_set_thickness(WasGoId wasgo_id, int p_thickness);
void _wasgo_StyleBoxLine_wrapper_set_vertical(WasGoId wasgo_id, bool p_vertical);

    //constructor and destructor wrappers
    WasGoId _wasgo_StyleBoxLine_constructor();
    void _wasgo_StyleBoxLine_destructor(WasGoId p_wasgo_id);
            
}
#endif