/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeColorUniform.h"

VisualShaderNodeColorUniform::VisualShaderNodeColorUniform(WasGoId p_wasgo_id) : VisualShaderNodeUniform(p_wasgo_id){
}
VisualShaderNodeColorUniform::VisualShaderNodeColorUniform(VisualShaderNodeUniform other) : VisualShaderNodeUniform(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeColorUniform_constructor();
}
VisualShaderNodeColorUniform::new_instance(){
    return VisualShaderNodeColorUniform(_wasgo_VisualShaderNodeColorUniform_constructor());
}