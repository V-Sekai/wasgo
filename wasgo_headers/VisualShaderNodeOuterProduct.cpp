/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeOuterProduct.h"

VisualShaderNodeOuterProduct::VisualShaderNodeOuterProduct(WasGoId p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeOuterProduct::VisualShaderNodeOuterProduct(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeOuterProduct_constructor();
}
VisualShaderNodeOuterProduct::new_instance(){
    return VisualShaderNodeOuterProduct(_wasgo_VisualShaderNodeOuterProduct_constructor());
}