/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeIf.h"

VisualShaderNodeIf::VisualShaderNodeIf(WasGoId p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeIf::VisualShaderNodeIf(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeIf_constructor();
}
VisualShaderNodeIf::new_instance(){
    return VisualShaderNodeIf(_wasgo_VisualShaderNodeIf_constructor());
}