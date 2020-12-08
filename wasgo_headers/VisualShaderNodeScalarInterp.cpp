/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeScalarInterp.h"

VisualShaderNodeScalarInterp::VisualShaderNodeScalarInterp(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeScalarInterp::VisualShaderNodeScalarInterp(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeScalarInterp::VisualShaderNodeScalarInterp():VisualShaderNode(){
}
VisualShaderNodeScalarInterp VisualShaderNodeScalarInterp::new_instance(){
    return VisualShaderNodeScalarInterp(_wasgo_VisualShaderNodeScalarInterp_constructor());
}
WasGoID VisualShaderNodeScalarInterp::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeScalarInterp::operator bool(){
    return (bool) wasgo_id;
}
