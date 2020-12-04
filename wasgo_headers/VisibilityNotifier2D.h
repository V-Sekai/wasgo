/* THIS FILE IS GENERATED */
#ifndef VISIBILITYNOTIFIER2D_H
#define VISIBILITYNOTIFIER2D_H

#include "wasgo\wasgo.h"

#include "Node2D.h"
#include "Rect2.h"
class VisibilityNotifier2D : public Node2D{
public:
Rect2 get_rect();
bool is_on_screen();
void set_rect(Rect2 p_rect);

protected:
VisibilityNotifier2D(WasGoId p_wasgo_id);
public:
VisibilityNotifier2D();
~VisibilityNotifier2D();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_VisibilityNotifier2D_wrapper_get_rect(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_VisibilityNotifier2D_wrapper_is_on_screen(WasGoId wasgo_id);
void _wasgo_VisibilityNotifier2D_wrapper_set_rect(WasGoId wasgo_id, const uint8_t * p_rect, int p_rect_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_VisibilityNotifier2D_constructor();
    void _wasgo_VisibilityNotifier2D_destructor(WasGoId p_wasgo_id);
            
}
#endif