/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeScalarClamp.h"

VisualShaderNodeScalarClamp::VisualShaderNodeScalarClamp(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeScalarClamp::VisualShaderNodeScalarClamp(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeScalarClamp::VisualShaderNodeScalarClamp():VisualShaderNode(){
}
VisualShaderNodeScalarClamp VisualShaderNodeScalarClamp::new_instance(){
    return VisualShaderNodeScalarClamp(_wasgo_VisualShaderNodeScalarClamp_constructor());
}
WasGoID VisualShaderNodeScalarClamp::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeScalarClamp::operator bool(){
    return (bool) wasgo_id;
}
