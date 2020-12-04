/* THIS FILE IS GENERATED */
#ifndef CANVASMODULATE_H
#define CANVASMODULATE_H

#include "wasgo\wasgo.h"

#include "Node2D.h"
#include "Color.h"
class CanvasModulate : public Node2D{
public:
Color get_color();
void set_color(Color p_color);

protected:
public:
explicit CanvasModulate(WasGoId p_wasgo_id);
explicit CanvasModulate(Node2D other);
CanvasModulate new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_CanvasModulate_wrapper_get_color(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_CanvasModulate_wrapper_set_color(WasGoId wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);

    //constructor wrappers
    WasGoId _wasgo_CanvasModulate_constructor();
            
}
#endif