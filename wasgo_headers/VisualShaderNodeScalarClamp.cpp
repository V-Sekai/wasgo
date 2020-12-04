/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeScalarClamp.h"

VisualShaderNodeScalarClamp::VisualShaderNodeScalarClamp(WasGoId p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeScalarClamp::VisualShaderNodeScalarClamp(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeScalarClamp_constructor();
}
VisualShaderNodeScalarClamp::new_instance(){
    return VisualShaderNodeScalarClamp(_wasgo_VisualShaderNodeScalarClamp_constructor());
}