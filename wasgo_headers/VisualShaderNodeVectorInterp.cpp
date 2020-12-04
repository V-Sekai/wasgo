/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeVectorInterp.h"

VisualShaderNodeVectorInterp::VisualShaderNodeVectorInterp(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeVectorInterp::VisualShaderNodeVectorInterp(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeVectorInterp_constructor();
}
VisualShaderNodeVectorInterp::new_instance(){
    return VisualShaderNodeVectorInterp(_wasgo_VisualShaderNodeVectorInterp_constructor());
}