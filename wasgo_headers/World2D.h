/* THIS FILE IS GENERATED */
#ifndef WORLD2D_H
#define WORLD2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Physics2DDirectSpaceState.h"
#include "Resource.h"
class World2D : public Resource{
RID get_canvas();
Physics2DDirectSpaceState get_direct_space_state();
RID get_space();

World2D(WasGoId p_wasgo_id);
~World2D();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_World2D_wrapper_get_canvas(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_World2D_wrapper_get_direct_space_state(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_World2D_wrapper_get_space(WasGoId wasgo_id);
}
#endif