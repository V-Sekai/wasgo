/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeFresnel.h"

VisualShaderNodeFresnel::VisualShaderNodeFresnel(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeFresnel::VisualShaderNodeFresnel(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeFresnel_constructor();
}
VisualShaderNodeFresnel::new_instance(){
    return VisualShaderNodeFresnel(_wasgo_VisualShaderNodeFresnel_constructor());
}