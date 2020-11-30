/* THIS FILE IS GENERATED */
#include "Sky.h"
Sky::RadianceSize Sky::get_radiance_size(){
	return Sky::RadianceSize::from_wasgo_id(_wasgo_Sky_wrapper_get_radiance_size(wasgo_id));
}
void Sky::set_radiance_size(Sky::RadianceSize p_size){
	_wasgo_Sky_wrapper_set_radiance_size(wasgo_id, ((Variant) size).get_wasgo_id());
}