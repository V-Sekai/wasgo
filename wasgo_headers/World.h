/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "RID.h"
#include "Resource.h"
#include "PhysicsDirectSpaceState.h"
#include "Environment.h"
class World : public Resource{
public: World();
PhysicsDirectSpaceState  get_direct_space_state();
PhysicsDirectSpaceState  get_direct_space_state();
Environment  get_environment();
Environment  get_environment();
Environment  get_fallback_environment();
Environment  get_fallback_environment();
RID  get_scenario();
RID  get_scenario();
RID  get_space();
RID  get_space();
void  set_environment(Environment env);
void  set_fallback_environment(Environment env);
};