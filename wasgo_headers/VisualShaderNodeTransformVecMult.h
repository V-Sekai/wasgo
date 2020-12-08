/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETRANSFORMVECMULT_H
#define VISUALSHADERNODETRANSFORMVECMULT_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeTransformVecMult : public VisualShaderNode{
public:
enum Operator{
OP_AxB,
OP_BxA,
OP_3x3_AxB,
OP_3x3_BxA
};
VisualShaderNodeTransformVecMult::Operator get_operator();
void set_operator(VisualShaderNodeTransformVecMult::Operator p_op);

protected:
public:
explicit VisualShaderNodeTransformVecMult(WasGoID p_wasgo_id);
explicit VisualShaderNodeTransformVecMult(VisualShaderNode other);
VisualShaderNodeTransformVecMult();
VisualShaderNodeTransformVecMult new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_VisualShaderNodeTransformVecMult_wrapper_get_operator(WasGoID wasgo_id);
void _wasgo_VisualShaderNodeTransformVecMult_wrapper_set_operator(WasGoID wasgo_id, WasGoID p_op);

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeTransformVecMult_constructor();
            
}
#endif