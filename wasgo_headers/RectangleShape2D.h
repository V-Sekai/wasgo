/* THIS FILE IS GENERATED */
#ifndef RECTANGLESHAPE2D_H
#define RECTANGLESHAPE2D_H

#include "wasgo\wasgoid.h"

#include "Vector2.h"
#include "Shape2D.h"
class RectangleShape2D : public Shape2D{
public:
Vector2 get_extents();
void set_extents(Vector2 p_extents);

protected:
public:
explicit RectangleShape2D(WasGoID p_wasgo_id);
explicit RectangleShape2D(Shape2D other);
RectangleShape2D();
RectangleShape2D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_RectangleShape2D_wrapper_get_extents(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_RectangleShape2D_wrapper_set_extents(WasGoID wasgo_id, const uint8_t * p_extents, int p_extents_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_RectangleShape2D_constructor();
            
}
#endif