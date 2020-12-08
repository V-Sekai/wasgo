/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "MeshTexture.h"
Texture MeshTexture::get_base_texture(){
	return Texture(_wasgo_MeshTexture_wrapper_get_base_texture(wasgo_id));
}
Vector2 MeshTexture::get_image_size(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_MeshTexture_wrapper_get_image_size(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Mesh MeshTexture::get_mesh(){
	return Mesh(_wasgo_MeshTexture_wrapper_get_mesh(wasgo_id));
}
void MeshTexture::set_base_texture(Texture p_texture){
	_wasgo_MeshTexture_wrapper_set_base_texture(wasgo_id, p_texture._get_wasgo_id());
}
void MeshTexture::set_image_size(Vector2 p_size){

    Variant wasgo_var_size = p_size;
    uint8_t wasgo_buffer_size[12];
    int wasgo_size_size = 12;
    encode_variant(wasgo_var_size, wasgo_buffer_size, wasgo_size_size);
    
	_wasgo_MeshTexture_wrapper_set_image_size(wasgo_id, wasgo_buffer_size, wasgo_size_size);
}
void MeshTexture::set_mesh(Mesh p_mesh){
	_wasgo_MeshTexture_wrapper_set_mesh(wasgo_id, p_mesh._get_wasgo_id());
}

MeshTexture::MeshTexture(WasGoID p_wasgo_id) : Texture(p_wasgo_id){
}
MeshTexture::MeshTexture(Texture other) : Texture(other._get_wasgo_id()){
}
MeshTexture::MeshTexture():Texture(){
}
MeshTexture MeshTexture::new_instance(){
    return MeshTexture(_wasgo_MeshTexture_constructor());
}
WasGoID MeshTexture::_get_wasgo_id(){
    return wasgo_id;
}
MeshTexture::operator bool(){
    return (bool) wasgo_id;
}
