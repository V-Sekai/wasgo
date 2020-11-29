/* THIS FILE IS GENERATED */
#ifndef VISIBILITYNOTIFIER_H
#define VISIBILITYNOTIFIER_H

#include "stdint.h"

#include "Variant.h"
#include "Spatial.h"
class VisibilityNotifier : public Spatial{
public: VisibilityNotifier();
AABB get_aabb();
bool is_on_screen();
void set_aabb(AABB p_rect);
};
#endif