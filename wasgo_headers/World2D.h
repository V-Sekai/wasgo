/* THIS FILE IS GENERATED */
#ifndef WORLD2D_H
#define WORLD2D_H

#include "wasgo\wasgo.h"

#include "Physics2DDirectSpaceState.h"
#include "Resource.h"
#include "RID.h"
class World2D : public Resource{
public:
RID get_canvas();
Physics2DDirectSpaceState get_direct_space_state();
RID get_space();

protected:
public:
explicit World2D(WasGoID p_wasgo_id);
explicit World2D(Resource other);
World2D new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_World2D_wrapper_get_canvas(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_World2D_wrapper_get_direct_space_state(WasGoID wasgo_id);
void _wasgo_World2D_wrapper_get_space(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);

    //constructor wrappers
    WasGoID _wasgo_World2D_constructor();
            
}
#endif