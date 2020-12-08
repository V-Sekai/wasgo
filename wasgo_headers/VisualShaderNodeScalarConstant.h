/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESCALARCONSTANT_H
#define VISUALSHADERNODESCALARCONSTANT_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeScalarConstant : public VisualShaderNode{
public:
float get_constant();
void set_constant(float p_value);

protected:
public:
explicit VisualShaderNodeScalarConstant(WasGoID p_wasgo_id);
explicit VisualShaderNodeScalarConstant(VisualShaderNode other);
VisualShaderNodeScalarConstant();
VisualShaderNodeScalarConstant new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_VisualShaderNodeScalarConstant_wrapper_get_constant(WasGoID wasgo_id);
void _wasgo_VisualShaderNodeScalarConstant_wrapper_set_constant(WasGoID wasgo_id, float p_value);

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeScalarConstant_constructor();
            
}
#endif