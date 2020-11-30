/* THIS FILE IS GENERATED */
#include "VisualShaderNodeCubeMap.h"
CubeMap VisualShaderNodeCubeMap::get_cube_map(){
	return CubeMap::from_wasgo_id(_wasgo_VisualShaderNodeCubeMap_wrapper_get_cube_map(wasgo_id));
}
VisualShaderNodeCubeMap::Source VisualShaderNodeCubeMap::get_source(){
	return VisualShaderNodeCubeMap::Source::from_wasgo_id(_wasgo_VisualShaderNodeCubeMap_wrapper_get_source(wasgo_id));
}
VisualShaderNodeCubeMap::TextureType VisualShaderNodeCubeMap::get_texture_type(){
	return VisualShaderNodeCubeMap::TextureType::from_wasgo_id(_wasgo_VisualShaderNodeCubeMap_wrapper_get_texture_type(wasgo_id));
}
void VisualShaderNodeCubeMap::set_cube_map(CubeMap p_value){
	_wasgo_VisualShaderNodeCubeMap_wrapper_set_cube_map(wasgo_id, ((Variant) value).get_wasgo_id());
}
void VisualShaderNodeCubeMap::set_source(VisualShaderNodeCubeMap::Source p_value){
	_wasgo_VisualShaderNodeCubeMap_wrapper_set_source(wasgo_id, ((Variant) value).get_wasgo_id());
}
void VisualShaderNodeCubeMap::set_texture_type(VisualShaderNodeCubeMap::TextureType p_value){
	_wasgo_VisualShaderNodeCubeMap_wrapper_set_texture_type(wasgo_id, ((Variant) value).get_wasgo_id());
}

VisualShaderNodeCubeMap::VisualShaderNodeCubeMap(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
VisualShaderNodeCubeMap::~VisualShaderNodeCubeMap(){
}