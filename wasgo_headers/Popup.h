/* THIS FILE IS GENERATED */
#ifndef POPUP_H
#define POPUP_H

#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "Rect2.h"
#include "Control.h"
class Popup : public Control{
public:
bool is_exclusive();
void popup(Rect2 p_bounds = Rect2((0, 0, 0, 0)));
void popup_centered(Vector2 p_size = Vector2((0, 0)));
void popup_centered_clamped(Vector2 p_size = Vector2((0, 0)), float p_fallback_ratio = (float) 0.75);
void popup_centered_minsize(Vector2 p_minsize = Vector2((0, 0)));
void popup_centered_ratio(float p_ratio = (float) 0.75);
void set_as_minsize();
void set_exclusive(bool p_enable);

protected:
public:
explicit Popup(WasGoID p_wasgo_id);
explicit Popup(Control other);
Popup new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_Popup_wrapper_is_exclusive(WasGoID wasgo_id);
void _wasgo_Popup_wrapper_popup(WasGoID wasgo_id, const uint8_t * p_bounds, int p_bounds_wasgo_buffer_size);
void _wasgo_Popup_wrapper_popup_centered(WasGoID wasgo_id, const uint8_t * p_size, int p_size_wasgo_buffer_size);
void _wasgo_Popup_wrapper_popup_centered_clamped(WasGoID wasgo_id, const uint8_t * p_size, int p_size_wasgo_buffer_size, float p_fallback_ratio);
void _wasgo_Popup_wrapper_popup_centered_minsize(WasGoID wasgo_id, const uint8_t * p_minsize, int p_minsize_wasgo_buffer_size);
void _wasgo_Popup_wrapper_popup_centered_ratio(WasGoID wasgo_id, float p_ratio);
void _wasgo_Popup_wrapper_set_as_minsize(WasGoID wasgo_id);
void _wasgo_Popup_wrapper_set_exclusive(WasGoID wasgo_id, bool p_enable);

    //constructor wrappers
    WasGoID _wasgo_Popup_constructor();
            
}
#endif