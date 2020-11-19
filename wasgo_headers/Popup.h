/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Control.h"
#include "Vector2.h"
#include "Rect2.h"
class Popup : public Control{
public: Popup();
bool  is_exclusive();
bool  is_exclusive();
void  popup(Rect2 bounds = (0, 0, 0, 0));
void  popup_centered(Vector2 size = (0, 0));
void  popup_centered_clamped(Vector2 size = (0, 0), float fallback_ratio = 0.75);
void  popup_centered_minsize(Vector2 minsize = (0, 0));
void  popup_centered_ratio(float ratio = 0.75);
void  set_as_minsize();
void  set_as_minsize();
void  set_exclusive(bool enable);
};