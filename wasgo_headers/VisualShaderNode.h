/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODE_H
#define VISUALSHADERNODE_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
class VisualShaderNode : public Resource{
public: VisualShaderNode();
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
#endif