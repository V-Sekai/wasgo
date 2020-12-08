/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeOuterProduct.h"

VisualShaderNodeOuterProduct::VisualShaderNodeOuterProduct(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeOuterProduct::VisualShaderNodeOuterProduct(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeOuterProduct::VisualShaderNodeOuterProduct():VisualShaderNode(){
}
VisualShaderNodeOuterProduct VisualShaderNodeOuterProduct::new_instance(){
    return VisualShaderNodeOuterProduct(_wasgo_VisualShaderNodeOuterProduct_constructor());
}
WasGoID VisualShaderNodeOuterProduct::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeOuterProduct::operator bool(){
    return (bool) wasgo_id;
}
