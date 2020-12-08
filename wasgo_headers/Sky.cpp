/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Sky.h"
Sky::RadianceSize Sky::get_radiance_size(){
	return Sky::RadianceSize(_wasgo_Sky_wrapper_get_radiance_size(wasgo_id));
}
void Sky::set_radiance_size(Sky::RadianceSize p_size){
	_wasgo_Sky_wrapper_set_radiance_size(wasgo_id, p_size._get_wasgo_id());
}

Sky::Sky(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
Sky::Sky(Resource other) : Resource(other._get_wasgo_id()){
}
Sky::Sky():Resource(){
}
Sky Sky::new_instance(){
    return Sky(_wasgo_Sky_constructor());
}
WasGoID Sky::_get_wasgo_id(){
    return wasgo_id;
}
Sky::operator bool(){
    return (bool) wasgo_id;
}
