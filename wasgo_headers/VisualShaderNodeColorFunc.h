/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODECOLORFUNC_H
#define VISUALSHADERNODECOLORFUNC_H

#include "stdint.h"

#include "VisualShaderNode.h"
class VisualShaderNodeColorFunc : public VisualShaderNode{
public: VisualShaderNodeColorFunc();
enum Function{
FUNC_GRAYSCALE,
FUNC_SEPIA
};
VisualShaderNodeColorFunc::Function get_function();
void set_function(VisualShaderNodeColorFunc::Function p_func);
};
#endif