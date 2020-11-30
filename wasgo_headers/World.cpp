/* THIS FILE IS GENERATED */
#include "World.h"
PhysicsDirectSpaceState World::get_direct_space_state(){
	return PhysicsDirectSpaceState::from_wasgo_id(_wasgo_World_wrapper_get_direct_space_state(wasgo_id));
}
Environment World::get_environment(){
	return Environment::from_wasgo_id(_wasgo_World_wrapper_get_environment(wasgo_id));
}
Environment World::get_fallback_environment(){
	return Environment::from_wasgo_id(_wasgo_World_wrapper_get_fallback_environment(wasgo_id));
}
RID World::get_scenario(){
	return RID::from_wasgo_id(_wasgo_World_wrapper_get_scenario(wasgo_id));
}
RID World::get_space(){
	return RID::from_wasgo_id(_wasgo_World_wrapper_get_space(wasgo_id));
}
void World::set_environment(Environment p_env){
	_wasgo_World_wrapper_set_environment(wasgo_id, ((Variant) env).get_wasgo_id());
}
void World::set_fallback_environment(Environment p_env){
	_wasgo_World_wrapper_set_fallback_environment(wasgo_id, ((Variant) env).get_wasgo_id());
}

World::World(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
World::~World(){
}