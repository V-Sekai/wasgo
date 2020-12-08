/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeVectorSmoothStep.h"

VisualShaderNodeVectorSmoothStep::VisualShaderNodeVectorSmoothStep(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeVectorSmoothStep::VisualShaderNodeVectorSmoothStep(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeVectorSmoothStep::VisualShaderNodeVectorSmoothStep():VisualShaderNode(){
}
VisualShaderNodeVectorSmoothStep VisualShaderNodeVectorSmoothStep::new_instance(){
    return VisualShaderNodeVectorSmoothStep(_wasgo_VisualShaderNodeVectorSmoothStep_constructor());
}
WasGoID VisualShaderNodeVectorSmoothStep::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeVectorSmoothStep::operator bool(){
    return (bool) wasgo_id;
}
