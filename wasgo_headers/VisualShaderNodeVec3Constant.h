/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVEC3CONSTANT_H
#define VISUALSHADERNODEVEC3CONSTANT_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "VisualShaderNode.h"
class VisualShaderNodeVec3Constant : public VisualShaderNode{
Vector3 get_constant();
void set_constant(Vector3 p_value);

VisualShaderNodeVec3Constant(WasGoId p_wasgo_id);
~VisualShaderNodeVec3Constant();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_VisualShaderNodeVec3Constant_wrapper_get_constant(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeVec3Constant_wrapper_set_constant(WasGoId wasgo_id, WasGo::WasGoId p_value);
}
#endif