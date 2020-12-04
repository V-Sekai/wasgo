/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeTextureUniformTriplanar.h"

VisualShaderNodeTextureUniformTriplanar::VisualShaderNodeTextureUniformTriplanar(WasGoID p_wasgo_id) : VisualShaderNodeTextureUniform(p_wasgo_id){
}
VisualShaderNodeTextureUniformTriplanar::VisualShaderNodeTextureUniformTriplanar(VisualShaderNodeTextureUniform other) : VisualShaderNodeTextureUniform(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeTextureUniformTriplanar_constructor();
}
VisualShaderNodeTextureUniformTriplanar::new_instance(){
    return VisualShaderNodeTextureUniformTriplanar(_wasgo_VisualShaderNodeTextureUniformTriplanar_constructor());
}