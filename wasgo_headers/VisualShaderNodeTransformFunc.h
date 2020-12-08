/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETRANSFORMFUNC_H
#define VISUALSHADERNODETRANSFORMFUNC_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeTransformFunc : public VisualShaderNode{
public:
enum Function{
FUNC_INVERSE,
FUNC_TRANSPOSE
};
VisualShaderNodeTransformFunc::Function get_function();
void set_function(VisualShaderNodeTransformFunc::Function p_func);

protected:
public:
explicit VisualShaderNodeTransformFunc(WasGoID p_wasgo_id);
explicit VisualShaderNodeTransformFunc(VisualShaderNode other);
VisualShaderNodeTransformFunc();
VisualShaderNodeTransformFunc new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_VisualShaderNodeTransformFunc_wrapper_get_function(WasGoID wasgo_id);
void _wasgo_VisualShaderNodeTransformFunc_wrapper_set_function(WasGoID wasgo_id, WasGoID p_func);

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeTransformFunc_constructor();
            
}
#endif