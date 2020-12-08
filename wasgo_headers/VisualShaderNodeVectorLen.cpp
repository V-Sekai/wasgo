/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeVectorLen.h"

VisualShaderNodeVectorLen::VisualShaderNodeVectorLen(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeVectorLen::VisualShaderNodeVectorLen(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeVectorLen::VisualShaderNodeVectorLen():VisualShaderNode(){
}
VisualShaderNodeVectorLen VisualShaderNodeVectorLen::new_instance(){
    return VisualShaderNodeVectorLen(_wasgo_VisualShaderNodeVectorLen_constructor());
}
WasGoID VisualShaderNodeVectorLen::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeVectorLen::operator bool(){
    return (bool) wasgo_id;
}
