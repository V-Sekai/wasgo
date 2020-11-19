/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETRANSFORMMULT_H
#define VISUALSHADERNODETRANSFORMMULT_H

#include <stdint.h>

#include "VisualShaderNode.h"
class VisualShaderNodeTransformMult : public VisualShaderNode{
public: VisualShaderNodeTransformMult();
enum Operator{
OP_AxB: 0,
OP_BxA: 1,
OP_AxB_COMP: 2,
};
enum.VisualShaderNodeTransformMult::Operator  get_operator();
enum.VisualShaderNodeTransformMult::Operator  get_operator();
void  set_operator(int op);
};
#endif