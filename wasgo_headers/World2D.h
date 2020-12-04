/* THIS FILE IS GENERATED */
#ifndef WORLD2D_H
#define WORLD2D_H

#include "wasgo\wasgo.h"

#include "Resource.h"
#include "Physics2DDirectSpaceState.h"
#include "RID.h"
class World2D : public Resource{
public:
RID get_canvas();
Physics2DDirectSpaceState get_direct_space_state();
RID get_space();

protected:
World2D(WasGoId p_wasgo_id);
public:
World2D();
~World2D();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_World2D_wrapper_get_canvas(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_World2D_wrapper_get_direct_space_state(WasGoId wasgo_id);
void _wasgo_World2D_wrapper_get_space(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_World2D_constructor();
    void _wasgo_World2D_destructor(WasGoId p_wasgo_id);
            
}
#endif