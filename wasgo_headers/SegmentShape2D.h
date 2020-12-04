/* THIS FILE IS GENERATED */
#ifndef SEGMENTSHAPE2D_H
#define SEGMENTSHAPE2D_H

#include "wasgo\wasgo.h"

#include "Shape2D.h"
#include "Vector2.h"
class SegmentShape2D : public Shape2D{
public:
Vector2 get_a();
Vector2 get_b();
void set_a(Vector2 p_a);
void set_b(Vector2 p_b);

protected:
public:
explicit SegmentShape2D(WasGoID p_wasgo_id);
explicit SegmentShape2D(Shape2D other);
SegmentShape2D new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_SegmentShape2D_wrapper_get_a(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_SegmentShape2D_wrapper_get_b(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_SegmentShape2D_wrapper_set_a(WasGoID wasgo_id, const uint8_t * p_a, int p_a_wasgo_buffer_size);
void _wasgo_SegmentShape2D_wrapper_set_b(WasGoID wasgo_id, const uint8_t * p_b, int p_b_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_SegmentShape2D_constructor();
            
}
#endif