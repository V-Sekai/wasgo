/* THIS FILE IS GENERATED */
#ifndef VISIBILITYNOTIFIER2D_H
#define VISIBILITYNOTIFIER2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Rect2.h"
#include "Node2D.h"
class VisibilityNotifier2D : public Node2D{
public:
Rect2 get_rect();
bool is_on_screen();
void set_rect(Rect2 p_rect);

VisibilityNotifier2D(WasGoId p_wasgo_id);
~VisibilityNotifier2D();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_VisibilityNotifier2D_wrapper_get_rect(WasGoId wasgo_id);
int _wasgo_VisibilityNotifier2D_wrapper_is_on_screen(WasGoId wasgo_id);
void _wasgo_VisibilityNotifier2D_wrapper_set_rect(WasGoId wasgo_id, WasGoId p_rect);
}
#endif