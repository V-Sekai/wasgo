/* THIS FILE IS GENERATED */
#ifndef COLORRECT_H
#define COLORRECT_H

#include "wasgo\wasgoid.h"

#include "Color.h"
#include "Control.h"
class ColorRect : public Control{
public:
Color get_frame_color();
void set_frame_color(Color p_color);

protected:
public:
explicit ColorRect(WasGoID p_wasgo_id);
explicit ColorRect(Control other);
ColorRect();
ColorRect new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ColorRect_wrapper_get_frame_color(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ColorRect_wrapper_set_frame_color(WasGoID wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_ColorRect_constructor();
            
}
#endif