/* THIS FILE IS GENERATED */
#ifndef SEGMENTSHAPE2D_H
#define SEGMENTSHAPE2D_H

#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "Shape2D.h"
class SegmentShape2D : public Shape2D{
public:
Vector2 get_a();
Vector2 get_b();
void set_a(Vector2 p_a);
void set_b(Vector2 p_b);

protected:
SegmentShape2D(WasGoId p_wasgo_id);
public:
SegmentShape2D();
~SegmentShape2D();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_SegmentShape2D_wrapper_get_a(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_SegmentShape2D_wrapper_get_b(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_SegmentShape2D_wrapper_set_a(WasGoId wasgo_id, const uint8_t * p_a, int p_a_wasgo_buffer_size);
void _wasgo_SegmentShape2D_wrapper_set_b(WasGoId wasgo_id, const uint8_t * p_b, int p_b_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_SegmentShape2D_constructor();
    void _wasgo_SegmentShape2D_destructor(WasGoId p_wasgo_id);
            
}
#endif