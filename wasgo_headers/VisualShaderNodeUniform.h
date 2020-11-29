/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEUNIFORM_H
#define VISUALSHADERNODEUNIFORM_H

#include "stdint.h"

#include "Variant.h"
#include "VisualShaderNode.h"
class VisualShaderNodeUniform : public VisualShaderNode{
public: VisualShaderNodeUniform();
String get_uniform_name();
void set_uniform_name(String p_name);
};
#endif