/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeVectorRefract.h"

VisualShaderNodeVectorRefract::VisualShaderNodeVectorRefract(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeVectorRefract::VisualShaderNodeVectorRefract(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeVectorRefract_constructor();
}
VisualShaderNodeVectorRefract::new_instance(){
    return VisualShaderNodeVectorRefract(_wasgo_VisualShaderNodeVectorRefract_constructor());
}