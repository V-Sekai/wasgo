/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "DirectionalLight.h"
DirectionalLight::ShadowDepthRange DirectionalLight::get_shadow_depth_range(){
	return DirectionalLight::ShadowDepthRange(_wasgo_DirectionalLight_wrapper_get_shadow_depth_range(wasgo_id));
}
DirectionalLight::ShadowMode DirectionalLight::get_shadow_mode(){
	return DirectionalLight::ShadowMode(_wasgo_DirectionalLight_wrapper_get_shadow_mode(wasgo_id));
}
bool DirectionalLight::is_blend_splits_enabled(){
	return (bool) _wasgo_DirectionalLight_wrapper_is_blend_splits_enabled(wasgo_id);
}
void DirectionalLight::set_blend_splits(bool p_enabled){
	_wasgo_DirectionalLight_wrapper_set_blend_splits(wasgo_id, p_enabled);
}
void DirectionalLight::set_shadow_depth_range(DirectionalLight::ShadowDepthRange p_mode){
	_wasgo_DirectionalLight_wrapper_set_shadow_depth_range(wasgo_id, p_mode._get_wasgo_id());
}
void DirectionalLight::set_shadow_mode(DirectionalLight::ShadowMode p_mode){
	_wasgo_DirectionalLight_wrapper_set_shadow_mode(wasgo_id, p_mode._get_wasgo_id());
}

DirectionalLight::DirectionalLight(WasGoID p_wasgo_id) : Light(p_wasgo_id){
}
DirectionalLight::DirectionalLight(Light other) : Light(other._get_wasgo_id()){
    wasgo_id = _wasgo_DirectionalLight_constructor();
}
DirectionalLight::new_instance(){
    return DirectionalLight(_wasgo_DirectionalLight_constructor());
}