/* THIS FILE IS GENERATED */
#ifndef WORLD_H
#define WORLD_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "RID.h"
#include "Environment.h"
#include "Resource.h"
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

World(WasGoId p_wasgo_id);
~World();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_World_wrapper_get_direct_space_state(WasGoId wasgo_id);
WasGoId _wasgo_World_wrapper_get_environment(WasGoId wasgo_id);
WasGoId _wasgo_World_wrapper_get_fallback_environment(WasGoId wasgo_id);
WasGoId _wasgo_World_wrapper_get_scenario(WasGoId wasgo_id);
WasGoId _wasgo_World_wrapper_get_space(WasGoId wasgo_id);
void _wasgo_World_wrapper_set_environment(WasGoId wasgo_id, WasGoId p_env);
void _wasgo_World_wrapper_set_fallback_environment(WasGoId wasgo_id, WasGoId p_env);
}
#endif