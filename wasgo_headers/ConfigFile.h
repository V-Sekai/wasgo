/* THIS FILE IS GENERATED */
#ifndef CONFIGFILE_H
#define CONFIGFILE_H

#include "wasgo\wasgoid.h"

#include "Variant.h"
#include "Reference.h"
#include "Ustring.h"
#include "error_list.h"
class ConfigFile : public Reference{
public:
void erase_section(String p_section);
void erase_section_key(String p_section, String p_key);
PoolStringArray get_section_keys(String p_section);
PoolStringArray get_sections();
Variant get_value(String p_section, String p_key, Variant p_default = Variant());
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
public:
explicit ConfigFile(WasGoID p_wasgo_id);
explicit ConfigFile(Reference other);
ConfigFile();
ConfigFile new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ConfigFile_wrapper_erase_section(WasGoID wasgo_id, const uint8_t * p_section, int p_section_wasgo_buffer_size);
void _wasgo_ConfigFile_wrapper_erase_section_key(WasGoID wasgo_id, const uint8_t * p_section, int p_section_wasgo_buffer_size, const uint8_t * p_key, int p_key_wasgo_buffer_size);
WasGoID _wasgo_ConfigFile_wrapper_get_section_keys(WasGoID wasgo_id, const uint8_t * p_section, int p_section_wasgo_buffer_size);
WasGoID _wasgo_ConfigFile_wrapper_get_sections(WasGoID wasgo_id);
WasGoID _wasgo_ConfigFile_wrapper_get_value(WasGoID wasgo_id, const uint8_t * p_section, int p_section_wasgo_buffer_size, const uint8_t * p_key, int p_key_wasgo_buffer_size, WasGoID p_default);
int _wasgo_ConfigFile_wrapper_has_section(WasGoID wasgo_id, const uint8_t * p_section, int p_section_wasgo_buffer_size);
int _wasgo_ConfigFile_wrapper_has_section_key(WasGoID wasgo_id, const uint8_t * p_section, int p_section_wasgo_buffer_size, const uint8_t * p_key, int p_key_wasgo_buffer_size);
WasGoID _wasgo_ConfigFile_wrapper_load(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
WasGoID _wasgo_ConfigFile_wrapper_load_encrypted(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size, WasGoID p_key);
WasGoID _wasgo_ConfigFile_wrapper_load_encrypted_pass(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size, const uint8_t * p_password, int p_password_wasgo_buffer_size);
WasGoID _wasgo_ConfigFile_wrapper_parse(WasGoID wasgo_id, const uint8_t * p_data, int p_data_wasgo_buffer_size);
WasGoID _wasgo_ConfigFile_wrapper_save(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
WasGoID _wasgo_ConfigFile_wrapper_save_encrypted(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size, WasGoID p_key);
WasGoID _wasgo_ConfigFile_wrapper_save_encrypted_pass(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size, const uint8_t * p_password, int p_password_wasgo_buffer_size);
void _wasgo_ConfigFile_wrapper_set_value(WasGoID wasgo_id, const uint8_t * p_section, int p_section_wasgo_buffer_size, const uint8_t * p_key, int p_key_wasgo_buffer_size, WasGoID p_value);

    //constructor wrappers
    WasGoID _wasgo_ConfigFile_constructor();
            
}
#endif