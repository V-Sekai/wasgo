/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEUNIFORMREF_H
#define VISUALSHADERNODEUNIFORMREF_H

#include "wasgo\wasgoid.h"

#include "Ustring.h"
#include "VisualShaderNode.h"
class VisualShaderNodeUniformRef : public VisualShaderNode{
public:
String get_uniform_name();
void set_uniform_name(String p_name);

protected:
public:
explicit VisualShaderNodeUniformRef(WasGoID p_wasgo_id);
explicit VisualShaderNodeUniformRef(VisualShaderNode other);
VisualShaderNodeUniformRef();
VisualShaderNodeUniformRef new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_VisualShaderNodeUniformRef_wrapper_get_uniform_name(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_VisualShaderNodeUniformRef_wrapper_set_uniform_name(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeUniformRef_constructor();
            
}
#endif