/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeFaceForward.h"

VisualShaderNodeFaceForward::VisualShaderNodeFaceForward(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeFaceForward::VisualShaderNodeFaceForward(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeFaceForward::VisualShaderNodeFaceForward():VisualShaderNode(){
}
VisualShaderNodeFaceForward VisualShaderNodeFaceForward::new_instance(){
    return VisualShaderNodeFaceForward(_wasgo_VisualShaderNodeFaceForward_constructor());
}
WasGoID VisualShaderNodeFaceForward::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeFaceForward::operator bool(){
    return (bool) wasgo_id;
}
