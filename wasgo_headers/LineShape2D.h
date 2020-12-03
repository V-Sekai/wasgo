/* THIS FILE IS GENERATED */
#ifndef LINESHAPE2D_H
#define LINESHAPE2D_H

#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "Shape2D.h"
class LineShape2D : public Shape2D{
public:
float get_d();
Vector2 get_normal();
void set_d(float p_d);
void set_normal(Vector2 p_normal);

protected:
LineShape2D(WasGoId p_wasgo_id);
public:
LineShape2D();
~LineShape2D();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_LineShape2D_wrapper_get_d(WasGoId wasgo_id);
void _wasgo_LineShape2D_wrapper_get_normal(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_LineShape2D_wrapper_set_d(WasGoId wasgo_id, float p_d);
void _wasgo_LineShape2D_wrapper_set_normal(WasGoId wasgo_id, const uint8_t * p_normal, int p_normal_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_LineShape2D_constructor();
    void _wasgo_LineShape2D_destructor(WasGoId p_wasgo_id);
            
}
#endif