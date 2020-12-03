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
VisualShaderNodeColorOp(WasGoId p_wasgo_id);
public:
VisualShaderNodeColorOp();
~VisualShaderNodeColorOp();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_VisualShaderNodeColorOp_wrapper_get_operator(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeColorOp_wrapper_set_operator(WasGoId wasgo_id, WasGoId p_op);

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeColorOp_constructor();
    void _wasgo_VisualShaderNodeColorOp_destructor(WasGoId p_wasgo_id);
            
}
#endif