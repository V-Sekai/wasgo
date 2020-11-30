/* THIS FILE IS GENERATED */
#include "ResourceFormatSaver.h"
PoolStringArray ResourceFormatSaver::get_recognized_extensions(Resource p_resource){
	return PoolStringArray::from_wasgo_id(_wasgo_ResourceFormatSaver_wrapper_get_recognized_extensions(wasgo_id, ((Variant) resource).get_wasgo_id()));
}
bool ResourceFormatSaver::recognize(Resource p_resource){
	return (bool) _wasgo_ResourceFormatSaver_wrapper_recognize(wasgo_id, ((Variant) resource).get_wasgo_id()));
}
int ResourceFormatSaver::save(String p_path, Resource p_resource, int p_flags){
	return (int) _wasgo_ResourceFormatSaver_wrapper_save(wasgo_id, ((Variant) path).get_wasgo_id(), ((Variant) resource).get_wasgo_id(), flags));
}

ResourceFormatSaver::ResourceFormatSaver(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
ResourceFormatSaver::~ResourceFormatSaver(){
}