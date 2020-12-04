/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEINPUT_H
#define VISUALSHADERNODEINPUT_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
#include "ustring.h"
class VisualShaderNodeInput : public VisualShaderNode{
public:
String get_input_name();
String get_input_real_name();
void set_input_name(String p_name);

protected:
VisualShaderNodeInput(WasGoId p_wasgo_id);
public:
VisualShaderNodeInput();
~VisualShaderNodeInput();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_VisualShaderNodeInput_wrapper_get_input_name(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_VisualShaderNodeInput_wrapper_get_input_real_name(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_VisualShaderNodeInput_wrapper_set_input_name(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeInput_constructor();
    void _wasgo_VisualShaderNodeInput_destructor(WasGoId p_wasgo_id);
            
}
#endif