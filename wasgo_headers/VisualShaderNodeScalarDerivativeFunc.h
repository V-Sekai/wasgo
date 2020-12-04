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
public:
explicit VisualShaderNodeScalarDerivativeFunc(WasGoID p_wasgo_id);
explicit VisualShaderNodeScalarDerivativeFunc(VisualShaderNode other);
VisualShaderNodeScalarDerivativeFunc new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_VisualShaderNodeScalarDerivativeFunc_wrapper_get_function(WasGoID wasgo_id);
void _wasgo_VisualShaderNodeScalarDerivativeFunc_wrapper_set_function(WasGoID wasgo_id, WasGoID p_func);

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeScalarDerivativeFunc_constructor();
            
}
#endif