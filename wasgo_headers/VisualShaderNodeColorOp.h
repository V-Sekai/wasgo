/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODECOLOROP_H
#define VISUALSHADERNODECOLOROP_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeColorOp : public VisualShaderNode{
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

VisualShaderNodeColorOp(WasGoId p_wasgo_id);
~VisualShaderNodeColorOp();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_VisualShaderNodeColorOp_wrapper_get_operator(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeColorOp_wrapper_set_operator(WasGoId wasgo_id, WasGo::WasGoId p_op);
}
#endif