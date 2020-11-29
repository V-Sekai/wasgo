/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETRANSFORMVECMULT_H
#define VISUALSHADERNODETRANSFORMVECMULT_H

#include "stdint.h"

#include "VisualShaderNode.h"
class VisualShaderNodeTransformVecMult : public VisualShaderNode{
public: VisualShaderNodeTransformVecMult();
enum Operator{
OP_AxB,
OP_BxA,
OP_3x3_AxB,
OP_3x3_BxA
};
VisualShaderNodeTransformVecMult::Operator get_operator();
void set_operator(VisualShaderNodeTransformVecMult::Operator p_op);
};
#endif