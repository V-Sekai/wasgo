/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODE_H
#define VISUALSHADERNODE_H

#include <stdint.h>

#include "Resource.h"
#include "Variant.h"
class VisualShaderNode : public Resource{
public: VisualShaderNode();
enum PortType{
PORT_TYPE_SCALAR: 0,
PORT_TYPE_VECTOR: 1,
PORT_TYPE_BOOLEAN: 2,
PORT_TYPE_TRANSFORM: 3,
PORT_TYPE_SAMPLER: 4,
};
Array  get_default_input_values();
Array  get_default_input_values();
Variant  get_input_port_default_value(int port);
int  get_output_port_for_preview();
int  get_output_port_for_preview();
void  set_default_input_values(Array values);
void  set_input_port_default_value(int port, Variant value);
void  set_output_port_for_preview(int port);
};
#endif