/* THIS FILE IS GENERATED */
#ifndef VISUALSCRIPTCUSTOMNODE_H
#define VISUALSCRIPTCUSTOMNODE_H

#include <stdint.h>

#include "String.h"
#include "VisualScriptNode.h"
#include "Variant.h"
class VisualScriptCustomNode : public VisualScriptNode{
public: VisualScriptCustomNode();
enum StartMode{
START_MODE_BEGIN_SEQUENCE: 0,
START_MODE_CONTINUE_SEQUENCE: 1,
};
String  _get_caption();
String  _get_caption();
String  _get_category();
String  _get_category();
int  _get_input_value_port_count();
int  _get_input_value_port_count();
String  _get_input_value_port_name(int idx);
int  _get_input_value_port_type(int idx);
int  _get_output_sequence_port_count();
int  _get_output_sequence_port_count();
String  _get_output_sequence_port_text(int idx);
int  _get_output_value_port_count();
int  _get_output_value_port_count();
String  _get_output_value_port_name(int idx);
int  _get_output_value_port_type(int idx);
String  _get_text();
String  _get_text();
int  _get_working_memory_size();
int  _get_working_memory_size();
bool  _has_input_sequence_port();
bool  _has_input_sequence_port();
void  _script_changed();
void  _script_changed();
Variant  _step(Array inputs, Array outputs, int start_mode, Array working_mem);
};
#endif