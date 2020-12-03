/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODE_H
#define VISUALSHADERNODE_H

#include "wasgo\wasgo.h"

#include "Resource.h"
#include "Variant.h"
class VisualShaderNode : public Resource{
public:
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
WasGoId _wasgo_VisualShaderNode_wrapper_get_default_input_values(WasGoId wasgo_id);
WasGoId _wasgo_VisualShaderNode_wrapper_get_input_port_default_value(WasGoId wasgo_id, int p_port);
int _wasgo_VisualShaderNode_wrapper_get_output_port_for_preview(WasGoId wasgo_id);
void _wasgo_VisualShaderNode_wrapper_set_default_input_values(WasGoId wasgo_id, WasGoId p_values);
void _wasgo_VisualShaderNode_wrapper_set_input_port_default_value(WasGoId wasgo_id, int p_port, WasGoId p_value);
void _wasgo_VisualShaderNode_wrapper_set_output_port_for_preview(WasGoId wasgo_id, int p_port);

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNode_constructor();
    void _wasgo_VisualShaderNode_destructor(WasGoId p_wasgo_id);
            
}
#endif