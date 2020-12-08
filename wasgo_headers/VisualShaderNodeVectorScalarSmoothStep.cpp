/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeVectorScalarSmoothStep.h"

VisualShaderNodeVectorScalarSmoothStep::VisualShaderNodeVectorScalarSmoothStep(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeVectorScalarSmoothStep::VisualShaderNodeVectorScalarSmoothStep(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeVectorScalarSmoothStep::VisualShaderNodeVectorScalarSmoothStep():VisualShaderNode(){
}
VisualShaderNodeVectorScalarSmoothStep VisualShaderNodeVectorScalarSmoothStep::new_instance(){
    return VisualShaderNodeVectorScalarSmoothStep(_wasgo_VisualShaderNodeVectorScalarSmoothStep_constructor());
}
WasGoID VisualShaderNodeVectorScalarSmoothStep::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeVectorScalarSmoothStep::operator bool(){
    return (bool) wasgo_id;
}
