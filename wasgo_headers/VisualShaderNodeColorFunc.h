/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODECOLORFUNC_H
#define VISUALSHADERNODECOLORFUNC_H

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

protected:
VisualShaderNodeColorFunc(WasGoId p_wasgo_id);
public:
VisualShaderNodeColorFunc();
~VisualShaderNodeColorFunc();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_VisualShaderNodeColorFunc_wrapper_get_function(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeColorFunc_wrapper_set_function(WasGoId wasgo_id, WasGoId p_func);

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeColorFunc_constructor();
    void _wasgo_VisualShaderNodeColorFunc_destructor(WasGoId p_wasgo_id);
            
}
#endif