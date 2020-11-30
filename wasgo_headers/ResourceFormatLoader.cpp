/* THIS FILE IS GENERATED */
#include "ResourceFormatLoader.h"
void ResourceFormatLoader::get_dependencies(String p_path, String p_add_types){
	_wasgo_ResourceFormatLoader_wrapper_get_dependencies(wasgo_id, ((Variant) path).get_wasgo_id(), ((Variant) add_types).get_wasgo_id());
}
PoolStringArray ResourceFormatLoader::get_recognized_extensions(){
	return PoolStringArray::from_wasgo_id(_wasgo_ResourceFormatLoader_wrapper_get_recognized_extensions(wasgo_id));
}
String ResourceFormatLoader::get_resource_type(String p_path){
	return String::from_wasgo_id(_wasgo_ResourceFormatLoader_wrapper_get_resource_type(wasgo_id, ((Variant) path).get_wasgo_id()));
}
bool ResourceFormatLoader::handles_type(String p_typename){
	return (bool) _wasgo_ResourceFormatLoader_wrapper_handles_type(wasgo_id, ((Variant) typename).get_wasgo_id()));
}
Variant ResourceFormatLoader::load(String p_path, String p_original_path){
	return Variant::from_wasgo_id(_wasgo_ResourceFormatLoader_wrapper_load(wasgo_id, ((Variant) path).get_wasgo_id(), ((Variant) original_path).get_wasgo_id()));
}
int ResourceFormatLoader::rename_dependencies(String p_path, String p_renames){
	return (int) _wasgo_ResourceFormatLoader_wrapper_rename_dependencies(wasgo_id, ((Variant) path).get_wasgo_id(), ((Variant) renames).get_wasgo_id()));
}

ResourceFormatLoader::ResourceFormatLoader(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
ResourceFormatLoader::~ResourceFormatLoader(){
}