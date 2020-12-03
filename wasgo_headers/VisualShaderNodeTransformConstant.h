/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETRANSFORMCONSTANT_H
#define VISUALSHADERNODETRANSFORMCONSTANT_H

#include "wasgo\wasgo.h"

#include "Transform.h"
#include "VisualShaderNode.h"
class VisualShaderNodeTransformConstant : public VisualShaderNode{
public:
Transform get_constant();
void set_constant(Transform p_value);

protected:
VisualShaderNodeTransformConstant(WasGoId p_wasgo_id);
public:
VisualShaderNodeTransformConstant();
~VisualShaderNodeTransformConstant();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_VisualShaderNodeTransformConstant_wrapper_get_constant(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_VisualShaderNodeTransformConstant_wrapper_set_constant(WasGoId wasgo_id, const uint8_t * p_value, int p_value_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeTransformConstant_constructor();
    void _wasgo_VisualShaderNodeTransformConstant_destructor(WasGoId p_wasgo_id);
            
}
#endif