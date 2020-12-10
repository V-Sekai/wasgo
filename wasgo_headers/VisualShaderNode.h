/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODE_H
#define VISUALSHADERNODE_H

#include "wasgo\wasgoid.h"

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

protected:
public:
explicit VisualShaderNode(WasGoID p_wasgo_id);
explicit VisualShaderNode(Resource other);
VisualShaderNode();
VisualShaderNode new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_VisualShaderNode_wrapper_get_default_input_values(WasGoID wasgo_id);
void _wasgo_VisualShaderNode_wrapper_get_input_port_default_value(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_port);
int _wasgo_VisualShaderNode_wrapper_get_output_port_for_preview(WasGoID wasgo_id);
void _wasgo_VisualShaderNode_wrapper_set_default_input_values(WasGoID wasgo_id, WasGoID p_values);
void _wasgo_VisualShaderNode_wrapper_set_input_port_default_value(WasGoID wasgo_id, int p_port, const uint8_t * p_value, int wasgo_throwaway, int p_value_wasgo_buffer_size);
void _wasgo_VisualShaderNode_wrapper_set_output_port_for_preview(WasGoID wasgo_id, int p_port);

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNode_constructor();
            
}
#endif