/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeTransformDecompose.h"

VisualShaderNodeTransformDecompose::VisualShaderNodeTransformDecompose(WasGoId p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeTransformDecompose::VisualShaderNodeTransformDecompose(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeTransformDecompose_constructor();
}
VisualShaderNodeTransformDecompose::new_instance(){
    return VisualShaderNodeTransformDecompose(_wasgo_VisualShaderNodeTransformDecompose_constructor());
}