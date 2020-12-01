/* THIS FILE IS GENERATED */
#ifndef COLORRECT_H
#define COLORRECT_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Color.h"
#include "Control.h"
class ColorRect : public Control{
public:
Color get_frame_color();
void set_frame_color(Color p_color);

ColorRect(WasGoId p_wasgo_id);
~ColorRect();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_ColorRect_wrapper_get_frame_color(WasGoId wasgo_id);
void _wasgo_ColorRect_wrapper_set_frame_color(WasGoId wasgo_id, WasGoId p_color);
}
#endif