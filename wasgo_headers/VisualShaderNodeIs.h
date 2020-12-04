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
public:
explicit VisualShaderNodeIs(WasGoID p_wasgo_id);
explicit VisualShaderNodeIs(VisualShaderNode other);
VisualShaderNodeIs new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_VisualShaderNodeIs_wrapper_get_function(WasGoID wasgo_id);
void _wasgo_VisualShaderNodeIs_wrapper_set_function(WasGoID wasgo_id, WasGoID p_func);

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeIs_constructor();
            
}
#endif