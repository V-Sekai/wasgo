/* THIS FILE IS GENERATED */
#ifndef WORLD2D_H
#define WORLD2D_H

#include "wasgo\wasgo.h"

#include "Physics2DDirectSpaceState.h"
#include "RID.h"
#include "Resource.h"
class World2D : public Resource{
public:
RID get_canvas();
Physics2DDirectSpaceState get_direct_space_state();
RID get_space();

protected:
public:
explicit World2D(WasGoId p_wasgo_id);
explicit World2D(Resource other);
World2D new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_World2D_wrapper_get_canvas(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_World2D_wrapper_get_direct_space_state(WasGoId wasgo_id);
void _wasgo_World2D_wrapper_get_space(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);

    //constructor wrappers
    WasGoId _wasgo_World2D_constructor();
            
}
#endif