/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEIS_H
#define VISUALSHADERNODEIS_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeIs : public VisualShaderNode{
enum Function{
FUNC_IS_INF,
FUNC_IS_NAN
};
VisualShaderNodeIs::Function get_function();
void set_function(VisualShaderNodeIs::Function p_func);

VisualShaderNodeIs(WasGoId p_wasgo_id);
~VisualShaderNodeIs();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_VisualShaderNodeIs_wrapper_get_function(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeIs_wrapper_set_function(WasGoId wasgo_id, WasGo::WasGoId p_func);
}
#endif