/* THIS FILE IS GENERATED */
#ifndef VISIBILITYNOTIFIER_H
#define VISIBILITYNOTIFIER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Spatial.h"
#include "Variant.h"
class VisibilityNotifier : public Spatial{
AABB get_aabb();
bool is_on_screen();
void set_aabb(AABB p_rect);

VisibilityNotifier(WasGoId p_wasgo_id);
~VisibilityNotifier();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_VisibilityNotifier_wrapper_get_aabb(WasGoId wasgo_id);
int _wasgo_VisibilityNotifier_wrapper_is_on_screen(WasGoId wasgo_id);
void _wasgo_VisibilityNotifier_wrapper_set_aabb(WasGoId wasgo_id, WasGo::WasGoId p_rect);
}
#endif