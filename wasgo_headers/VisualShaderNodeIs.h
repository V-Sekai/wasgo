/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEIS_H
#define VISUALSHADERNODEIS_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeIs : public VisualShaderNode{
public:
enum Function{
FUNC_IS_INF,
FUNC_IS_NAN
};
VisualShaderNodeIs::Function get_function();
void set_function(VisualShaderNodeIs::Function p_func);

protected:
VisualShaderNodeIs(WasGoId p_wasgo_id);
public:
VisualShaderNodeIs();
~VisualShaderNodeIs();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_VisualShaderNodeIs_wrapper_get_function(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeIs_wrapper_set_function(WasGoId wasgo_id, WasGoId p_func);

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeIs_constructor();
    void _wasgo_VisualShaderNodeIs_destructor(WasGoId p_wasgo_id);
            
}
#endif