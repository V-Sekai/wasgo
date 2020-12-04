/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeScalarUniform.h"

VisualShaderNodeScalarUniform::VisualShaderNodeScalarUniform(WasGoID p_wasgo_id) : VisualShaderNodeUniform(p_wasgo_id){
}
VisualShaderNodeScalarUniform::VisualShaderNodeScalarUniform(VisualShaderNodeUniform other) : VisualShaderNodeUniform(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeScalarUniform_constructor();
}
VisualShaderNodeScalarUniform::new_instance(){
    return VisualShaderNodeScalarUniform(_wasgo_VisualShaderNodeScalarUniform_constructor());
}