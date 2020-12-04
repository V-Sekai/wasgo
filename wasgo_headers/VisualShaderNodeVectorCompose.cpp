/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeVectorCompose.h"

VisualShaderNodeVectorCompose::VisualShaderNodeVectorCompose(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeVectorCompose::VisualShaderNodeVectorCompose(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeVectorCompose_constructor();
}
VisualShaderNodeVectorCompose::new_instance(){
    return VisualShaderNodeVectorCompose(_wasgo_VisualShaderNodeVectorCompose_constructor());
}