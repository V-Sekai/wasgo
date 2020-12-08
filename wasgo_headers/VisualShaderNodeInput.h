/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEINPUT_H
#define VISUALSHADERNODEINPUT_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
#include "Ustring.h"
class VisualShaderNodeInput : public VisualShaderNode{
public:
String get_input_name();
String get_input_real_name();
void set_input_name(String p_name);

protected:
public:
explicit VisualShaderNodeInput(WasGoID p_wasgo_id);
explicit VisualShaderNodeInput(VisualShaderNode other);
VisualShaderNodeInput();
VisualShaderNodeInput new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_VisualShaderNodeInput_wrapper_get_input_name(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_VisualShaderNodeInput_wrapper_get_input_real_name(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_VisualShaderNodeInput_wrapper_set_input_name(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeInput_constructor();
            
}
#endif