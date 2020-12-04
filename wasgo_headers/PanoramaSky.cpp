/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PanoramaSky.h"
Texture PanoramaSky::get_panorama(){
	return Texture(_wasgo_PanoramaSky_wrapper_get_panorama(wasgo_id));
}
void PanoramaSky::set_panorama(Texture p_texture){
	_wasgo_PanoramaSky_wrapper_set_panorama(wasgo_id, p_texture._get_wasgo_id());
}

PanoramaSky::PanoramaSky(WasGoId p_wasgo_id) : Sky(p_wasgo_id){
}
PanoramaSky::PanoramaSky(Sky other) : Sky(other._get_wasgo_id()){
    wasgo_id = _wasgo_PanoramaSky_constructor();
}
PanoramaSky::new_instance(){
    return PanoramaSky(_wasgo_PanoramaSky_constructor());
}