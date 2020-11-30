/* THIS FILE IS GENERATED */
#ifndef CANVASMODULATE_H
#define CANVASMODULATE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Node2D.h"
class CanvasModulate : public Node2D{
Color get_color();
void set_color(Color p_color);

CanvasModulate(WasGoId p_wasgo_id);
~CanvasModulate();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_CanvasModulate_wrapper_get_color(WasGoId wasgo_id);
void _wasgo_CanvasModulate_wrapper_set_color(WasGoId wasgo_id, WasGo::WasGoId p_color);
}
#endif