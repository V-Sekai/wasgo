/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ProxyTexture.h"
Texture ProxyTexture::get_base(){
	return Texture(_wasgo_ProxyTexture_wrapper_get_base(wasgo_id));
}
void ProxyTexture::set_base(Texture p_base){
	_wasgo_ProxyTexture_wrapper_set_base(wasgo_id, p_base._get_wasgo_id());
}

ProxyTexture::ProxyTexture(WasGoID p_wasgo_id) : Texture(p_wasgo_id){
}
ProxyTexture::ProxyTexture(Texture other) : Texture(other._get_wasgo_id()){
    wasgo_id = _wasgo_ProxyTexture_constructor();
}
ProxyTexture::new_instance(){
    return ProxyTexture(_wasgo_ProxyTexture_constructor());
}