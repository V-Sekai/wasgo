/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeVec3Uniform.h"

VisualShaderNodeVec3Uniform::VisualShaderNodeVec3Uniform(WasGoID p_wasgo_id) : VisualShaderNodeUniform(p_wasgo_id){
}
VisualShaderNodeVec3Uniform::VisualShaderNodeVec3Uniform(VisualShaderNodeUniform other) : VisualShaderNodeUniform(other._get_wasgo_id()){
}
VisualShaderNodeVec3Uniform::VisualShaderNodeVec3Uniform():VisualShaderNodeUniform(){
}
VisualShaderNodeVec3Uniform VisualShaderNodeVec3Uniform::new_instance(){
    return VisualShaderNodeVec3Uniform(_wasgo_VisualShaderNodeVec3Uniform_constructor());
}
WasGoID VisualShaderNodeVec3Uniform::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeVec3Uniform::operator bool(){
    return (bool) wasgo_id;
}
