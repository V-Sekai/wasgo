/* THIS FILE IS GENERATED */
#ifndef POPUP_H
#define POPUP_H

#include "stdint.h"

#include "Variant.h"
#include "Control.h"
class Popup : public Control{
public: Popup();
bool is_exclusive();
void popup(Rect2 p_bounds = (Rect2) (0, 0, 0, 0));
void popup_centered(Vector2 p_size = (Vector2) (0, 0));
void popup_centered_clamped(Vector2 p_size = (Vector2) (0, 0), float p_fallback_ratio = (float) 0.75);
void popup_centered_minsize(Vector2 p_minsize = (Vector2) (0, 0));
void popup_centered_ratio(float p_ratio = (float) 0.75);
void set_as_minsize();
void set_exclusive(bool p_enable);
};
#endif