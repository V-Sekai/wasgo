/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "VisualShaderNode.h"
class VisualShaderNodeScalarOp : public VisualShaderNode{
public: VisualShaderNodeScalarOp();
enum Operator{
OP_ADD: 0,
OP_SUB: 1,
OP_MUL: 2,
OP_DIV: 3,
OP_MOD: 4,
OP_POW: 5,
OP_MAX: 6,
OP_MIN: 7,
OP_ATAN2: 8,
};
enum.VisualShaderNodeScalarOp::Operator  get_operator();
enum.VisualShaderNodeScalarOp::Operator  get_operator();
void  set_operator(int op);
};