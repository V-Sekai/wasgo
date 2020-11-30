/* THIS FILE IS GENERATED */
#include "ResourceInteractiveLoader.h"
Resource ResourceInteractiveLoader::get_resource(){
	return Resource::from_wasgo_id(_wasgo_ResourceInteractiveLoader_wrapper_get_resource(wasgo_id));
}
int ResourceInteractiveLoader::get_stage(){
	return (int) _wasgo_ResourceInteractiveLoader_wrapper_get_stage(wasgo_id));
}
int ResourceInteractiveLoader::get_stage_count(){
	return (int) _wasgo_ResourceInteractiveLoader_wrapper_get_stage_count(wasgo_id));
}
Error ResourceInteractiveLoader::poll(){
	return Error::from_wasgo_id(_wasgo_ResourceInteractiveLoader_wrapper_poll(wasgo_id));
}
Error ResourceInteractiveLoader::wait(){
	return Error::from_wasgo_id(_wasgo_ResourceInteractiveLoader_wrapper_wait(wasgo_id));
}