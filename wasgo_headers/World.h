/* THIS FILE IS GENERATED */
#ifndef WORLD_H
#define WORLD_H

#include "stdint.h"

#include "Environment.h"
#include "Variant.h"
#include "Resource.h"
#include "PhysicsDirectSpaceState.h"
class World : public Resource{
public: World();
PhysicsDirectSpaceState get_direct_space_state();
Environment get_environment();
Environment get_fallback_environment();
RID get_scenario();
RID get_space();
void set_environment(Environment p_env);
void set_fallback_environment(Environment p_env);
};
#endif