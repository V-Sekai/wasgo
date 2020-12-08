/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CubeMap.h"
int CubeMap::get_flags(){
	return (int) _wasgo_CubeMap_wrapper_get_flags(wasgo_id);
}
int CubeMap::get_height(){
	return (int) _wasgo_CubeMap_wrapper_get_height(wasgo_id);
}
float CubeMap::get_lossy_storage_quality(){
	return (float) _wasgo_CubeMap_wrapper_get_lossy_storage_quality(wasgo_id);
}
Image CubeMap::get_side(CubeMap::Side p_side){
	return Image(_wasgo_CubeMap_wrapper_get_side(wasgo_id, p_side._get_wasgo_id()));
}
CubeMap::Storage CubeMap::get_storage(){
	return CubeMap::Storage(_wasgo_CubeMap_wrapper_get_storage(wasgo_id));
}
int CubeMap::get_width(){
	return (int) _wasgo_CubeMap_wrapper_get_width(wasgo_id);
}
void CubeMap::set_flags(int p_flags){
	_wasgo_CubeMap_wrapper_set_flags(wasgo_id, p_flags);
}
void CubeMap::set_lossy_storage_quality(float p_quality){
	_wasgo_CubeMap_wrapper_set_lossy_storage_quality(wasgo_id, p_quality);
}
void CubeMap::set_side(CubeMap::Side p_side, Image p_image){
	_wasgo_CubeMap_wrapper_set_side(wasgo_id, p_side._get_wasgo_id(), p_image._get_wasgo_id());
}
void CubeMap::set_storage(CubeMap::Storage p_mode){
	_wasgo_CubeMap_wrapper_set_storage(wasgo_id, p_mode._get_wasgo_id());
}

CubeMap::CubeMap(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
CubeMap::CubeMap(Resource other) : Resource(other._get_wasgo_id()){
}
CubeMap::CubeMap():Resource(){
}
CubeMap CubeMap::new_instance(){
    return CubeMap(_wasgo_CubeMap_constructor());
}
WasGoID CubeMap::_get_wasgo_id(){
    return wasgo_id;
}
CubeMap::operator bool(){
    return (bool) wasgo_id;
}
