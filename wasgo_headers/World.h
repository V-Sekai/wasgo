/* THIS FILE IS GENERATED */
#ifndef WORLD_H
#define WORLD_H

#include "wasgo\wasgoid.h"

#include "RID.h"
#include "PhysicsDirectSpaceState.h"
#include "Resource.h"
#include "Environment.h"
class World : public Resource{
public:
PhysicsDirectSpaceState get_direct_space_state();
Environment get_environment();
Environment get_fallback_environment();
RID get_scenario();
RID get_space();
void set_environment(Environment p_env);
void set_fallback_environment(Environment p_env);

protected:
public:
explicit World(WasGoID p_wasgo_id);
explicit World(Resource other);
World();
World new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_World_wrapper_get_direct_space_state(WasGoID wasgo_id);
WasGoID _wasgo_World_wrapper_get_environment(WasGoID wasgo_id);
WasGoID _wasgo_World_wrapper_get_fallback_environment(WasGoID wasgo_id);
void _wasgo_World_wrapper_get_scenario(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_World_wrapper_get_space(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_World_wrapper_set_environment(WasGoID wasgo_id, WasGoID p_env);
void _wasgo_World_wrapper_set_fallback_environment(WasGoID wasgo_id, WasGoID p_env);

    //constructor wrappers
    WasGoID _wasgo_World_constructor();
            
}
#endif