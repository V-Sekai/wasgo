/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESCALAROP_H
#define VISUALSHADERNODESCALAROP_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeScalarOp : public VisualShaderNode{
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
OP_ATAN2,
OP_STEP
};
VisualShaderNodeScalarOp::Operator get_operator();
void set_operator(VisualShaderNodeScalarOp::Operator p_op);

protected:
public:
explicit VisualShaderNodeScalarOp(WasGoID p_wasgo_id);
explicit VisualShaderNodeScalarOp(VisualShaderNode other);
VisualShaderNodeScalarOp();
VisualShaderNodeScalarOp new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_VisualShaderNodeScalarOp_wrapper_get_operator(WasGoID wasgo_id);
void _wasgo_VisualShaderNodeScalarOp_wrapper_set_operator(WasGoID wasgo_id, WasGoID p_op);

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeScalarOp_constructor();
            
}
#endif