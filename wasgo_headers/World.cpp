/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "World.h"
PhysicsDirectSpaceState World::get_direct_space_state(){
	return PhysicsDirectSpaceState(_wasgo_World_wrapper_get_direct_space_state(wasgo_id));
}
Environment World::get_environment(){
	return Environment(_wasgo_World_wrapper_get_environment(wasgo_id));
}
Environment World::get_fallback_environment(){
	return Environment(_wasgo_World_wrapper_get_fallback_environment(wasgo_id));
}
RID World::get_scenario(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_World_wrapper_get_scenario(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
RID World::get_space(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_World_wrapper_get_space(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
void World::set_environment(Environment p_env){
	_wasgo_World_wrapper_set_environment(wasgo_id, p_env._get_wasgo_id());
}
void World::set_fallback_environment(Environment p_env){
	_wasgo_World_wrapper_set_fallback_environment(wasgo_id, p_env._get_wasgo_id());
}

World::World(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
World::World(Resource other) : Resource(other._get_wasgo_id()){
}
World::World():Resource(){
}
World World::new_instance(){
    return World(_wasgo_World_constructor());
}
WasGoID World::_get_wasgo_id(){
    return wasgo_id;
}
World::operator bool(){
    return (bool) wasgo_id;
}
