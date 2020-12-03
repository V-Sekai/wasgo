/* THIS FILE IS GENERATED */
#ifndef VISIBILITYNOTIFIER_H
#define VISIBILITYNOTIFIER_H

#include "wasgo\wasgo.h"

#include "AABB.h"
#include "Spatial.h"
class VisibilityNotifier : public Spatial{
public:
AABB get_aabb();
bool is_on_screen();
void set_aabb(AABB p_rect);

protected:
VisibilityNotifier(WasGoId p_wasgo_id);
public:
VisibilityNotifier();
~VisibilityNotifier();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_VisibilityNotifier_wrapper_get_aabb(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_VisibilityNotifier_wrapper_is_on_screen(WasGoId wasgo_id);
void _wasgo_VisibilityNotifier_wrapper_set_aabb(WasGoId wasgo_id, const uint8_t * p_rect, int p_rect_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_VisibilityNotifier_constructor();
    void _wasgo_VisibilityNotifier_destructor(WasGoId p_wasgo_id);
            
}
#endif