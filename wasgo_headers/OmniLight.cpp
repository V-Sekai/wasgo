/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "OmniLight.h"
OmniLight::ShadowDetail OmniLight::get_shadow_detail(){
	return OmniLight::ShadowDetail(_wasgo_OmniLight_wrapper_get_shadow_detail(wasgo_id));
}
OmniLight::ShadowMode OmniLight::get_shadow_mode(){
	return OmniLight::ShadowMode(_wasgo_OmniLight_wrapper_get_shadow_mode(wasgo_id));
}
void OmniLight::set_shadow_detail(OmniLight::ShadowDetail p_detail){
	_wasgo_OmniLight_wrapper_set_shadow_detail(wasgo_id, p_detail._get_wasgo_id());
}
void OmniLight::set_shadow_mode(OmniLight::ShadowMode p_mode){
	_wasgo_OmniLight_wrapper_set_shadow_mode(wasgo_id, p_mode._get_wasgo_id());
}

OmniLight::OmniLight(WasGoID p_wasgo_id) : Light(p_wasgo_id){
}
OmniLight::OmniLight(Light other) : Light(other._get_wasgo_id()){
    wasgo_id = _wasgo_OmniLight_constructor();
}
OmniLight::new_instance(){
    return OmniLight(_wasgo_OmniLight_constructor());
}