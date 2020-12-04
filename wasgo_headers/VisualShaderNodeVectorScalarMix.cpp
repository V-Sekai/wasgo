/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeVectorScalarMix.h"

VisualShaderNodeVectorScalarMix::VisualShaderNodeVectorScalarMix(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeVectorScalarMix::VisualShaderNodeVectorScalarMix(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeVectorScalarMix_constructor();
}
VisualShaderNodeVectorScalarMix::new_instance(){
    return VisualShaderNodeVectorScalarMix(_wasgo_VisualShaderNodeVectorScalarMix_constructor());
}