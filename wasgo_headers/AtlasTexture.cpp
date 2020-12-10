/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AtlasTexture.h"
Texture AtlasTexture::get_atlas(){
	return Texture(_wasgo_AtlasTexture_wrapper_get_atlas(wasgo_id));
}
Rect2 AtlasTexture::get_margin(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_AtlasTexture_wrapper_get_margin(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Rect2 AtlasTexture::get_region(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_AtlasTexture_wrapper_get_region(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
bool AtlasTexture::has_filter_clip(){
	return (bool) _wasgo_AtlasTexture_wrapper_has_filter_clip(wasgo_id);
}
void AtlasTexture::set_atlas(Texture p_atlas){
	_wasgo_AtlasTexture_wrapper_set_atlas(wasgo_id, p_atlas._get_wasgo_id());
}
void AtlasTexture::set_filter_clip(bool p_enable){
	_wasgo_AtlasTexture_wrapper_set_filter_clip(wasgo_id, p_enable);
}
void AtlasTexture::set_margin(Rect2 p_margin){

    Variant wasgo_var_margin = p_margin;
    uint8_t wasgo_buffer_margin[20];
    int wasgo_size_margin = 20;
    encode_variant(wasgo_var_margin, wasgo_buffer_margin, wasgo_size_margin);
    
	_wasgo_AtlasTexture_wrapper_set_margin(wasgo_id, wasgo_buffer_margin, wasgo_size_margin);
}
void AtlasTexture::set_region(Rect2 p_region){

    Variant wasgo_var_region = p_region;
    uint8_t wasgo_buffer_region[20];
    int wasgo_size_region = 20;
    encode_variant(wasgo_var_region, wasgo_buffer_region, wasgo_size_region);
    
	_wasgo_AtlasTexture_wrapper_set_region(wasgo_id, wasgo_buffer_region, wasgo_size_region);
}

AtlasTexture::AtlasTexture(WasGoID p_wasgo_id) : Texture(p_wasgo_id){
}
AtlasTexture::AtlasTexture(Texture other) : Texture(other._get_wasgo_id()){
}
AtlasTexture::AtlasTexture():Texture(){
}
AtlasTexture AtlasTexture::new_instance(){
    return AtlasTexture(_wasgo_AtlasTexture_constructor());
}
WasGoID AtlasTexture::_get_wasgo_id(){
    return wasgo_id;
}
AtlasTexture::operator bool(){
    return (bool) wasgo_id;
}
