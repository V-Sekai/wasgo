/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETRANSFORMMULT_H
#define VISUALSHADERNODETRANSFORMMULT_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeTransformMult : public VisualShaderNode{
public:
enum Operator{
OP_AxB,
OP_BxA,
OP_AxB_COMP,
OP_BxA_COMP
};
VisualShaderNodeTransformMult::Operator get_operator();
void set_operator(VisualShaderNodeTransformMult::Operator p_op);

protected:
public:
explicit VisualShaderNodeTransformMult(WasGoID p_wasgo_id);
explicit VisualShaderNodeTransformMult(VisualShaderNode other);
VisualShaderNodeTransformMult();
VisualShaderNodeTransformMult new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_VisualShaderNodeTransformMult_wrapper_get_operator(WasGoID wasgo_id);
void _wasgo_VisualShaderNodeTransformMult_wrapper_set_operator(WasGoID wasgo_id, WasGoID p_op);

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeTransformMult_constructor();
            
}
#endif