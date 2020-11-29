/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESCALAROP_H
#define VISUALSHADERNODESCALAROP_H

#include "stdint.h"

#include "VisualShaderNode.h"
class VisualShaderNodeScalarOp : public VisualShaderNode{
public: VisualShaderNodeScalarOp();
enum Operator{
OP_ADD,
OP_SUB,
OP_MUL,
OP_DIV,
OP_MOD,
OP_POW,
OP_MAX,
OP_MIN,
OP_ATAN2,
OP_STEP
};
VisualShaderNodeScalarOp::Operator get_operator();
void set_operator(VisualShaderNodeScalarOp::Operator p_op);
};
#endif