/* THIS FILE IS GENERATED */
#ifndef POPUP_H
#define POPUP_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Control.h"
class Popup : public Control{
bool is_exclusive();
void popup(Rect2 p_bounds = (Rect2) (0, 0, 0, 0));
void popup_centered(Vector2 p_size = (Vector2) (0, 0));
void popup_centered_clamped(Vector2 p_size = (Vector2) (0, 0), float p_fallback_ratio = (float) 0.75);
void popup_centered_minsize(Vector2 p_minsize = (Vector2) (0, 0));
void popup_centered_ratio(float p_ratio = (float) 0.75);
void set_as_minsize();
void set_exclusive(bool p_enable);

Popup(WasGoId p_wasgo_id);
~Popup();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_Popup_wrapper_is_exclusive(WasGoId wasgo_id);
void _wasgo_Popup_wrapper_popup(WasGoId wasgo_id, WasGo::WasGoId p_bounds);
void _wasgo_Popup_wrapper_popup_centered(WasGoId wasgo_id, WasGo::WasGoId p_size);
void _wasgo_Popup_wrapper_popup_centered_clamped(WasGoId wasgo_id, WasGo::WasGoId p_size, float p_fallback_ratio);
void _wasgo_Popup_wrapper_popup_centered_minsize(WasGoId wasgo_id, WasGo::WasGoId p_minsize);
void _wasgo_Popup_wrapper_popup_centered_ratio(WasGoId wasgo_id, float p_ratio);
void _wasgo_Popup_wrapper_set_as_minsize(WasGoId wasgo_id);
void _wasgo_Popup_wrapper_set_exclusive(WasGoId wasgo_id, bool p_enable);
}
#endif