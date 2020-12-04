/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeVectorSmoothStep.h"

VisualShaderNodeVectorSmoothStep::VisualShaderNodeVectorSmoothStep(WasGoId p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeVectorSmoothStep::VisualShaderNodeVectorSmoothStep(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeVectorSmoothStep_constructor();
}
VisualShaderNodeVectorSmoothStep::new_instance(){
    return VisualShaderNodeVectorSmoothStep(_wasgo_VisualShaderNodeVectorSmoothStep_constructor());
}