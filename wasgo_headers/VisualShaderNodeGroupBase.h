/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEGROUPBASE_H
#define VISUALSHADERNODEGROUPBASE_H

#include <stdint.h>

#include "Vector2.h"
#include "VisualShaderNode.h"
#include "String.h"
class VisualShaderNodeGroupBase : public VisualShaderNode{
public: VisualShaderNodeGroupBase();
void  add_input_port(int id, int type, String name);
void  add_output_port(int id, int type, String name);
void  clear_input_ports();
void  clear_input_ports();
void  clear_output_ports();
void  clear_output_ports();
int  get_free_input_port_id();
int  get_free_input_port_id();
int  get_free_output_port_id();
int  get_free_output_port_id();
int  get_input_port_count();
int  get_input_port_count();
String  get_inputs();
String  get_inputs();
int  get_output_port_count();
int  get_output_port_count();
String  get_outputs();
String  get_outputs();
Vector2  get_size();
Vector2  get_size();
bool  has_input_port(int id);
bool  has_output_port(int id);
bool  is_valid_port_name(String name);
void  remove_input_port(int id);
void  remove_output_port(int id);
void  set_input_port_name(int id, String name);
void  set_input_port_type(int id, int type);
void  set_inputs(String inputs);
void  set_output_port_name(int id, String name);
void  set_output_port_type(int id, int type);
void  set_outputs(String outputs);
void  set_size(Vector2 size);
};
#endif