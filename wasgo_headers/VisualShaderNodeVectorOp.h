/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTOROP_H
#define VISUALSHADERNODEVECTOROP_H

#include "wasgo\wasgoid.h"

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
public:
explicit VisualShaderNodeVectorOp(WasGoID p_wasgo_id);
explicit VisualShaderNodeVectorOp(VisualShaderNode other);
VisualShaderNodeVectorOp();
VisualShaderNodeVectorOp new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_VisualShaderNodeVectorOp_wrapper_get_operator(WasGoID wasgo_id);
void _wasgo_VisualShaderNodeVectorOp_wrapper_set_operator(WasGoID wasgo_id, WasGoID p_op);

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeVectorOp_constructor();
            
}
#endif