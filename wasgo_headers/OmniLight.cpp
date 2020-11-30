/* THIS FILE IS GENERATED */
#include "OmniLight.h"
OmniLight::ShadowDetail OmniLight::get_shadow_detail(){
	return OmniLight::ShadowDetail::from_wasgo_id(_wasgo_OmniLight_wrapper_get_shadow_detail(wasgo_id));
}
OmniLight::ShadowMode OmniLight::get_shadow_mode(){
	return OmniLight::ShadowMode::from_wasgo_id(_wasgo_OmniLight_wrapper_get_shadow_mode(wasgo_id));
}
void OmniLight::set_shadow_detail(OmniLight::ShadowDetail p_detail){
	_wasgo_OmniLight_wrapper_set_shadow_detail(wasgo_id, ((Variant) detail).get_wasgo_id());
}
void OmniLight::set_shadow_mode(OmniLight::ShadowMode p_mode){
	_wasgo_OmniLight_wrapper_set_shadow_mode(wasgo_id, ((Variant) mode).get_wasgo_id());
}

OmniLight::OmniLight(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
OmniLight::~OmniLight(){
}