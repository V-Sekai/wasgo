/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeScalarSmoothStep.h"

VisualShaderNodeScalarSmoothStep::VisualShaderNodeScalarSmoothStep(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeScalarSmoothStep::VisualShaderNodeScalarSmoothStep(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeScalarSmoothStep::VisualShaderNodeScalarSmoothStep():VisualShaderNode(){
}
VisualShaderNodeScalarSmoothStep VisualShaderNodeScalarSmoothStep::new_instance(){
    return VisualShaderNodeScalarSmoothStep(_wasgo_VisualShaderNodeScalarSmoothStep_constructor());
}
WasGoID VisualShaderNodeScalarSmoothStep::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeScalarSmoothStep::operator bool(){
    return (bool) wasgo_id;
}
