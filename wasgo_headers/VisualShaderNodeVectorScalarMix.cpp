/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeVectorScalarMix.h"

VisualShaderNodeVectorScalarMix::VisualShaderNodeVectorScalarMix(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeVectorScalarMix::VisualShaderNodeVectorScalarMix(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeVectorScalarMix::VisualShaderNodeVectorScalarMix():VisualShaderNode(){
}
VisualShaderNodeVectorScalarMix VisualShaderNodeVectorScalarMix::new_instance(){
    return VisualShaderNodeVectorScalarMix(_wasgo_VisualShaderNodeVectorScalarMix_constructor());
}
WasGoID VisualShaderNodeVectorScalarMix::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeVectorScalarMix::operator bool(){
    return (bool) wasgo_id;
}
