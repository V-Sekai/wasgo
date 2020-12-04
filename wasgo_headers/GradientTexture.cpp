/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "GradientTexture.h"
Gradient GradientTexture::get_gradient(){
	return Gradient(_wasgo_GradientTexture_wrapper_get_gradient(wasgo_id));
}
void GradientTexture::set_gradient(Gradient p_gradient){
	_wasgo_GradientTexture_wrapper_set_gradient(wasgo_id, p_gradient._get_wasgo_id());
}
void GradientTexture::set_width(int p_width){
	_wasgo_GradientTexture_wrapper_set_width(wasgo_id, p_width);
}

GradientTexture::GradientTexture(WasGoId p_wasgo_id) : Texture(p_wasgo_id){
}
GradientTexture::GradientTexture(Texture other) : Texture(other._get_wasgo_id()){
    wasgo_id = _wasgo_GradientTexture_constructor();
}
GradientTexture::new_instance(){
    return GradientTexture(_wasgo_GradientTexture_constructor());
}