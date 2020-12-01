/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEINPUT_H
#define VISUALSHADERNODEINPUT_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
#include "ustring.h"
class VisualShaderNodeInput : public VisualShaderNode{
public:
String get_input_name();
String get_input_real_name();
void set_input_name(String p_name);

VisualShaderNodeInput(WasGoId p_wasgo_id);
~VisualShaderNodeInput();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_VisualShaderNodeInput_wrapper_get_input_name(WasGoId wasgo_id);
WasGoId _wasgo_VisualShaderNodeInput_wrapper_get_input_real_name(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeInput_wrapper_set_input_name(WasGoId wasgo_id, WasGoId p_name);
}
#endif