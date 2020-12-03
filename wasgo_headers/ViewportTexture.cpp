/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ViewportTexture.h"
NodePath ViewportTexture::get_viewport_path_in_scene(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_ViewportTexture_wrapper_get_viewport_path_in_scene(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (NodePath) wasgo_ret;
    
}
void ViewportTexture::set_viewport_path_in_scene(NodePath p_path){

    Variant wasgo_var_path = p_path;
    uint8_t wasgo_buffer_path[256];
    int wasgo_size_path = 256;
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	_wasgo_ViewportTexture_wrapper_set_viewport_path_in_scene(wasgo_id, wasgo_buffer_path, wasgo_size_path);
}

ViewportTexture::ViewportTexture(WasGoId p_wasgo_id) : Texture(p_wasgo_id){
}
ViewportTexture::ViewportTexture(){
    wasgo_id = _wasgo_ViewportTexture_constructor();
}
ViewportTexture::~ViewportTexture(){
    _wasgo_ViewportTexture_destructor(wasgo_id);
}