/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeIf.h"

VisualShaderNodeIf::VisualShaderNodeIf(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeIf::VisualShaderNodeIf(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeIf::VisualShaderNodeIf():VisualShaderNode(){
}
VisualShaderNodeIf VisualShaderNodeIf::new_instance(){
    return VisualShaderNodeIf(_wasgo_VisualShaderNodeIf_constructor());
}
WasGoID VisualShaderNodeIf::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeIf::operator bool(){
    return (bool) wasgo_id;
}
