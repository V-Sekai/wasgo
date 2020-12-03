/* THIS FILE IS GENERATED */
#ifndef POPUP_H
#define POPUP_H

#include "wasgo\wasgo.h"

#include "Control.h"
#include "Vector2.h"
#include "Rect2.h"
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
Popup(WasGoId p_wasgo_id);
public:
Popup();
~Popup();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_Popup_wrapper_is_exclusive(WasGoId wasgo_id);
void _wasgo_Popup_wrapper_popup(WasGoId wasgo_id, const uint8_t * p_bounds, int p_bounds_wasgo_buffer_size);
void _wasgo_Popup_wrapper_popup_centered(WasGoId wasgo_id, const uint8_t * p_size, int p_size_wasgo_buffer_size);
void _wasgo_Popup_wrapper_popup_centered_clamped(WasGoId wasgo_id, const uint8_t * p_size, int p_size_wasgo_buffer_size, float p_fallback_ratio);
void _wasgo_Popup_wrapper_popup_centered_minsize(WasGoId wasgo_id, const uint8_t * p_minsize, int p_minsize_wasgo_buffer_size);
void _wasgo_Popup_wrapper_popup_centered_ratio(WasGoId wasgo_id, float p_ratio);
void _wasgo_Popup_wrapper_set_as_minsize(WasGoId wasgo_id);
void _wasgo_Popup_wrapper_set_exclusive(WasGoId wasgo_id, bool p_enable);

    //constructor and destructor wrappers
    WasGoId _wasgo_Popup_constructor();
    void _wasgo_Popup_destructor(WasGoId p_wasgo_id);
            
}
#endif