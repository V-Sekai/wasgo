/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODECOLOROP_H
#define VISUALSHADERNODECOLOROP_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeColorOp : public VisualShaderNode{
public:
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

protected:
public:
explicit VisualShaderNodeColorOp(WasGoID p_wasgo_id);
explicit VisualShaderNodeColorOp(VisualShaderNode other);
VisualShaderNodeColorOp new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_VisualShaderNodeColorOp_wrapper_get_operator(WasGoID wasgo_id);
void _wasgo_VisualShaderNodeColorOp_wrapper_set_operator(WasGoID wasgo_id, WasGoID p_op);

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeColorOp_constructor();
            
}
#endif