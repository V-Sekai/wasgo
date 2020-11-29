/* THIS FILE IS GENERATED */
#ifndef WORLD2D_H
#define WORLD2D_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
#include "Physics2DDirectSpaceState.h"
class World2D : public Resource{
public: World2D();
RID get_canvas();
Physics2DDirectSpaceState get_direct_space_state();
RID get_space();
};
#endif