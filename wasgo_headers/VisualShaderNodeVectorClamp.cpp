/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeVectorClamp.h"

VisualShaderNodeVectorClamp::VisualShaderNodeVectorClamp(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeVectorClamp::VisualShaderNodeVectorClamp(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeVectorClamp_constructor();
}
VisualShaderNodeVectorClamp::new_instance(){
    return VisualShaderNodeVectorClamp(_wasgo_VisualShaderNodeVectorClamp_constructor());
}