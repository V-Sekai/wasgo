/* THIS FILE IS GENERATED */
#ifndef CONFIGFILE_H
#define CONFIGFILE_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "error_list.h"
#include "Variant.h"
#include "Reference.h"
class ConfigFile : public Reference{
public:
void erase_section(String p_section);
void erase_section_key(String p_section, String p_key);
PoolStringArray get_section_keys(String p_section);
PoolStringArray get_sections();
Variant get_value(String p_section, String p_key, Variant p_default = (Variant) "");
bool has_section(String p_section);
bool has_section_key(String p_section, String p_key);
Error load(String p_path);
Error load_encrypted(String p_path, PoolByteArray p_key);
Error load_encrypted_pass(String p_path, String p_password);
Error parse(String p_data);
Error save(String p_path);
Error save_encrypted(String p_path, PoolByteArray p_key);
Error save_encrypted_pass(String p_path, String p_password);
void set_value(String p_section, String p_key, Variant p_value);

protected:
ConfigFile(WasGoId p_wasgo_id);
public:
ConfigFile();
~ConfigFile();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ConfigFile_wrapper_erase_section(WasGoId wasgo_id, const uint8_t * p_section, int p_section_wasgo_buffer_size);
void _wasgo_ConfigFile_wrapper_erase_section_key(WasGoId wasgo_id, const uint8_t * p_section, int p_section_wasgo_buffer_size, const uint8_t * p_key, int p_key_wasgo_buffer_size);
WasGoId _wasgo_ConfigFile_wrapper_get_section_keys(WasGoId wasgo_id, const uint8_t * p_section, int p_section_wasgo_buffer_size);
WasGoId _wasgo_ConfigFile_wrapper_get_sections(WasGoId wasgo_id);
WasGoId _wasgo_ConfigFile_wrapper_get_value(WasGoId wasgo_id, const uint8_t * p_section, int p_section_wasgo_buffer_size, const uint8_t * p_key, int p_key_wasgo_buffer_size, WasGoId p_default);
int _wasgo_ConfigFile_wrapper_has_section(WasGoId wasgo_id, const uint8_t * p_section, int p_section_wasgo_buffer_size);
int _wasgo_ConfigFile_wrapper_has_section_key(WasGoId wasgo_id, const uint8_t * p_section, int p_section_wasgo_buffer_size, const uint8_t * p_key, int p_key_wasgo_buffer_size);
WasGoId _wasgo_ConfigFile_wrapper_load(WasGoId wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
WasGoId _wasgo_ConfigFile_wrapper_load_encrypted(WasGoId wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size, WasGoId p_key);
WasGoId _wasgo_ConfigFile_wrapper_load_encrypted_pass(WasGoId wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size, const uint8_t * p_password, int p_password_wasgo_buffer_size);
WasGoId _wasgo_ConfigFile_wrapper_parse(WasGoId wasgo_id, const uint8_t * p_data, int p_data_wasgo_buffer_size);
WasGoId _wasgo_ConfigFile_wrapper_save(WasGoId wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
WasGoId _wasgo_ConfigFile_wrapper_save_encrypted(WasGoId wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size, WasGoId p_key);
WasGoId _wasgo_ConfigFile_wrapper_save_encrypted_pass(WasGoId wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size, const uint8_t * p_password, int p_password_wasgo_buffer_size);
void _wasgo_ConfigFile_wrapper_set_value(WasGoId wasgo_id, const uint8_t * p_section, int p_section_wasgo_buffer_size, const uint8_t * p_key, int p_key_wasgo_buffer_size, WasGoId p_value);

    //constructor and destructor wrappers
    WasGoId _wasgo_ConfigFile_constructor();
    void _wasgo_ConfigFile_destructor(WasGoId p_wasgo_id);
            
}
#endif