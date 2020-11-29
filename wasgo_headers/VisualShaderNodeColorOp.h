/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODECOLOROP_H
#define VISUALSHADERNODECOLOROP_H

#include "stdint.h"

#include "VisualShaderNode.h"
class VisualShaderNodeColorOp : public VisualShaderNode{
public: VisualShaderNodeColorOp();
enum Operator{
OP_SCREEN,
OP_DIFFERENCE,
OP_DARKEN,
OP_LIGHTEN,
OP_OVERLAY,
OP_DODGE,
OP_BURN,
OP_SOFT_LIGHT,
OP_HARD_LIGHT
};
VisualShaderNodeColorOp::Operator get_operator();
void set_operator(VisualShaderNodeColorOp::Operator p_op);
};
#endif