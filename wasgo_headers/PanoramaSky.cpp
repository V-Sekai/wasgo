/* THIS FILE IS GENERATED */
#include "PanoramaSky.h"
Texture PanoramaSky::get_panorama(){
	return Texture::from_wasgo_id(_wasgo_PanoramaSky_wrapper_get_panorama(wasgo_id));
}
void PanoramaSky::set_panorama(Texture p_texture){
	_wasgo_PanoramaSky_wrapper_set_panorama(wasgo_id, ((Variant) texture).get_wasgo_id());
}

PanoramaSky::PanoramaSky(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
PanoramaSky::~PanoramaSky(){
}