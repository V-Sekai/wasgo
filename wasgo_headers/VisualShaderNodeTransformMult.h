/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETRANSFORMMULT_H
#define VISUALSHADERNODETRANSFORMMULT_H

#include "stdint.h"

#include "VisualShaderNode.h"
class VisualShaderNodeTransformMult : public VisualShaderNode{
public: VisualShaderNodeTransformMult();
enum Operator{
OP_AxB,
OP_BxA,
OP_AxB_COMP,
OP_BxA_COMP
};
VisualShaderNodeTransformMult::Operator get_operator();
void set_operator(VisualShaderNodeTransformMult::Operator p_op);
};
#endif