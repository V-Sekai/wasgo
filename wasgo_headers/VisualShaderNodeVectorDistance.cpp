/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeVectorDistance.h"

VisualShaderNodeVectorDistance::VisualShaderNodeVectorDistance(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeVectorDistance::VisualShaderNodeVectorDistance(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeVectorDistance_constructor();
}
VisualShaderNodeVectorDistance::new_instance(){
    return VisualShaderNodeVectorDistance(_wasgo_VisualShaderNodeVectorDistance_constructor());
}