/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeScalarInterp.h"

VisualShaderNodeScalarInterp::VisualShaderNodeScalarInterp(WasGoId p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeScalarInterp::VisualShaderNodeScalarInterp(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeScalarInterp_constructor();
}
VisualShaderNodeScalarInterp::new_instance(){
    return VisualShaderNodeScalarInterp(_wasgo_VisualShaderNodeScalarInterp_constructor());
}