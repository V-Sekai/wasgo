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
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	_wasgo_ViewportTexture_wrapper_set_viewport_path_in_scene(wasgo_id, wasgo_buffer_path, wasgo_size_path);
}

ViewportTexture::ViewportTexture(WasGoID p_wasgo_id) : Texture(p_wasgo_id){
}
ViewportTexture::ViewportTexture(Texture other) : Texture(other._get_wasgo_id()){
}
ViewportTexture::ViewportTexture():Texture(){
}
ViewportTexture ViewportTexture::new_instance(){
    return ViewportTexture(_wasgo_ViewportTexture_constructor());
}
WasGoID ViewportTexture::_get_wasgo_id(){
    return wasgo_id;
}
ViewportTexture::operator bool(){
    return (bool) wasgo_id;
}
