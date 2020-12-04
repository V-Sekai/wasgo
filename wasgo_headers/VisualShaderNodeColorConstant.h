/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODECOLORCONSTANT_H
#define VISUALSHADERNODECOLORCONSTANT_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
#include "Color.h"
class VisualShaderNodeColorConstant : public VisualShaderNode{
public:
Color get_constant();
void set_constant(Color p_value);

protected:
public:
explicit VisualShaderNodeColorConstant(WasGoId p_wasgo_id);
explicit VisualShaderNodeColorConstant(VisualShaderNode other);
VisualShaderNodeColorConstant new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_VisualShaderNodeColorConstant_wrapper_get_constant(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_VisualShaderNodeColorConstant_wrapper_set_constant(WasGoId wasgo_id, const uint8_t * p_value, int p_value_wasgo_buffer_size);

    //constructor wrappers
    WasGoId _wasgo_VisualShaderNodeColorConstant_constructor();
            
}
#endif