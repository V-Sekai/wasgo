/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEUNIFORMREF_H
#define VISUALSHADERNODEUNIFORMREF_H

#include "stdint.h"

#include "Variant.h"
#include "VisualShaderNode.h"
class VisualShaderNodeUniformRef : public VisualShaderNode{
public: VisualShaderNodeUniformRef();
String get_uniform_name();
void set_uniform_name(String p_name);
};
#endif