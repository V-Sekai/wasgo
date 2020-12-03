/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORDERIVATIVEFUNC_H
#define VISUALSHADERNODEVECTORDERIVATIVEFUNC_H

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

protected:
VisualShaderNodeVectorDerivativeFunc(WasGoId p_wasgo_id);
public:
VisualShaderNodeVectorDerivativeFunc();
~VisualShaderNodeVectorDerivativeFunc();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_VisualShaderNodeVectorDerivativeFunc_wrapper_get_function(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeVectorDerivativeFunc_wrapper_set_function(WasGoId wasgo_id, WasGoId p_func);

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeVectorDerivativeFunc_constructor();
    void _wasgo_VisualShaderNodeVectorDerivativeFunc_destructor(WasGoId p_wasgo_id);
            
}
#endif