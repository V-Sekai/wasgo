/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODECUSTOM_H
#define VISUALSHADERNODECUSTOM_H

#include <stdint.h>

#include "String.h"
#include "Variant.h"
#include "VisualShaderNode.h"
class VisualShaderNodeCustom : public VisualShaderNode{
public: VisualShaderNodeCustom();
String  _get_category();
String  _get_category();
String  _get_code(Array input_vars, Array output_vars, int mode, int type);
String  _get_description();
String  _get_description();
String  _get_global_code(int mode);
int  _get_input_port_count();
int  _get_input_port_count();
String  _get_input_port_name(int port);
int  _get_input_port_type(int port);
String  _get_name();
String  _get_name();
int  _get_output_port_count();
int  _get_output_port_count();
String  _get_output_port_name(int port);
int  _get_output_port_type(int port);
int  _get_return_icon_type();
int  _get_return_icon_type();
String  _get_subcategory();
String  _get_subcategory();
};
#endif