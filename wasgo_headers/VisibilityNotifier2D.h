/* THIS FILE IS GENERATED */
#ifndef VISIBILITYNOTIFIER2D_H
#define VISIBILITYNOTIFIER2D_H

#include "wasgo\wasgoid.h"

#include "Rect2.h"
#include "Node2D.h"
class VisibilityNotifier2D : public Node2D{
public:
Rect2 get_rect();
bool is_on_screen();
void set_rect(Rect2 p_rect);

protected:
public:
explicit VisibilityNotifier2D(WasGoID p_wasgo_id);
explicit VisibilityNotifier2D(Node2D other);
VisibilityNotifier2D();
VisibilityNotifier2D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_VisibilityNotifier2D_wrapper_get_rect(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_VisibilityNotifier2D_wrapper_is_on_screen(WasGoID wasgo_id);
void _wasgo_VisibilityNotifier2D_wrapper_set_rect(WasGoID wasgo_id, const uint8_t * p_rect, int p_rect_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_VisibilityNotifier2D_constructor();
            
}
#endif