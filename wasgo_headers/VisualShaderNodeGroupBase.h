/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEGROUPBASE_H
#define VISUALSHADERNODEGROUPBASE_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
#include "ustring.h"
#include "Vector2.h"
class VisualShaderNodeGroupBase : public VisualShaderNode{
public:
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

protected:
VisualShaderNodeGroupBase(WasGoId p_wasgo_id);
public:
VisualShaderNodeGroupBase();
~VisualShaderNodeGroupBase();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_VisualShaderNodeGroupBase_wrapper_add_input_port(WasGoId wasgo_id, int p_id, int p_type, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_VisualShaderNodeGroupBase_wrapper_add_output_port(WasGoId wasgo_id, int p_id, int p_type, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_VisualShaderNodeGroupBase_wrapper_clear_input_ports(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeGroupBase_wrapper_clear_output_ports(WasGoId wasgo_id);
int _wasgo_VisualShaderNodeGroupBase_wrapper_get_free_input_port_id(WasGoId wasgo_id);
int _wasgo_VisualShaderNodeGroupBase_wrapper_get_free_output_port_id(WasGoId wasgo_id);
int _wasgo_VisualShaderNodeGroupBase_wrapper_get_input_port_count(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeGroupBase_wrapper_get_inputs(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_VisualShaderNodeGroupBase_wrapper_get_output_port_count(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeGroupBase_wrapper_get_outputs(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_VisualShaderNodeGroupBase_wrapper_get_size(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_VisualShaderNodeGroupBase_wrapper_has_input_port(WasGoId wasgo_id, int p_id);
int _wasgo_VisualShaderNodeGroupBase_wrapper_has_output_port(WasGoId wasgo_id, int p_id);
int _wasgo_VisualShaderNodeGroupBase_wrapper_is_valid_port_name(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_VisualShaderNodeGroupBase_wrapper_remove_input_port(WasGoId wasgo_id, int p_id);
void _wasgo_VisualShaderNodeGroupBase_wrapper_remove_output_port(WasGoId wasgo_id, int p_id);
void _wasgo_VisualShaderNodeGroupBase_wrapper_set_input_port_name(WasGoId wasgo_id, int p_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_VisualShaderNodeGroupBase_wrapper_set_input_port_type(WasGoId wasgo_id, int p_id, int p_type);
void _wasgo_VisualShaderNodeGroupBase_wrapper_set_inputs(WasGoId wasgo_id, const uint8_t * p_inputs, int p_inputs_wasgo_buffer_size);
void _wasgo_VisualShaderNodeGroupBase_wrapper_set_output_port_name(WasGoId wasgo_id, int p_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_VisualShaderNodeGroupBase_wrapper_set_output_port_type(WasGoId wasgo_id, int p_id, int p_type);
void _wasgo_VisualShaderNodeGroupBase_wrapper_set_outputs(WasGoId wasgo_id, const uint8_t * p_outputs, int p_outputs_wasgo_buffer_size);
void _wasgo_VisualShaderNodeGroupBase_wrapper_set_size(WasGoId wasgo_id, const uint8_t * p_size, int p_size_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeGroupBase_constructor();
    void _wasgo_VisualShaderNodeGroupBase_destructor(WasGoId p_wasgo_id);
            
}
#endif