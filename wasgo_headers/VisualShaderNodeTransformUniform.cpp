/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeTransformUniform.h"

VisualShaderNodeTransformUniform::VisualShaderNodeTransformUniform(WasGoID p_wasgo_id) : VisualShaderNodeUniform(p_wasgo_id){
}
VisualShaderNodeTransformUniform::VisualShaderNodeTransformUniform(VisualShaderNodeUniform other) : VisualShaderNodeUniform(other._get_wasgo_id()){
}
VisualShaderNodeTransformUniform::VisualShaderNodeTransformUniform():VisualShaderNodeUniform(){
}
VisualShaderNodeTransformUniform VisualShaderNodeTransformUniform::new_instance(){
    return VisualShaderNodeTransformUniform(_wasgo_VisualShaderNodeTransformUniform_constructor());
}
WasGoID VisualShaderNodeTransformUniform::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeTransformUniform::operator bool(){
    return (bool) wasgo_id;
}
