/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEINPUT_H
#define VISUALSHADERNODEINPUT_H

#include "stdint.h"

#include "Variant.h"
#include "VisualShaderNode.h"
class VisualShaderNodeInput : public VisualShaderNode{
public: VisualShaderNodeInput();
String get_input_name();
String get_input_real_name();
void set_input_name(String p_name);
};
#endif