/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESCALARDERIVATIVEFUNC_H
#define VISUALSHADERNODESCALARDERIVATIVEFUNC_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeScalarDerivativeFunc : public VisualShaderNode{
public:
enum Function{
FUNC_SUM,
FUNC_X,
FUNC_Y
};
VisualShaderNodeScalarDerivativeFunc::Function get_function();
void set_function(VisualShaderNodeScalarDerivativeFunc::Function p_func);

protected:
VisualShaderNodeScalarDerivativeFunc(WasGoId p_wasgo_id);
public:
VisualShaderNodeScalarDerivativeFunc();
~VisualShaderNodeScalarDerivativeFunc();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_VisualShaderNodeScalarDerivativeFunc_wrapper_get_function(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeScalarDerivativeFunc_wrapper_set_function(WasGoId wasgo_id, WasGoId p_func);

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeScalarDerivativeFunc_constructor();
    void _wasgo_VisualShaderNodeScalarDerivativeFunc_destructor(WasGoId p_wasgo_id);
            
}
#endif