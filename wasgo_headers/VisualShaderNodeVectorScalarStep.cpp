/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeVectorScalarStep.h"

VisualShaderNodeVectorScalarStep::VisualShaderNodeVectorScalarStep(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeVectorScalarStep::VisualShaderNodeVectorScalarStep(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeVectorScalarStep::VisualShaderNodeVectorScalarStep():VisualShaderNode(){
}
VisualShaderNodeVectorScalarStep VisualShaderNodeVectorScalarStep::new_instance(){
    return VisualShaderNodeVectorScalarStep(_wasgo_VisualShaderNodeVectorScalarStep_constructor());
}
WasGoID VisualShaderNodeVectorScalarStep::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeVectorScalarStep::operator bool(){
    return (bool) wasgo_id;
}
