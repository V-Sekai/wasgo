/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeFresnel.h"

VisualShaderNodeFresnel::VisualShaderNodeFresnel(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeFresnel::VisualShaderNodeFresnel(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeFresnel::VisualShaderNodeFresnel():VisualShaderNode(){
}
VisualShaderNodeFresnel VisualShaderNodeFresnel::new_instance(){
    return VisualShaderNodeFresnel(_wasgo_VisualShaderNodeFresnel_constructor());
}
WasGoID VisualShaderNodeFresnel::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeFresnel::operator bool(){
    return (bool) wasgo_id;
}
