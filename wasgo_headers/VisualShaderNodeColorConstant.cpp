/* THIS FILE IS GENERATED */
#include "VisualShaderNodeColorConstant.h"
Color VisualShaderNodeColorConstant::get_constant(){
	return Color::from_wasgo_id(_wasgo_VisualShaderNodeColorConstant_wrapper_get_constant(wasgo_id));
}
void VisualShaderNodeColorConstant::set_constant(Color p_value){
	_wasgo_VisualShaderNodeColorConstant_wrapper_set_constant(wasgo_id, ((Variant) p_value).get_wasgo_id());
}