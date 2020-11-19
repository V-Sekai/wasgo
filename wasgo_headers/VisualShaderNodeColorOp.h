/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODECOLOROP_H
#define VISUALSHADERNODECOLOROP_H

#include <stdint.h>

#include "VisualShaderNode.h"
class VisualShaderNodeColorOp : public VisualShaderNode{
public: VisualShaderNodeColorOp();
enum Operator{
OP_SCREEN: 0,
OP_DIFFERENCE: 1,
OP_DARKEN: 2,
OP_LIGHTEN: 3,
OP_OVERLAY: 4,
OP_DODGE: 5,
OP_BURN: 6,
OP_SOFT_LIGHT: 7,
};
enum.VisualShaderNodeColorOp::Operator  get_operator();
enum.VisualShaderNodeColorOp::Operator  get_operator();
void  set_operator(int op);
};
#endif