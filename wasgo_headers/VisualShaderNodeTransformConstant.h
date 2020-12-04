/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETRANSFORMCONSTANT_H
#define VISUALSHADERNODETRANSFORMCONSTANT_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
#include "Transform.h"
class VisualShaderNodeTransformConstant : public VisualShaderNode{
public:
Transform get_constant();
void set_constant(Transform p_value);

protected:
public:
explicit VisualShaderNodeTransformConstant(WasGoID p_wasgo_id);
explicit VisualShaderNodeTransformConstant(VisualShaderNode other);
VisualShaderNodeTransformConstant new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_VisualShaderNodeTransformConstant_wrapper_get_constant(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_VisualShaderNodeTransformConstant_wrapper_set_constant(WasGoID wasgo_id, const uint8_t * p_value, int p_value_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeTransformConstant_constructor();
            
}
#endif