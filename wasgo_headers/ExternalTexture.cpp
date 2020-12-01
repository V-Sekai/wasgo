/* THIS FILE IS GENERATED */
#include "ExternalTexture.h"
int ExternalTexture::get_external_texture_id(){
	return (int) _wasgo_ExternalTexture_wrapper_get_external_texture_id(wasgo_id);
}
void ExternalTexture::set_size(Vector2 p_size){
	_wasgo_ExternalTexture_wrapper_set_size(wasgo_id, ((Variant) p_size).get_wasgo_id());
}