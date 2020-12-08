/* THIS FILE IS GENERATED */
#ifndef CANVASMODULATE_H
#define CANVASMODULATE_H

#include "wasgo\wasgoid.h"

#include "Color.h"
#include "Node2D.h"
class CanvasModulate : public Node2D{
public:
Color get_color();
void set_color(Color p_color);

protected:
public:
explicit CanvasModulate(WasGoID p_wasgo_id);
explicit CanvasModulate(Node2D other);
CanvasModulate();
CanvasModulate new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_CanvasModulate_wrapper_get_color(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_CanvasModulate_wrapper_set_color(WasGoID wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_CanvasModulate_constructor();
            
}
#endif