/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEUNIFORM_H
#define VISUALSHADERNODEUNIFORM_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
#include "Ustring.h"
class VisualShaderNodeUniform : public VisualShaderNode{
public:
String get_uniform_name();
void set_uniform_name(String p_name);

protected:
public:
explicit VisualShaderNodeUniform(WasGoID p_wasgo_id);
explicit VisualShaderNodeUniform(VisualShaderNode other);
VisualShaderNodeUniform();
VisualShaderNodeUniform new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_VisualShaderNodeUniform_wrapper_get_uniform_name(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_VisualShaderNodeUniform_wrapper_set_uniform_name(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeUniform_constructor();
            
}
#endif