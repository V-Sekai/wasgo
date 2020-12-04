/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVEC3CONSTANT_H
#define VISUALSHADERNODEVEC3CONSTANT_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
#include "Vector3.h"
class VisualShaderNodeVec3Constant : public VisualShaderNode{
public:
Vector3 get_constant();
void set_constant(Vector3 p_value);

protected:
VisualShaderNodeVec3Constant(WasGoId p_wasgo_id);
public:
VisualShaderNodeVec3Constant();
~VisualShaderNodeVec3Constant();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_VisualShaderNodeVec3Constant_wrapper_get_constant(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_VisualShaderNodeVec3Constant_wrapper_set_constant(WasGoId wasgo_id, const uint8_t * p_value, int p_value_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeVec3Constant_constructor();
    void _wasgo_VisualShaderNodeVec3Constant_destructor(WasGoId p_wasgo_id);
            
}
#endif