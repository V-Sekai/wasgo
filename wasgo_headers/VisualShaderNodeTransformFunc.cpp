/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeTransformFunc.h"
VisualShaderNodeTransformFunc::Function VisualShaderNodeTransformFunc::get_function(){
	return VisualShaderNodeTransformFunc::Function(_wasgo_VisualShaderNodeTransformFunc_wrapper_get_function(wasgo_id));
}
void VisualShaderNodeTransformFunc::set_function(VisualShaderNodeTransformFunc::Function p_func){
	_wasgo_VisualShaderNodeTransformFunc_wrapper_set_function(wasgo_id, p_func._get_wasgo_id());
}

VisualShaderNodeTransformFunc::VisualShaderNodeTransformFunc(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeTransformFunc::VisualShaderNodeTransformFunc(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeTransformFunc::VisualShaderNodeTransformFunc():VisualShaderNode(){
}
VisualShaderNodeTransformFunc VisualShaderNodeTransformFunc::new_instance(){
    return VisualShaderNodeTransformFunc(_wasgo_VisualShaderNodeTransformFunc_constructor());
}
WasGoID VisualShaderNodeTransformFunc::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeTransformFunc::operator bool(){
    return (bool) wasgo_id;
}
