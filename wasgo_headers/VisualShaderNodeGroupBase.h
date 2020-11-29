/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEGROUPBASE_H
#define VISUALSHADERNODEGROUPBASE_H

#include "stdint.h"

#include "Variant.h"
#include "VisualShaderNode.h"
class VisualShaderNodeGroupBase : public VisualShaderNode{
public: VisualShaderNodeGroupBase();
void add_input_port(int p_id, int p_type, String p_name);
void add_output_port(int p_id, int p_type, String p_name);
void clear_input_ports();
void clear_output_ports();
int get_free_input_port_id();
int get_free_output_port_id();
int get_input_port_count();
String get_inputs();
int get_output_port_count();
String get_outputs();
Vector2 get_size();
bool has_input_port(int p_id);
bool has_output_port(int p_id);
bool is_valid_port_name(String p_name);
void remove_input_port(int p_id);
void remove_output_port(int p_id);
void set_input_port_name(int p_id, String p_name);
void set_input_port_type(int p_id, int p_type);
void set_inputs(String p_inputs);
void set_output_port_name(int p_id, String p_name);
void set_output_port_type(int p_id, int p_type);
void set_outputs(String p_outputs);
void set_size(Vector2 p_size);
};
#endif