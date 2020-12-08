/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeVectorRefract.h"

VisualShaderNodeVectorRefract::VisualShaderNodeVectorRefract(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeVectorRefract::VisualShaderNodeVectorRefract(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeVectorRefract::VisualShaderNodeVectorRefract():VisualShaderNode(){
}
VisualShaderNodeVectorRefract VisualShaderNodeVectorRefract::new_instance(){
    return VisualShaderNodeVectorRefract(_wasgo_VisualShaderNodeVectorRefract_constructor());
}
WasGoID VisualShaderNodeVectorRefract::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeVectorRefract::operator bool(){
    return (bool) wasgo_id;
}
