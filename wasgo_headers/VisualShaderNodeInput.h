/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEINPUT_H
#define VISUALSHADERNODEINPUT_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "VisualShaderNode.h"
class VisualShaderNodeInput : public VisualShaderNode{
String get_input_name();
String get_input_real_name();
void set_input_name(String p_name);

VisualShaderNodeInput(WasGoId p_wasgo_id);
~VisualShaderNodeInput();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_VisualShaderNodeInput_wrapper_get_input_name(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_VisualShaderNodeInput_wrapper_get_input_real_name(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeInput_wrapper_set_input_name(WasGoId wasgo_id, WasGo::WasGoId p_name);
}
#endif