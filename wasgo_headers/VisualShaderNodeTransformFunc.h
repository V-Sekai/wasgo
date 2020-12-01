/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETRANSFORMFUNC_H
#define VISUALSHADERNODETRANSFORMFUNC_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeTransformFunc : public VisualShaderNode{
public:
enum Function{
FUNC_INVERSE,
FUNC_TRANSPOSE
};
VisualShaderNodeTransformFunc::Function get_function();
void set_function(VisualShaderNodeTransformFunc::Function p_func);

VisualShaderNodeTransformFunc(WasGoId p_wasgo_id);
~VisualShaderNodeTransformFunc();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_VisualShaderNodeTransformFunc_wrapper_get_function(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeTransformFunc_wrapper_set_function(WasGoId wasgo_id, WasGoId p_func);
}
#endif