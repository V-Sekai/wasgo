/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeBooleanUniform.h"

VisualShaderNodeBooleanUniform::VisualShaderNodeBooleanUniform(WasGoID p_wasgo_id) : VisualShaderNodeUniform(p_wasgo_id){
}
VisualShaderNodeBooleanUniform::VisualShaderNodeBooleanUniform(VisualShaderNodeUniform other) : VisualShaderNodeUniform(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeBooleanUniform_constructor();
}
VisualShaderNodeBooleanUniform::new_instance(){
    return VisualShaderNodeBooleanUniform(_wasgo_VisualShaderNodeBooleanUniform_constructor());
}