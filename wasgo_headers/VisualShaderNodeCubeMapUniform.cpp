/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeCubeMapUniform.h"

VisualShaderNodeCubeMapUniform::VisualShaderNodeCubeMapUniform(WasGoID p_wasgo_id) : VisualShaderNodeTextureUniform(p_wasgo_id){
}
VisualShaderNodeCubeMapUniform::VisualShaderNodeCubeMapUniform(VisualShaderNodeTextureUniform other) : VisualShaderNodeTextureUniform(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeCubeMapUniform_constructor();
}
VisualShaderNodeCubeMapUniform::new_instance(){
    return VisualShaderNodeCubeMapUniform(_wasgo_VisualShaderNodeCubeMapUniform_constructor());
}