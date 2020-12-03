/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEUNIFORMREF_H
#define VISUALSHADERNODEUNIFORMREF_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "VisualShaderNode.h"
class VisualShaderNodeUniformRef : public VisualShaderNode{
public:
String get_uniform_name();
void set_uniform_name(String p_name);

protected:
VisualShaderNodeUniformRef(WasGoId p_wasgo_id);
public:
VisualShaderNodeUniformRef();
~VisualShaderNodeUniformRef();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_VisualShaderNodeUniformRef_wrapper_get_uniform_name(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_VisualShaderNodeUniformRef_wrapper_set_uniform_name(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeUniformRef_constructor();
    void _wasgo_VisualShaderNodeUniformRef_destructor(WasGoId p_wasgo_id);
            
}
#endif