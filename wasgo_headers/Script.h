/* THIS FILE IS GENERATED */
#ifndef SCRIPT_H
#define SCRIPT_H

#include "wasgo\wasgo.h"

#include "error_list.h"
#include "Variant.h"
#include "ustring.h"
#include "Object.h"
#include "Resource.h"
class Script : public Resource{
public:
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
Error reload(bool p_keep_state = (bool) false);
void set_source_code(String p_source);
};


//Wrapper Functions
extern "C"{
int _wasgo_Script_wrapper_can_instance(WasGoId wasgo_id);
WasGoId _wasgo_Script_wrapper_get_base_script(WasGoId wasgo_id);
void _wasgo_Script_wrapper_get_instance_base_type(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_Script_wrapper_get_property_default_value(WasGoId wasgo_id, const uint8_t * p_property, int p_property_wasgo_buffer_size);
WasGoId _wasgo_Script_wrapper_get_script_constant_map(WasGoId wasgo_id);
WasGoId _wasgo_Script_wrapper_get_script_method_list(WasGoId wasgo_id);
WasGoId _wasgo_Script_wrapper_get_script_property_list(WasGoId wasgo_id);
WasGoId _wasgo_Script_wrapper_get_script_signal_list(WasGoId wasgo_id);
void _wasgo_Script_wrapper_get_source_code(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Script_wrapper_has_script_signal(WasGoId wasgo_id, const uint8_t * p_signal_name, int p_signal_name_wasgo_buffer_size);
int _wasgo_Script_wrapper_has_source_code(WasGoId wasgo_id);
int _wasgo_Script_wrapper_instance_has(WasGoId wasgo_id, WasGoId p_base_object);
int _wasgo_Script_wrapper_is_tool(WasGoId wasgo_id);
WasGoId _wasgo_Script_wrapper_reload(WasGoId wasgo_id, bool p_keep_state);
void _wasgo_Script_wrapper_set_source_code(WasGoId wasgo_id, const uint8_t * p_source, int p_source_wasgo_buffer_size);

    //constructor wrappers
    WasGoId _wasgo_Script_constructor();
            
}
#endif