/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEUNIFORM_H
#define VISUALSHADERNODEUNIFORM_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
#include "ustring.h"
class VisualShaderNodeUniform : public VisualShaderNode{
public:
String get_uniform_name();
void set_uniform_name(String p_name);
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_VisualShaderNodeUniform_wrapper_get_uniform_name(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeUniform_wrapper_set_uniform_name(WasGoId wasgo_id, WasGoId p_name);
}
#endif