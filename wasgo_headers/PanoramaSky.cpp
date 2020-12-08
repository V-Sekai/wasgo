/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PanoramaSky.h"
Texture PanoramaSky::get_panorama(){
	return Texture(_wasgo_PanoramaSky_wrapper_get_panorama(wasgo_id));
}
void PanoramaSky::set_panorama(Texture p_texture){
	_wasgo_PanoramaSky_wrapper_set_panorama(wasgo_id, p_texture._get_wasgo_id());
}

PanoramaSky::PanoramaSky(WasGoID p_wasgo_id) : Sky(p_wasgo_id){
}
PanoramaSky::PanoramaSky(Sky other) : Sky(other._get_wasgo_id()){
}
PanoramaSky::PanoramaSky():Sky(){
}
PanoramaSky PanoramaSky::new_instance(){
    return PanoramaSky(_wasgo_PanoramaSky_constructor());
}
WasGoID PanoramaSky::_get_wasgo_id(){
    return wasgo_id;
}
PanoramaSky::operator bool(){
    return (bool) wasgo_id;
}
