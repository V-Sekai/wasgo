/* THIS FILE IS GENERATED */
#ifndef BACKBUFFERCOPY_H
#define BACKBUFFERCOPY_H

#include "wasgo\wasgoid.h"

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
explicit BackBufferCopy(WasGoID p_wasgo_id);
explicit BackBufferCopy(Node2D other);
BackBufferCopy();
BackBufferCopy new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_BackBufferCopy_wrapper_get_copy_mode(WasGoID wasgo_id);
void _wasgo_BackBufferCopy_wrapper_get_rect(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_BackBufferCopy_wrapper_set_copy_mode(WasGoID wasgo_id, WasGoID p_copy_mode);
void _wasgo_BackBufferCopy_wrapper_set_rect(WasGoID wasgo_id, const uint8_t * p_rect, int p_rect_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_BackBufferCopy_constructor();
            
}
#endif