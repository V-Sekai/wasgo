/* THIS FILE IS GENERATED */
#include "WorldEnvironment.h"
Environment WorldEnvironment::get_environment(){
	return Environment::from_wasgo_id(_wasgo_WorldEnvironment_wrapper_get_environment(wasgo_id));
}
void WorldEnvironment::set_environment(Environment p_env){
	_wasgo_WorldEnvironment_wrapper_set_environment(wasgo_id, ((Variant) p_env).get_wasgo_id());
}