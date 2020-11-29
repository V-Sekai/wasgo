/* THIS FILE IS GENERATED */
#ifndef SCRIPT_H
#define SCRIPT_H

#include "stdint.h"

#include "Error.h"
#include "Variant.h"
#include "Resource.h"
#include "Object.h"
class Script : public Resource{
public: Script();
bool can_instance();
Script get_base_script();
String get_instance_base_type();
Variant get_property_default_value(String p_property);
Dictionary get_script_constant_map();
Array get_script_method_list();
Array get_script_property_list();
Array get_script_signal_list();
String get_source_code();
bool has_script_signal(String p_signal_name);
bool has_source_code();
bool instance_has(Object p_base_object);
bool is_tool();
Error reload(bool p_keep_state = (bool) False);
void set_source_code(String p_source);
};
#endif