/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEUNIFORMREF_H
#define VISUALSHADERNODEUNIFORMREF_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
#include "ustring.h"
class VisualShaderNodeUniformRef : public VisualShaderNode{
public:
String get_uniform_name();
void set_uniform_name(String p_name);

VisualShaderNodeUniformRef(WasGoId p_wasgo_id);
~VisualShaderNodeUniformRef();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_VisualShaderNodeUniformRef_wrapper_get_uniform_name(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeUniformRef_wrapper_set_uniform_name(WasGoId wasgo_id, WasGoId p_name);
}
#endif