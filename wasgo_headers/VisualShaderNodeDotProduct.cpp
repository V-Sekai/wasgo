/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeDotProduct.h"

VisualShaderNodeDotProduct::VisualShaderNodeDotProduct(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeDotProduct::VisualShaderNodeDotProduct(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeDotProduct_constructor();
}
VisualShaderNodeDotProduct::new_instance(){
    return VisualShaderNodeDotProduct(_wasgo_VisualShaderNodeDotProduct_constructor());
}