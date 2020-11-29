/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEIS_H
#define VISUALSHADERNODEIS_H

#include "stdint.h"

#include "VisualShaderNode.h"
class VisualShaderNodeIs : public VisualShaderNode{
public: VisualShaderNodeIs();
enum Function{
FUNC_IS_INF,
FUNC_IS_NAN
};
VisualShaderNodeIs::Function get_function();
void set_function(VisualShaderNodeIs::Function p_func);
};
#endif