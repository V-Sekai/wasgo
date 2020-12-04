/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ConfigFile.h"
void ConfigFile::erase_section(String p_section){

    Variant wasgo_var_section = p_section;
    int wasgo_size_section = String(p_section).size();
    uint8_t wasgo_buffer_section[wasgo_size_section];
    encode_variant(wasgo_var_section, wasgo_buffer_section, wasgo_size_section);
    
	_wasgo_ConfigFile_wrapper_erase_section(wasgo_id, wasgo_buffer_section, wasgo_size_section);
}
void ConfigFile::erase_section_key(String p_section, String p_key){

    Variant wasgo_var_section = p_section;
    int wasgo_size_section = String(p_section).size();
    uint8_t wasgo_buffer_section[wasgo_size_section];
    encode_variant(wasgo_var_section, wasgo_buffer_section, wasgo_size_section);
    

    Variant wasgo_var_key = p_key;
    int wasgo_size_key = String(p_key).size();
    uint8_t wasgo_buffer_key[wasgo_size_key];
    encode_variant(wasgo_var_key, wasgo_buffer_key, wasgo_size_key);
    
	_wasgo_ConfigFile_wrapper_erase_section_key(wasgo_id, wasgo_buffer_section, wasgo_size_section, wasgo_buffer_key, wasgo_size_key);
}
PoolStringArray ConfigFile::get_section_keys(String p_section){

    Variant wasgo_var_section = p_section;
    int wasgo_size_section = String(p_section).size();
    uint8_t wasgo_buffer_section[wasgo_size_section];
    encode_variant(wasgo_var_section, wasgo_buffer_section, wasgo_size_section);
    
	return PoolStringArray(_wasgo_ConfigFile_wrapper_get_section_keys(wasgo_id, wasgo_buffer_section, wasgo_size_section));
}
PoolStringArray ConfigFile::get_sections(){
	return PoolStringArray(_wasgo_ConfigFile_wrapper_get_sections(wasgo_id));
}
Variant ConfigFile::get_value(String p_section, String p_key, Variant p_default = (Variant) ""){

    Variant wasgo_var_section = p_section;
    int wasgo_size_section = String(p_section).size();
    uint8_t wasgo_buffer_section[wasgo_size_section];
    encode_variant(wasgo_var_section, wasgo_buffer_section, wasgo_size_section);
    

    Variant wasgo_var_key = p_key;
    int wasgo_size_key = String(p_key).size();
    uint8_t wasgo_buffer_key[wasgo_size_key];
    encode_variant(wasgo_var_key, wasgo_buffer_key, wasgo_size_key);
    
	return Variant(_wasgo_ConfigFile_wrapper_get_value(wasgo_id, wasgo_buffer_section, wasgo_size_section, wasgo_buffer_key, wasgo_size_key, p_default._get_wasgo_id()));
}
bool ConfigFile::has_section(String p_section){

    Variant wasgo_var_section = p_section;
    int wasgo_size_section = String(p_section).size();
    uint8_t wasgo_buffer_section[wasgo_size_section];
    encode_variant(wasgo_var_section, wasgo_buffer_section, wasgo_size_section);
    
	return (bool) _wasgo_ConfigFile_wrapper_has_section(wasgo_id, wasgo_buffer_section, wasgo_size_section);
}
bool ConfigFile::has_section_key(String p_section, String p_key){

    Variant wasgo_var_section = p_section;
    int wasgo_size_section = String(p_section).size();
    uint8_t wasgo_buffer_section[wasgo_size_section];
    encode_variant(wasgo_var_section, wasgo_buffer_section, wasgo_size_section);
    

    Variant wasgo_var_key = p_key;
    int wasgo_size_key = String(p_key).size();
    uint8_t wasgo_buffer_key[wasgo_size_key];
    encode_variant(wasgo_var_key, wasgo_buffer_key, wasgo_size_key);
    
	return (bool) _wasgo_ConfigFile_wrapper_has_section_key(wasgo_id, wasgo_buffer_section, wasgo_size_section, wasgo_buffer_key, wasgo_size_key);
}
Error ConfigFile::load(String p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Error(_wasgo_ConfigFile_wrapper_load(wasgo_id, wasgo_buffer_path, wasgo_size_path));
}
Error ConfigFile::load_encrypted(String p_path, PoolByteArray p_key){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Error(_wasgo_ConfigFile_wrapper_load_encrypted(wasgo_id, wasgo_buffer_path, wasgo_size_path, p_key._get_wasgo_id()));
}
Error ConfigFile::load_encrypted_pass(String p_path, String p_password){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    

    Variant wasgo_var_password = p_password;
    int wasgo_size_password = String(p_password).size();
    uint8_t wasgo_buffer_password[wasgo_size_password];
    encode_variant(wasgo_var_password, wasgo_buffer_password, wasgo_size_password);
    
	return Error(_wasgo_ConfigFile_wrapper_load_encrypted_pass(wasgo_id, wasgo_buffer_path, wasgo_size_path, wasgo_buffer_password, wasgo_size_password));
}
Error ConfigFile::parse(String p_data){

    Variant wasgo_var_data = p_data;
    int wasgo_size_data = String(p_data).size();
    uint8_t wasgo_buffer_data[wasgo_size_data];
    encode_variant(wasgo_var_data, wasgo_buffer_data, wasgo_size_data);
    
	return Error(_wasgo_ConfigFile_wrapper_parse(wasgo_id, wasgo_buffer_data, wasgo_size_data));
}
Error ConfigFile::save(String p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Error(_wasgo_ConfigFile_wrapper_save(wasgo_id, wasgo_buffer_path, wasgo_size_path));
}
Error ConfigFile::save_encrypted(String p_path, PoolByteArray p_key){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Error(_wasgo_ConfigFile_wrapper_save_encrypted(wasgo_id, wasgo_buffer_path, wasgo_size_path, p_key._get_wasgo_id()));
}
Error ConfigFile::save_encrypted_pass(String p_path, String p_password){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    

    Variant wasgo_var_password = p_password;
    int wasgo_size_password = String(p_password).size();
    uint8_t wasgo_buffer_password[wasgo_size_password];
    encode_variant(wasgo_var_password, wasgo_buffer_password, wasgo_size_password);
    
	return Error(_wasgo_ConfigFile_wrapper_save_encrypted_pass(wasgo_id, wasgo_buffer_path, wasgo_size_path, wasgo_buffer_password, wasgo_size_password));
}
void ConfigFile::set_value(String p_section, String p_key, Variant p_value){

    Variant wasgo_var_section = p_section;
    int wasgo_size_section = String(p_section).size();
    uint8_t wasgo_buffer_section[wasgo_size_section];
    encode_variant(wasgo_var_section, wasgo_buffer_section, wasgo_size_section);
    

    Variant wasgo_var_key = p_key;
    int wasgo_size_key = String(p_key).size();
    uint8_t wasgo_buffer_key[wasgo_size_key];
    encode_variant(wasgo_var_key, wasgo_buffer_key, wasgo_size_key);
    
	_wasgo_ConfigFile_wrapper_set_value(wasgo_id, wasgo_buffer_section, wasgo_size_section, wasgo_buffer_key, wasgo_size_key, p_value._get_wasgo_id());
}

ConfigFile::ConfigFile(WasGoId p_wasgo_id) : Reference(p_wasgo_id){
}
ConfigFile::ConfigFile(Reference other) : Reference(other._get_wasgo_id()){
    wasgo_id = _wasgo_ConfigFile_constructor();
}
ConfigFile::new_instance(){
    return ConfigFile(_wasgo_ConfigFile_constructor());
}