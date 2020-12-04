/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESCALARCONSTANT_H
#define VISUALSHADERNODESCALARCONSTANT_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeScalarConstant : public VisualShaderNode{
public:
float get_constant();
void set_constant(float p_value);

protected:
public:
explicit VisualShaderNodeScalarConstant(WasGoId p_wasgo_id);
explicit VisualShaderNodeScalarConstant(VisualShaderNode other);
VisualShaderNodeScalarConstant new_instance();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_VisualShaderNodeScalarConstant_wrapper_get_constant(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeScalarConstant_wrapper_set_constant(WasGoId wasgo_id, float p_value);

    //constructor wrappers
    WasGoId _wasgo_VisualShaderNodeScalarConstant_constructor();
            
}
#endif