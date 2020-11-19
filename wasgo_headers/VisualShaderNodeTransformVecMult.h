/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETRANSFORMVECMULT_H
#define VISUALSHADERNODETRANSFORMVECMULT_H

#include <stdint.h>

#include "VisualShaderNode.h"
class VisualShaderNodeTransformVecMult : public VisualShaderNode{
public: VisualShaderNodeTransformVecMult();
enum Operator{
OP_AxB: 0,
OP_BxA: 1,
OP_3x3_AxB: 2,
};
enum.VisualShaderNodeTransformVecMult::Operator  get_operator();
enum.VisualShaderNodeTransformVecMult::Operator  get_operator();
void  set_operator(int op);
};
#endif