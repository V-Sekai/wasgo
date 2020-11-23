/* THIS FILE IS GENERATED */
#ifndef SCRIPT_H
#define SCRIPT_H

#include <stdint.h>

#include "Resource.h"
#include "String.h"
#include "Erro.h"
#include "Dictionary.h"
#include "Variant.h"
#include "Object.h"
class Script : public Resource{
public: Script();
bool  can_instance();
bool  can_instance();
Script  get_base_script();
Script  get_base_script();
String  get_instance_base_type();
String  get_instance_base_type();
Variant  get_property_default_value(String property);
Dictionary  get_script_constant_map();
Dictionary  get_script_constant_map();
Array  get_script_method_list();
Array  get_script_method_list();
Array  get_script_property_list();
Array  get_script_property_list();
Array  get_script_signal_list();
Array  get_script_signal_list();
String  get_source_code();
String  get_source_code();
bool  has_script_signal(String signal_name);
bool  has_source_code();
bool  has_source_code();
bool  instance_has(Object base_object);
bool  is_tool();
bool  is_tool();
enum.Error  reload(bool keep_state = false);
void  set_source_code(String source);
};
#endif