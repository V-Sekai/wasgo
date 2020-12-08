/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeCubeMap.h"
CubeMap VisualShaderNodeCubeMap::get_cube_map(){
	return CubeMap(_wasgo_VisualShaderNodeCubeMap_wrapper_get_cube_map(wasgo_id));
}
VisualShaderNodeCubeMap::Source VisualShaderNodeCubeMap::get_source(){
	return VisualShaderNodeCubeMap::Source(_wasgo_VisualShaderNodeCubeMap_wrapper_get_source(wasgo_id));
}
VisualShaderNodeCubeMap::TextureType VisualShaderNodeCubeMap::get_texture_type(){
	return VisualShaderNodeCubeMap::TextureType(_wasgo_VisualShaderNodeCubeMap_wrapper_get_texture_type(wasgo_id));
}
void VisualShaderNodeCubeMap::set_cube_map(CubeMap p_value){
	_wasgo_VisualShaderNodeCubeMap_wrapper_set_cube_map(wasgo_id, p_value._get_wasgo_id());
}
void VisualShaderNodeCubeMap::set_source(VisualShaderNodeCubeMap::Source p_value){
	_wasgo_VisualShaderNodeCubeMap_wrapper_set_source(wasgo_id, p_value._get_wasgo_id());
}
void VisualShaderNodeCubeMap::set_texture_type(VisualShaderNodeCubeMap::TextureType p_value){
	_wasgo_VisualShaderNodeCubeMap_wrapper_set_texture_type(wasgo_id, p_value._get_wasgo_id());
}

VisualShaderNodeCubeMap::VisualShaderNodeCubeMap(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeCubeMap::VisualShaderNodeCubeMap(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeCubeMap::VisualShaderNodeCubeMap():VisualShaderNode(){
}
VisualShaderNodeCubeMap VisualShaderNodeCubeMap::new_instance(){
    return VisualShaderNodeCubeMap(_wasgo_VisualShaderNodeCubeMap_constructor());
}
WasGoID VisualShaderNodeCubeMap::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeCubeMap::operator bool(){
    return (bool) wasgo_id;
}
