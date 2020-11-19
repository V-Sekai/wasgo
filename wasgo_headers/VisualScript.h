/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Variant.h"
#include "Vector2.h"
#include "VisualScriptNode.h"
#include "Dictionary.h"
#include "Script.h"
class VisualScript : public Script{
public: VisualScript();
Dictionary  _get_data();
Dictionary  _get_data();
void  _node_ports_changed(int arg0);
void  _set_data(Dictionary data);
void  add_custom_signal(String name);
void  add_function(String name);
void  add_node(String func, int id, VisualScriptNode node, Vector2 position = (0, 0));
void  add_variable(String name, Variant default_value = null, bool export = false);
void  custom_signal_add_argument(String name, int type, String argname, int index = -1);
int  custom_signal_get_argument_count(String name);
String  custom_signal_get_argument_name(String name, int argidx);
enum.Variant::Type  custom_signal_get_argument_type(String name, int argidx);
void  custom_signal_remove_argument(String name, int argidx);
void  custom_signal_set_argument_name(String name, int argidx, String argname);
void  custom_signal_set_argument_type(String name, int argidx, int type);
void  custom_signal_swap_argument(String name, int argidx, int withidx);
void  data_connect(String func, int from_node, int from_port, int to_node, int to_port);
void  data_disconnect(String func, int from_node, int from_port, int to_node, int to_port);
int  get_function_node_id(String name);
Vector2  get_function_scroll(String name);
VisualScriptNode  get_node(String func, int id);
Vector2  get_node_position(String func, int id);
Variant  get_variable_default_value(String name);
bool  get_variable_export(String name);
Dictionary  get_variable_info(String name);
bool  has_custom_signal(String name);
bool  has_data_connection(String func, int from_node, int from_port, int to_node, int to_port);
bool  has_function(String name);
bool  has_node(String func, int id);
bool  has_sequence_connection(String func, int from_node, int from_output, int to_node);
bool  has_variable(String name);
void  remove_custom_signal(String name);
void  remove_function(String name);
void  remove_node(String func, int id);
void  remove_variable(String name);
void  rename_custom_signal(String name, String new_name);
void  rename_function(String name, String new_name);
void  rename_variable(String name, String new_name);
void  sequence_connect(String func, int from_node, int from_output, int to_node);
void  sequence_disconnect(String func, int from_node, int from_output, int to_node);
void  set_function_scroll(String name, Vector2 ofs);
void  set_instance_base_type(String type);
void  set_node_position(String func, int id, Vector2 position);
void  set_variable_default_value(String name, Variant value);
void  set_variable_export(String name, bool enable);
void  set_variable_info(String name, Dictionary value);
};