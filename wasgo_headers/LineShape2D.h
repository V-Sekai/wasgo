/* THIS FILE IS GENERATED */
#ifndef LINESHAPE2D_H
#define LINESHAPE2D_H

#include "wasgo\wasgoid.h"

#include "Shape2D.h"
#include "Vector2.h"
class LineShape2D : public Shape2D{
public:
float get_d();
Vector2 get_normal();
void set_d(float p_d);
void set_normal(Vector2 p_normal);

protected:
public:
explicit LineShape2D(WasGoID p_wasgo_id);
explicit LineShape2D(Shape2D other);
LineShape2D();
LineShape2D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_LineShape2D_wrapper_get_d(WasGoID wasgo_id);
void _wasgo_LineShape2D_wrapper_get_normal(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_LineShape2D_wrapper_set_d(WasGoID wasgo_id, float p_d);
void _wasgo_LineShape2D_wrapper_set_normal(WasGoID wasgo_id, const uint8_t * p_normal, int p_normal_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_LineShape2D_constructor();
            
}
#endif