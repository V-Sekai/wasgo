/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeDeterminant.h"

VisualShaderNodeDeterminant::VisualShaderNodeDeterminant(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeDeterminant::VisualShaderNodeDeterminant(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeDeterminant::VisualShaderNodeDeterminant():VisualShaderNode(){
}
VisualShaderNodeDeterminant VisualShaderNodeDeterminant::new_instance(){
    return VisualShaderNodeDeterminant(_wasgo_VisualShaderNodeDeterminant_constructor());
}
WasGoID VisualShaderNodeDeterminant::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeDeterminant::operator bool(){
    return (bool) wasgo_id;
}
