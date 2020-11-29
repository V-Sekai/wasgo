/* THIS FILE IS GENERATED */
#ifndef VISIBILITYNOTIFIER2D_H
#define VISIBILITYNOTIFIER2D_H

#include "stdint.h"

#include "Node2D.h"
#include "Variant.h"
class VisibilityNotifier2D : public Node2D{
public: VisibilityNotifier2D();
Rect2 get_rect();
bool is_on_screen();
void set_rect(Rect2 p_rect);
};
#endif