/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORDERIVATIVEFUNC_H
#define VISUALSHADERNODEVECTORDERIVATIVEFUNC_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorDerivativeFunc : public VisualShaderNode{
public:
enum Function{
FUNC_SUM,
FUNC_X,
FUNC_Y
};
VisualShaderNodeVectorDerivativeFunc::Function get_function();
void set_function(VisualShaderNodeVectorDerivativeFunc::Function p_func);

VisualShaderNodeVectorDerivativeFunc(WasGoId p_wasgo_id);
~VisualShaderNodeVectorDerivativeFunc();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_VisualShaderNodeVectorDerivativeFunc_wrapper_get_function(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeVectorDerivativeFunc_wrapper_set_function(WasGoId wasgo_id, WasGoId p_func);
}
#endif