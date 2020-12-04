/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETRANSFORMVECMULT_H
#define VISUALSHADERNODETRANSFORMVECMULT_H

#include "wasgo\wasgo.h"

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
explicit VisualShaderNodeTransformVecMult(WasGoId p_wasgo_id);
explicit VisualShaderNodeTransformVecMult(VisualShaderNode other);
VisualShaderNodeTransformVecMult new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_VisualShaderNodeTransformVecMult_wrapper_get_operator(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeTransformVecMult_wrapper_set_operator(WasGoId wasgo_id, WasGoId p_op);

    //constructor wrappers
    WasGoId _wasgo_VisualShaderNodeTransformVecMult_constructor();
            
}
#endif