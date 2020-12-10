/* THIS FILE IS GENERATED */
#ifndef SCRIPT_H
#define SCRIPT_H

#include "wasgo\wasgoid.h"

#include "error_list.h"
#include "Resource.h"
#include "Object.h"
#include "Variant.h"
#include "Ustring.h"
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

protected:
public:
explicit Script(WasGoID p_wasgo_id);
explicit Script(Resource other);
Script();
Script new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_Script_wrapper_can_instance(WasGoID wasgo_id);
WasGoID _wasgo_Script_wrapper_get_base_script(WasGoID wasgo_id);
void _wasgo_Script_wrapper_get_instance_base_type(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Script_wrapper_get_property_default_value(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, const uint8_t * p_property, int p_property_wasgo_buffer_size);
WasGoID _wasgo_Script_wrapper_get_script_constant_map(WasGoID wasgo_id);
WasGoID _wasgo_Script_wrapper_get_script_method_list(WasGoID wasgo_id);
WasGoID _wasgo_Script_wrapper_get_script_property_list(WasGoID wasgo_id);
WasGoID _wasgo_Script_wrapper_get_script_signal_list(WasGoID wasgo_id);
void _wasgo_Script_wrapper_get_source_code(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Script_wrapper_has_script_signal(WasGoID wasgo_id, const uint8_t * p_signal_name, int p_signal_name_wasgo_buffer_size);
int _wasgo_Script_wrapper_has_source_code(WasGoID wasgo_id);
int _wasgo_Script_wrapper_instance_has(WasGoID wasgo_id, WasGoID p_base_object);
int _wasgo_Script_wrapper_is_tool(WasGoID wasgo_id);
WasGoID _wasgo_Script_wrapper_reload(WasGoID wasgo_id, bool p_keep_state);
void _wasgo_Script_wrapper_set_source_code(WasGoID wasgo_id, const uint8_t * p_source, int p_source_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_Script_constructor();
            
}
#endif