/* THIS FILE IS GENERATED */
#include "GradientTexture.h"
Gradient GradientTexture::get_gradient(){
	return Gradient::from_wasgo_id(_wasgo_GradientTexture_wrapper_get_gradient(wasgo_id));
}
void GradientTexture::set_gradient(Gradient p_gradient){
	_wasgo_GradientTexture_wrapper_set_gradient(wasgo_id, ((Variant) p_gradient).get_wasgo_id());
}
void GradientTexture::set_width(int p_width){
	_wasgo_GradientTexture_wrapper_set_width(wasgo_id, p_width);
}