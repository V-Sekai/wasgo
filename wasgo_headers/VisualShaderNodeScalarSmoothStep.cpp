/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeScalarSmoothStep.h"

VisualShaderNodeScalarSmoothStep::VisualShaderNodeScalarSmoothStep(WasGoId p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeScalarSmoothStep::VisualShaderNodeScalarSmoothStep(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeScalarSmoothStep_constructor();
}
VisualShaderNodeScalarSmoothStep::new_instance(){
    return VisualShaderNodeScalarSmoothStep(_wasgo_VisualShaderNodeScalarSmoothStep_constructor());
}