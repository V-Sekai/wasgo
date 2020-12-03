/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTOROP_H
#define VISUALSHADERNODEVECTOROP_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorOp : public VisualShaderNode{
public:
enum Operator{
OP_ADD,
OP_SUB,
OP_MUL,
OP_DIV,
OP_MOD,
OP_POW,
OP_MAX,
OP_MIN,
OP_CROSS,
OP_ATAN2,
OP_REFLECT,
OP_STEP
};
VisualShaderNodeVectorOp::Operator get_operator();
void set_operator(VisualShaderNodeVectorOp::Operator p_op);

protected:
VisualShaderNodeVectorOp(WasGoId p_wasgo_id);
public:
VisualShaderNodeVectorOp();
~VisualShaderNodeVectorOp();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_VisualShaderNodeVectorOp_wrapper_get_operator(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeVectorOp_wrapper_set_operator(WasGoId wasgo_id, WasGoId p_op);

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeVectorOp_constructor();
    void _wasgo_VisualShaderNodeVectorOp_destructor(WasGoId p_wasgo_id);
            
}
#endif