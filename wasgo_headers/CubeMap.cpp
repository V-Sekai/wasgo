/* THIS FILE IS GENERATED */
#include "CubeMap.h"
int CubeMap::get_flags(){
	return (int) _wasgo_CubeMap_wrapper_get_flags(wasgo_id));
}
int CubeMap::get_height(){
	return (int) _wasgo_CubeMap_wrapper_get_height(wasgo_id));
}
float CubeMap::get_lossy_storage_quality(){
	return (float) _wasgo_CubeMap_wrapper_get_lossy_storage_quality(wasgo_id));
}
Image CubeMap::get_side(CubeMap::Side p_side){
	return Image::from_wasgo_id(_wasgo_CubeMap_wrapper_get_side(wasgo_id, ((Variant) side).get_wasgo_id()));
}
CubeMap::Storage CubeMap::get_storage(){
	return CubeMap::Storage::from_wasgo_id(_wasgo_CubeMap_wrapper_get_storage(wasgo_id));
}
int CubeMap::get_width(){
	return (int) _wasgo_CubeMap_wrapper_get_width(wasgo_id));
}
void CubeMap::set_flags(int p_flags){
	_wasgo_CubeMap_wrapper_set_flags(wasgo_id, flags);
}
void CubeMap::set_lossy_storage_quality(float p_quality){
	_wasgo_CubeMap_wrapper_set_lossy_storage_quality(wasgo_id, quality);
}
void CubeMap::set_side(CubeMap::Side p_side, Image p_image){
	_wasgo_CubeMap_wrapper_set_side(wasgo_id, ((Variant) side).get_wasgo_id(), ((Variant) image).get_wasgo_id());
}
void CubeMap::set_storage(CubeMap::Storage p_mode){
	_wasgo_CubeMap_wrapper_set_storage(wasgo_id, ((Variant) mode).get_wasgo_id());
}

CubeMap::CubeMap(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
CubeMap::~CubeMap(){
}