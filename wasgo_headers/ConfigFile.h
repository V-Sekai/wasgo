/* THIS FILE IS GENERATED */
#ifndef CONFIGFILE_H
#define CONFIGFILE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Reference.h"
#include "ustring.h"
#include "error_list.h"
#include "Variant.h"
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

ConfigFile(WasGoId p_wasgo_id);
~ConfigFile();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ConfigFile_wrapper_erase_section(WasGoId wasgo_id, WasGoId p_section);
void _wasgo_ConfigFile_wrapper_erase_section_key(WasGoId wasgo_id, WasGoId p_section, WasGoId p_key);
WasGoId _wasgo_ConfigFile_wrapper_get_section_keys(WasGoId wasgo_id, WasGoId p_section);
WasGoId _wasgo_ConfigFile_wrapper_get_sections(WasGoId wasgo_id);
WasGoId _wasgo_ConfigFile_wrapper_get_value(WasGoId wasgo_id, WasGoId p_section, WasGoId p_key, WasGoId p_default);
int _wasgo_ConfigFile_wrapper_has_section(WasGoId wasgo_id, WasGoId p_section);
int _wasgo_ConfigFile_wrapper_has_section_key(WasGoId wasgo_id, WasGoId p_section, WasGoId p_key);
WasGoId _wasgo_ConfigFile_wrapper_load(WasGoId wasgo_id, WasGoId p_path);
WasGoId _wasgo_ConfigFile_wrapper_load_encrypted(WasGoId wasgo_id, WasGoId p_path, WasGoId p_key);
WasGoId _wasgo_ConfigFile_wrapper_load_encrypted_pass(WasGoId wasgo_id, WasGoId p_path, WasGoId p_password);
WasGoId _wasgo_ConfigFile_wrapper_parse(WasGoId wasgo_id, WasGoId p_data);
WasGoId _wasgo_ConfigFile_wrapper_save(WasGoId wasgo_id, WasGoId p_path);
WasGoId _wasgo_ConfigFile_wrapper_save_encrypted(WasGoId wasgo_id, WasGoId p_path, WasGoId p_key);
WasGoId _wasgo_ConfigFile_wrapper_save_encrypted_pass(WasGoId wasgo_id, WasGoId p_path, WasGoId p_password);
void _wasgo_ConfigFile_wrapper_set_value(WasGoId wasgo_id, WasGoId p_section, WasGoId p_key, WasGoId p_value);
}
#endif