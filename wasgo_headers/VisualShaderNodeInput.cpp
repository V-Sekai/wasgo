/* THIS FILE IS GENERATED */
#include "VisualShaderNodeInput.h"
String VisualShaderNodeInput::get_input_name(){
	return String::from_wasgo_id(_wasgo_VisualShaderNodeInput_wrapper_get_input_name(wasgo_id));
}
String VisualShaderNodeInput::get_input_real_name(){
	return String::from_wasgo_id(_wasgo_VisualShaderNodeInput_wrapper_get_input_real_name(wasgo_id));
}
void VisualShaderNodeInput::set_input_name(String p_name){
	_wasgo_VisualShaderNodeInput_wrapper_set_input_name(wasgo_id, ((Variant) name).get_wasgo_id());
}

VisualShaderNodeInput::VisualShaderNodeInput(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
VisualShaderNodeInput::~VisualShaderNodeInput(){
}