/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETRANSFORMMULT_H
#define VISUALSHADERNODETRANSFORMMULT_H

#include "wasgo\wasgo.h"

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
VisualShaderNodeTransformMult(WasGoId p_wasgo_id);
public:
VisualShaderNodeTransformMult();
~VisualShaderNodeTransformMult();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_VisualShaderNodeTransformMult_wrapper_get_operator(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeTransformMult_wrapper_set_operator(WasGoId wasgo_id, WasGoId p_op);

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeTransformMult_constructor();
    void _wasgo_VisualShaderNodeTransformMult_destructor(WasGoId p_wasgo_id);
            
}
#endif