/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETRANSFORMCONSTANT_H
#define VISUALSHADERNODETRANSFORMCONSTANT_H

#include "stdint.h"

#include "Variant.h"
#include "VisualShaderNode.h"
class VisualShaderNodeTransformConstant : public VisualShaderNode{
public: VisualShaderNodeTransformConstant();
Transform get_constant();
void set_constant(Transform p_value);
};
#endif