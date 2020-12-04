/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeVectorDecompose.h"

VisualShaderNodeVectorDecompose::VisualShaderNodeVectorDecompose(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeVectorDecompose::VisualShaderNodeVectorDecompose(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeVectorDecompose_constructor();
}
VisualShaderNodeVectorDecompose::new_instance(){
    return VisualShaderNodeVectorDecompose(_wasgo_VisualShaderNodeVectorDecompose_constructor());
}