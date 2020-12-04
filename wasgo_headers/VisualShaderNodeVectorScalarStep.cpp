/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeVectorScalarStep.h"

VisualShaderNodeVectorScalarStep::VisualShaderNodeVectorScalarStep(WasGoId p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeVectorScalarStep::VisualShaderNodeVectorScalarStep(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeVectorScalarStep_constructor();
}
VisualShaderNodeVectorScalarStep::new_instance(){
    return VisualShaderNodeVectorScalarStep(_wasgo_VisualShaderNodeVectorScalarStep_constructor());
}