/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeVectorClamp.h"

VisualShaderNodeVectorClamp::VisualShaderNodeVectorClamp(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeVectorClamp::VisualShaderNodeVectorClamp(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeVectorClamp::VisualShaderNodeVectorClamp():VisualShaderNode(){
}
VisualShaderNodeVectorClamp VisualShaderNodeVectorClamp::new_instance(){
    return VisualShaderNodeVectorClamp(_wasgo_VisualShaderNodeVectorClamp_constructor());
}
WasGoID VisualShaderNodeVectorClamp::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeVectorClamp::operator bool(){
    return (bool) wasgo_id;
}
