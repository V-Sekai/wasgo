/* THIS FILE IS GENERATED */
#ifndef RECTANGLESHAPE2D_H
#define RECTANGLESHAPE2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "Shape2D.h"
class RectangleShape2D : public Shape2D{
public:
Vector2 get_extents();
void set_extents(Vector2 p_extents);

RectangleShape2D(WasGoId p_wasgo_id);
~RectangleShape2D();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_RectangleShape2D_wrapper_get_extents(WasGoId wasgo_id);
void _wasgo_RectangleShape2D_wrapper_set_extents(WasGoId wasgo_id, WasGoId p_extents);
}
#endif