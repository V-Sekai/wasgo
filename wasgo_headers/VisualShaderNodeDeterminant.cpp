/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeDeterminant.h"

VisualShaderNodeDeterminant::VisualShaderNodeDeterminant(WasGoId p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeDeterminant::VisualShaderNodeDeterminant(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeDeterminant_constructor();
}
VisualShaderNodeDeterminant::new_instance(){
    return VisualShaderNodeDeterminant(_wasgo_VisualShaderNodeDeterminant_constructor());
}