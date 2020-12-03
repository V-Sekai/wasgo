/* THIS FILE IS GENERATED */
#ifndef WORLD_H
#define WORLD_H

#include "wasgo\wasgo.h"

#include "Resource.h"
#include "RID.h"
#include "Environment.h"
#include "PhysicsDirectSpaceState.h"
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
World(WasGoId p_wasgo_id);
public:
World();
~World();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_World_wrapper_get_direct_space_state(WasGoId wasgo_id);
WasGoId _wasgo_World_wrapper_get_environment(WasGoId wasgo_id);
WasGoId _wasgo_World_wrapper_get_fallback_environment(WasGoId wasgo_id);
void _wasgo_World_wrapper_get_scenario(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_World_wrapper_get_space(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_World_wrapper_set_environment(WasGoId wasgo_id, WasGoId p_env);
void _wasgo_World_wrapper_set_fallback_environment(WasGoId wasgo_id, WasGoId p_env);

    //constructor and destructor wrappers
    WasGoId _wasgo_World_constructor();
    void _wasgo_World_destructor(WasGoId p_wasgo_id);
            
}
#endif