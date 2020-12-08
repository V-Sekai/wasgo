/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODECOLORFUNC_H
#define VISUALSHADERNODECOLORFUNC_H

#include "wasgo\wasgoid.h"

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
public:
explicit VisualShaderNodeColorFunc(WasGoID p_wasgo_id);
explicit VisualShaderNodeColorFunc(VisualShaderNode other);
VisualShaderNodeColorFunc();
VisualShaderNodeColorFunc new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_VisualShaderNodeColorFunc_wrapper_get_function(WasGoID wasgo_id);
void _wasgo_VisualShaderNodeColorFunc_wrapper_set_function(WasGoID wasgo_id, WasGoID p_func);

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeColorFunc_constructor();
            
}
#endif