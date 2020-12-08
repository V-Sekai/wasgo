/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeCubeMapUniform.h"

VisualShaderNodeCubeMapUniform::VisualShaderNodeCubeMapUniform(WasGoID p_wasgo_id) : VisualShaderNodeTextureUniform(p_wasgo_id){
}
VisualShaderNodeCubeMapUniform::VisualShaderNodeCubeMapUniform(VisualShaderNodeTextureUniform other) : VisualShaderNodeTextureUniform(other._get_wasgo_id()){
}
VisualShaderNodeCubeMapUniform::VisualShaderNodeCubeMapUniform():VisualShaderNodeTextureUniform(){
}
VisualShaderNodeCubeMapUniform VisualShaderNodeCubeMapUniform::new_instance(){
    return VisualShaderNodeCubeMapUniform(_wasgo_VisualShaderNodeCubeMapUniform_constructor());
}
WasGoID VisualShaderNodeCubeMapUniform::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeCubeMapUniform::operator bool(){
    return (bool) wasgo_id;
}
