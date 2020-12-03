/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "WorldEnvironment.h"
Environment WorldEnvironment::get_environment(){
	return Environment(_wasgo_WorldEnvironment_wrapper_get_environment(wasgo_id));
}
void WorldEnvironment::set_environment(Environment p_env){
	_wasgo_WorldEnvironment_wrapper_set_environment(wasgo_id, p_env._get_wasgo_id());
}

WorldEnvironment::WorldEnvironment(WasGoId p_wasgo_id) : Node(p_wasgo_id){
}
WorldEnvironment::WorldEnvironment(){
    wasgo_id = _wasgo_WorldEnvironment_constructor();
}
WorldEnvironment::~WorldEnvironment(){
    _wasgo_WorldEnvironment_destructor(wasgo_id);
}