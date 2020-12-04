/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESCALAROP_H
#define VISUALSHADERNODESCALAROP_H

#include "wasgo\wasgo.h"

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
explicit VisualShaderNodeScalarOp(WasGoId p_wasgo_id);
explicit VisualShaderNodeScalarOp(VisualShaderNode other);
VisualShaderNodeScalarOp new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_VisualShaderNodeScalarOp_wrapper_get_operator(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeScalarOp_wrapper_set_operator(WasGoId wasgo_id, WasGoId p_op);

    //constructor wrappers
    WasGoId _wasgo_VisualShaderNodeScalarOp_constructor();
            
}
#endif