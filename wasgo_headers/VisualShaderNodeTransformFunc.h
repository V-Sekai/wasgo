/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETRANSFORMFUNC_H
#define VISUALSHADERNODETRANSFORMFUNC_H

#include "stdint.h"

#include "VisualShaderNode.h"
class VisualShaderNodeTransformFunc : public VisualShaderNode{
public: VisualShaderNodeTransformFunc();
enum Function{
FUNC_INVERSE,
FUNC_TRANSPOSE
};
VisualShaderNodeTransformFunc::Function get_function();
void set_function(VisualShaderNodeTransformFunc::Function p_func);
};
#endif