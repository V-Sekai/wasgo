/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeVectorInterp.h"

VisualShaderNodeVectorInterp::VisualShaderNodeVectorInterp(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeVectorInterp::VisualShaderNodeVectorInterp(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeVectorInterp::VisualShaderNodeVectorInterp():VisualShaderNode(){
}
VisualShaderNodeVectorInterp VisualShaderNodeVectorInterp::new_instance(){
    return VisualShaderNodeVectorInterp(_wasgo_VisualShaderNodeVectorInterp_constructor());
}
WasGoID VisualShaderNodeVectorInterp::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeVectorInterp::operator bool(){
    return (bool) wasgo_id;
}
