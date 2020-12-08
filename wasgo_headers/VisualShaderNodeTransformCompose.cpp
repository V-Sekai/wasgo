/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeTransformCompose.h"

VisualShaderNodeTransformCompose::VisualShaderNodeTransformCompose(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeTransformCompose::VisualShaderNodeTransformCompose(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeTransformCompose::VisualShaderNodeTransformCompose():VisualShaderNode(){
}
VisualShaderNodeTransformCompose VisualShaderNodeTransformCompose::new_instance(){
    return VisualShaderNodeTransformCompose(_wasgo_VisualShaderNodeTransformCompose_constructor());
}
WasGoID VisualShaderNodeTransformCompose::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeTransformCompose::operator bool(){
    return (bool) wasgo_id;
}
