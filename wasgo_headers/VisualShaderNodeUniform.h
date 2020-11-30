/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEUNIFORM_H
#define VISUALSHADERNODEUNIFORM_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "VisualShaderNode.h"
class VisualShaderNodeUniform : public VisualShaderNode{
String get_uniform_name();
void set_uniform_name(String p_name);
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_VisualShaderNodeUniform_wrapper_get_uniform_name(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeUniform_wrapper_set_uniform_name(WasGoId wasgo_id, WasGo::WasGoId p_name);
}
#endif