/* THIS FILE IS GENERATED */
#ifndef VISIBILITYNOTIFIER_H
#define VISIBILITYNOTIFIER_H

#include "wasgo\wasgoid.h"

#include "AABB.h"
#include "Spatial.h"
class VisibilityNotifier : public Spatial{
public:
AABB get_aabb();
bool is_on_screen();
void set_aabb(AABB p_rect);

protected:
public:
explicit VisibilityNotifier(WasGoID p_wasgo_id);
explicit VisibilityNotifier(Spatial other);
VisibilityNotifier();
VisibilityNotifier new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_VisibilityNotifier_wrapper_get_aabb(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_VisibilityNotifier_wrapper_is_on_screen(WasGoID wasgo_id);
void _wasgo_VisibilityNotifier_wrapper_set_aabb(WasGoID wasgo_id, const uint8_t * p_rect, int p_rect_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_VisibilityNotifier_constructor();
            
}
#endif