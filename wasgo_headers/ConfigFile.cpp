/* THIS FILE IS GENERATED */
#include "ConfigFile.h"
void ConfigFile::erase_section(String p_section){
	_wasgo_ConfigFile_wrapper_erase_section(wasgo_id, ((Variant) section).get_wasgo_id());
}
void ConfigFile::erase_section_key(String p_section, String p_key){
	_wasgo_ConfigFile_wrapper_erase_section_key(wasgo_id, ((Variant) section).get_wasgo_id(), ((Variant) key).get_wasgo_id());
}
PoolStringArray ConfigFile::get_section_keys(String p_section){
	return PoolStringArray::from_wasgo_id(_wasgo_ConfigFile_wrapper_get_section_keys(wasgo_id, ((Variant) section).get_wasgo_id()));
}
PoolStringArray ConfigFile::get_sections(){
	return PoolStringArray::from_wasgo_id(_wasgo_ConfigFile_wrapper_get_sections(wasgo_id));
}
Variant ConfigFile::get_value(String p_section, String p_key, Variant p_default = (Variant) ""){
	return Variant::from_wasgo_id(_wasgo_ConfigFile_wrapper_get_value(wasgo_id, ((Variant) section).get_wasgo_id(), ((Variant) key).get_wasgo_id(), ((Variant) default).get_wasgo_id()));
}
bool ConfigFile::has_section(String p_section){
	return (bool) _wasgo_ConfigFile_wrapper_has_section(wasgo_id, ((Variant) section).get_wasgo_id()));
}
bool ConfigFile::has_section_key(String p_section, String p_key){
	return (bool) _wasgo_ConfigFile_wrapper_has_section_key(wasgo_id, ((Variant) section).get_wasgo_id(), ((Variant) key).get_wasgo_id()));
}
Error ConfigFile::load(String p_path){
	return Error::from_wasgo_id(_wasgo_ConfigFile_wrapper_load(wasgo_id, ((Variant) path).get_wasgo_id()));
}
Error ConfigFile::load_encrypted(String p_path, PoolByteArray p_key){
	return Error::from_wasgo_id(_wasgo_ConfigFile_wrapper_load_encrypted(wasgo_id, ((Variant) path).get_wasgo_id(), ((Variant) key).get_wasgo_id()));
}
Error ConfigFile::load_encrypted_pass(String p_path, String p_password){
	return Error::from_wasgo_id(_wasgo_ConfigFile_wrapper_load_encrypted_pass(wasgo_id, ((Variant) path).get_wasgo_id(), ((Variant) password).get_wasgo_id()));
}
Error ConfigFile::parse(String p_data){
	return Error::from_wasgo_id(_wasgo_ConfigFile_wrapper_parse(wasgo_id, ((Variant) data).get_wasgo_id()));
}
Error ConfigFile::save(String p_path){
	return Error::from_wasgo_id(_wasgo_ConfigFile_wrapper_save(wasgo_id, ((Variant) path).get_wasgo_id()));
}
Error ConfigFile::save_encrypted(String p_path, PoolByteArray p_key){
	return Error::from_wasgo_id(_wasgo_ConfigFile_wrapper_save_encrypted(wasgo_id, ((Variant) path).get_wasgo_id(), ((Variant) key).get_wasgo_id()));
}
Error ConfigFile::save_encrypted_pass(String p_path, String p_password){
	return Error::from_wasgo_id(_wasgo_ConfigFile_wrapper_save_encrypted_pass(wasgo_id, ((Variant) path).get_wasgo_id(), ((Variant) password).get_wasgo_id()));
}
void ConfigFile::set_value(String p_section, String p_key, Variant p_value){
	_wasgo_ConfigFile_wrapper_set_value(wasgo_id, ((Variant) section).get_wasgo_id(), ((Variant) key).get_wasgo_id(), ((Variant) value).get_wasgo_id());
}

ConfigFile::ConfigFile(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
ConfigFile::~ConfigFile(){
}