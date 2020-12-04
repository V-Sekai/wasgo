/* THIS FILE IS GENERATED */
#ifndef BACKBUFFERCOPY_H
#define BACKBUFFERCOPY_H

#include "wasgo\wasgo.h"

#include "Rect2.h"
#include "Node2D.h"
class BackBufferCopy : public Node2D{
public:
enum CopyMode{
COPY_MODE_DISABLED,
COPY_MODE_RECT,
COPY_MODE_VIEWPORT
};
BackBufferCopy::CopyMode get_copy_mode();
Rect2 get_rect();
void set_copy_mode(BackBufferCopy::CopyMode p_copy_mode);
void set_rect(Rect2 p_rect);

protected:
public:
explicit BackBufferCopy(WasGoId p_wasgo_id);
explicit BackBufferCopy(Node2D other);
BackBufferCopy new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_BackBufferCopy_wrapper_get_copy_mode(WasGoId wasgo_id);
void _wasgo_BackBufferCopy_wrapper_get_rect(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_BackBufferCopy_wrapper_set_copy_mode(WasGoId wasgo_id, WasGoId p_copy_mode);
void _wasgo_BackBufferCopy_wrapper_set_rect(WasGoId wasgo_id, const uint8_t * p_rect, int p_rect_wasgo_buffer_size);

    //constructor wrappers
    WasGoId _wasgo_BackBufferCopy_constructor();
            
}
#endif