/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeVectorLen.h"

VisualShaderNodeVectorLen::VisualShaderNodeVectorLen(WasGoId p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeVectorLen::VisualShaderNodeVectorLen(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeVectorLen_constructor();
}
VisualShaderNodeVectorLen::new_instance(){
    return VisualShaderNodeVectorLen(_wasgo_VisualShaderNodeVectorLen_constructor());
}