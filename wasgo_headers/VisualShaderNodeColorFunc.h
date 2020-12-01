/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODECOLORFUNC_H
#define VISUALSHADERNODECOLORFUNC_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeColorFunc : public VisualShaderNode{
public:
enum Function{
FUNC_GRAYSCALE,
FUNC_SEPIA
};
VisualShaderNodeColorFunc::Function get_function();
void set_function(VisualShaderNodeColorFunc::Function p_func);

VisualShaderNodeColorFunc(WasGoId p_wasgo_id);
~VisualShaderNodeColorFunc();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_VisualShaderNodeColorFunc_wrapper_get_function(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeColorFunc_wrapper_set_function(WasGoId wasgo_id, WasGoId p_func);
}
#endif