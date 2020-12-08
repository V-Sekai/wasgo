/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeScalarUniform.h"

VisualShaderNodeScalarUniform::VisualShaderNodeScalarUniform(WasGoID p_wasgo_id) : VisualShaderNodeUniform(p_wasgo_id){
}
VisualShaderNodeScalarUniform::VisualShaderNodeScalarUniform(VisualShaderNodeUniform other) : VisualShaderNodeUniform(other._get_wasgo_id()){
}
VisualShaderNodeScalarUniform::VisualShaderNodeScalarUniform():VisualShaderNodeUniform(){
}
VisualShaderNodeScalarUniform VisualShaderNodeScalarUniform::new_instance(){
    return VisualShaderNodeScalarUniform(_wasgo_VisualShaderNodeScalarUniform_constructor());
}
WasGoID VisualShaderNodeScalarUniform::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeScalarUniform::operator bool(){
    return (bool) wasgo_id;
}
