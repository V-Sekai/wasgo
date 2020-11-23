/* THIS FILE IS GENERATED */
#ifndef VISIBILITYNOTIFIER_H
#define VISIBILITYNOTIFIER_H

#include <stdint.h>

#include "Spatial.h"
#include "AABB.h"
class VisibilityNotifier : public Spatial{
public: VisibilityNotifier();
AABB  get_aabb();
AABB  get_aabb();
bool  is_on_screen();
bool  is_on_screen();
void  set_aabb(AABB rect);
};
#endif