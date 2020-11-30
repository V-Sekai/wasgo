/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODE_H
#define VISUALSHADERNODE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Resource.h"
class VisualShaderNode : public Resource{
enum PortType{
PORT_TYPE_SCALAR,
PORT_TYPE_VECTOR,
PORT_TYPE_BOOLEAN,
PORT_TYPE_TRANSFORM,
PORT_TYPE_SAMPLER,
PORT_TYPE_MAX
};
Array get_default_input_values();
Variant get_input_port_default_value(int p_port);
int get_output_port_for_preview();
void set_default_input_values(Array p_values);
void set_input_port_default_value(int p_port, Variant p_value);
void set_output_port_for_preview(int p_port);
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_VisualShaderNode_wrapper_get_default_input_values(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_VisualShaderNode_wrapper_get_input_port_default_value(WasGoId wasgo_id, int p_port);
int _wasgo_VisualShaderNode_wrapper_get_output_port_for_preview(WasGoId wasgo_id);
void _wasgo_VisualShaderNode_wrapper_set_default_input_values(WasGoId wasgo_id, WasGo::WasGoId p_values);
void _wasgo_VisualShaderNode_wrapper_set_input_port_default_value(WasGoId wasgo_id, int p_port, WasGo::WasGoId p_value);
void _wasgo_VisualShaderNode_wrapper_set_output_port_for_preview(WasGoId wasgo_id, int p_port);
}
#endif