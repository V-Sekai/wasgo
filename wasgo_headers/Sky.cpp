/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Sky.h"
Sky::RadianceSize Sky::get_radiance_size(){
	return Sky::RadianceSize(_wasgo_Sky_wrapper_get_radiance_size(wasgo_id));
}
void Sky::set_radiance_size(Sky::RadianceSize p_size){
	_wasgo_Sky_wrapper_set_radiance_size(wasgo_id, p_size._get_wasgo_id());
}