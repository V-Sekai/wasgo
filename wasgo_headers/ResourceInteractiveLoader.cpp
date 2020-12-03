/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ResourceInteractiveLoader.h"
Resource ResourceInteractiveLoader::get_resource(){
	return Resource(_wasgo_ResourceInteractiveLoader_wrapper_get_resource(wasgo_id));
}
int ResourceInteractiveLoader::get_stage(){
	return (int) _wasgo_ResourceInteractiveLoader_wrapper_get_stage(wasgo_id);
}
int ResourceInteractiveLoader::get_stage_count(){
	return (int) _wasgo_ResourceInteractiveLoader_wrapper_get_stage_count(wasgo_id);
}
Error ResourceInteractiveLoader::poll(){
	return Error(_wasgo_ResourceInteractiveLoader_wrapper_poll(wasgo_id));
}
Error ResourceInteractiveLoader::wait(){
	return Error(_wasgo_ResourceInteractiveLoader_wrapper_wait(wasgo_id));
}