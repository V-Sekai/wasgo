/* THIS FILE IS GENERATED */
#ifndef CONFIGFILE_H
#define CONFIGFILE_H

#include "stdint.h"

#include "Reference.h"
#include "Variant.h"
#include "Error.h"
class ConfigFile : public Reference{
public: ConfigFile();
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
};
#endif