/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeDotProduct.h"

VisualShaderNodeDotProduct::VisualShaderNodeDotProduct(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeDotProduct::VisualShaderNodeDotProduct(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeDotProduct::VisualShaderNodeDotProduct():VisualShaderNode(){
}
VisualShaderNodeDotProduct VisualShaderNodeDotProduct::new_instance(){
    return VisualShaderNodeDotProduct(_wasgo_VisualShaderNodeDotProduct_constructor());
}
WasGoID VisualShaderNodeDotProduct::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeDotProduct::operator bool(){
    return (bool) wasgo_id;
}
