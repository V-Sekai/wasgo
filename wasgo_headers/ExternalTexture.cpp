/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ExternalTexture.h"
int ExternalTexture::get_external_texture_id(){
	return (int) _wasgo_ExternalTexture_wrapper_get_external_texture_id(wasgo_id);
}
void ExternalTexture::set_size(Vector2 p_size){

    Variant wasgo_var_size = p_size;
    uint8_t wasgo_buffer_size[12];
    int wasgo_size_size = 12;
    encode_variant(wasgo_var_size, wasgo_buffer_size, wasgo_size_size);
    
	_wasgo_ExternalTexture_wrapper_set_size(wasgo_id, wasgo_buffer_size, wasgo_size_size);
}

ExternalTexture::ExternalTexture(WasGoId p_wasgo_id) : Texture(p_wasgo_id){
}
ExternalTexture::ExternalTexture(){
    wasgo_id = _wasgo_ExternalTexture_constructor();
}
ExternalTexture::~ExternalTexture(){
    _wasgo_ExternalTexture_destructor(wasgo_id);
}