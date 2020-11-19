/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "VisualShaderNode.h"
class VisualShaderNodeVectorOp : public VisualShaderNode{
public: VisualShaderNodeVectorOp();
enum Operator{
OP_ADD: 0,
OP_SUB: 1,
OP_MUL: 2,
OP_DIV: 3,
OP_MOD: 4,
OP_POW: 5,
OP_MAX: 6,
OP_MIN: 7,
OP_CROSS: 8,
OP_ATAN2: 9,
OP_REFLECT: 10,
};
enum.VisualShaderNodeVectorOp::Operator  get_operator();
enum.VisualShaderNodeVectorOp::Operator  get_operator();
void  set_operator(int op);
};