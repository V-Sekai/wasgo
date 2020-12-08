/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeTransformDecompose.h"

VisualShaderNodeTransformDecompose::VisualShaderNodeTransformDecompose(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeTransformDecompose::VisualShaderNodeTransformDecompose(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeTransformDecompose::VisualShaderNodeTransformDecompose():VisualShaderNode(){
}
VisualShaderNodeTransformDecompose VisualShaderNodeTransformDecompose::new_instance(){
    return VisualShaderNodeTransformDecompose(_wasgo_VisualShaderNodeTransformDecompose_constructor());
}
WasGoID VisualShaderNodeTransformDecompose::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeTransformDecompose::operator bool(){
    return (bool) wasgo_id;
}
