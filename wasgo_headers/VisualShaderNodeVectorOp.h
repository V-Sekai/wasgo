/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTOROP_H
#define VISUALSHADERNODEVECTOROP_H

#include "stdint.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorOp : public VisualShaderNode{
public: VisualShaderNodeVectorOp();
enum Operator{
OP_ADD,
OP_SUB,
OP_MUL,
OP_DIV,
OP_MOD,
OP_POW,
OP_MAX,
OP_MIN,
OP_CROSS,
OP_ATAN2,
OP_REFLECT,
OP_STEP
};
VisualShaderNodeVectorOp::Operator get_operator();
void set_operator(VisualShaderNodeVectorOp::Operator p_op);
};
#endif