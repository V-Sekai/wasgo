/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeTransformCompose.h"

VisualShaderNodeTransformCompose::VisualShaderNodeTransformCompose(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeTransformCompose::VisualShaderNodeTransformCompose(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeTransformCompose_constructor();
}
VisualShaderNodeTransformCompose::new_instance(){
    return VisualShaderNodeTransformCompose(_wasgo_VisualShaderNodeTransformCompose_constructor());
}