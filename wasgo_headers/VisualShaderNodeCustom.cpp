/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeCustom.h"

VisualShaderNodeCustom::VisualShaderNodeCustom(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeCustom::VisualShaderNodeCustom(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeCustom_constructor();
}
VisualShaderNodeCustom::new_instance(){
    return VisualShaderNodeCustom(_wasgo_VisualShaderNodeCustom_constructor());
}