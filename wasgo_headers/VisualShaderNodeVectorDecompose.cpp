/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeVectorDecompose.h"

VisualShaderNodeVectorDecompose::VisualShaderNodeVectorDecompose(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeVectorDecompose::VisualShaderNodeVectorDecompose(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeVectorDecompose::VisualShaderNodeVectorDecompose():VisualShaderNode(){
}
VisualShaderNodeVectorDecompose VisualShaderNodeVectorDecompose::new_instance(){
    return VisualShaderNodeVectorDecompose(_wasgo_VisualShaderNodeVectorDecompose_constructor());
}
WasGoID VisualShaderNodeVectorDecompose::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeVectorDecompose::operator bool(){
    return (bool) wasgo_id;
}
