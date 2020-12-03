/* THIS FILE IS GENERATED */
#ifndef COLORRECT_H
#define COLORRECT_H

#include "wasgo\wasgo.h"

#include "Control.h"
#include "Color.h"
class ColorRect : public Control{
public:
Color get_frame_color();
void set_frame_color(Color p_color);

protected:
ColorRect(WasGoId p_wasgo_id);
public:
ColorRect();
~ColorRect();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ColorRect_wrapper_get_frame_color(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ColorRect_wrapper_set_frame_color(WasGoId wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_ColorRect_constructor();
    void _wasgo_ColorRect_destructor(WasGoId p_wasgo_id);
            
}
#endif