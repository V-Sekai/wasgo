/* THIS FILE IS GENERATED */
#include "ProxyTexture.h"
Texture ProxyTexture::get_base(){
	return Texture::from_wasgo_id(_wasgo_ProxyTexture_wrapper_get_base(wasgo_id));
}
void ProxyTexture::set_base(Texture p_base){
	_wasgo_ProxyTexture_wrapper_set_base(wasgo_id, ((Variant) p_base).get_wasgo_id());
}