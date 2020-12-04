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
public:
explicit VisualShaderNodeVectorDerivativeFunc(WasGoID p_wasgo_id);
explicit VisualShaderNodeVectorDerivativeFunc(VisualShaderNode other);
VisualShaderNodeVectorDerivativeFunc new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_VisualShaderNodeVectorDerivativeFunc_wrapper_get_function(WasGoID wasgo_id);
void _wasgo_VisualShaderNodeVectorDerivativeFunc_wrapper_set_function(WasGoID wasgo_id, WasGoID p_func);

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeVectorDerivativeFunc_constructor();
            
}
#endif