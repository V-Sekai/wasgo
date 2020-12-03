/* THIS FILE IS GENERATED */
#ifndef RECTANGLESHAPE2D_H
#define RECTANGLESHAPE2D_H

#include "wasgo\wasgo.h"

#include "Shape2D.h"
#include "Vector2.h"
class RectangleShape2D : public Shape2D{
public:
Vector2 get_extents();
void set_extents(Vector2 p_extents);

protected:
RectangleShape2D(WasGoId p_wasgo_id);
public:
RectangleShape2D();
~RectangleShape2D();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_RectangleShape2D_wrapper_get_extents(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_RectangleShape2D_wrapper_set_extents(WasGoId wasgo_id, const uint8_t * p_extents, int p_extents_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_RectangleShape2D_constructor();
    void _wasgo_RectangleShape2D_destructor(WasGoId p_wasgo_id);
            
}
#endif