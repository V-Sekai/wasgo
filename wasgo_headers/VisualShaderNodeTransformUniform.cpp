/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeTransformUniform.h"

VisualShaderNodeTransformUniform::VisualShaderNodeTransformUniform(WasGoId p_wasgo_id) : VisualShaderNodeUniform(p_wasgo_id){
}
VisualShaderNodeTransformUniform::VisualShaderNodeTransformUniform(VisualShaderNodeUniform other) : VisualShaderNodeUniform(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeTransformUniform_constructor();
}
VisualShaderNodeTransformUniform::new_instance(){
    return VisualShaderNodeTransformUniform(_wasgo_VisualShaderNodeTransformUniform_constructor());
}