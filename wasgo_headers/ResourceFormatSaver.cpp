/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ResourceFormatSaver.h"
PoolStringArray ResourceFormatSaver::get_recognized_extensions(Resource p_resource){
	return PoolStringArray(_wasgo_ResourceFormatSaver_wrapper_get_recognized_extensions(wasgo_id, p_resource._get_wasgo_id()));
}
bool ResourceFormatSaver::recognize(Resource p_resource){
	return (bool) _wasgo_ResourceFormatSaver_wrapper_recognize(wasgo_id, p_resource._get_wasgo_id());
}
int ResourceFormatSaver::save(String p_path, Resource p_resource, int p_flags){

    Variant wasgo_var_path = p_path;
    uint8_t wasgo_buffer_path[256];
    int wasgo_size_path = 256;
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return (int) _wasgo_ResourceFormatSaver_wrapper_save(wasgo_id, wasgo_buffer_path, wasgo_size_path, p_resource._get_wasgo_id(), p_flags);
}

ResourceFormatSaver::ResourceFormatSaver(WasGoId p_wasgo_id) : Reference(p_wasgo_id){
}
ResourceFormatSaver::ResourceFormatSaver(){
    wasgo_id = _wasgo_ResourceFormatSaver_constructor();
}
ResourceFormatSaver::~ResourceFormatSaver(){
    _wasgo_ResourceFormatSaver_destructor(wasgo_id);
}