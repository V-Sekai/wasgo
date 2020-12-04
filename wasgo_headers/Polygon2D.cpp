/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Polygon2D.h"
void Polygon2D::add_bone(NodePath p_path, PoolRealArray p_weights){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	_wasgo_Polygon2D_wrapper_add_bone(wasgo_id, wasgo_buffer_path, wasgo_size_path, p_weights._get_wasgo_id());
}
void Polygon2D::clear_bones(){
	_wasgo_Polygon2D_wrapper_clear_bones(wasgo_id);
}
void Polygon2D::erase_bone(int p_index){
	_wasgo_Polygon2D_wrapper_erase_bone(wasgo_id, p_index);
}
bool Polygon2D::get_antialiased(){
	return (bool) _wasgo_Polygon2D_wrapper_get_antialiased(wasgo_id);
}
int Polygon2D::get_bone_count(){
	return (int) _wasgo_Polygon2D_wrapper_get_bone_count(wasgo_id);
}
NodePath Polygon2D::get_bone_path(int p_index){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Polygon2D_wrapper_get_bone_path(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_index);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (NodePath) wasgo_ret;
    
}
PoolRealArray Polygon2D::get_bone_weights(int p_index){
	return PoolRealArray(_wasgo_Polygon2D_wrapper_get_bone_weights(wasgo_id, p_index));
}
Color Polygon2D::get_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Polygon2D_wrapper_get_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
int Polygon2D::get_internal_vertex_count(){
	return (int) _wasgo_Polygon2D_wrapper_get_internal_vertex_count(wasgo_id);
}
bool Polygon2D::get_invert(){
	return (bool) _wasgo_Polygon2D_wrapper_get_invert(wasgo_id);
}
float Polygon2D::get_invert_border(){
	return (float) _wasgo_Polygon2D_wrapper_get_invert_border(wasgo_id);
}
Vector2 Polygon2D::get_offset(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Polygon2D_wrapper_get_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
PoolVector2Array Polygon2D::get_polygon(){
	return PoolVector2Array(_wasgo_Polygon2D_wrapper_get_polygon(wasgo_id));
}
Array Polygon2D::get_polygons(){
	return Array(_wasgo_Polygon2D_wrapper_get_polygons(wasgo_id));
}
NodePath Polygon2D::get_skeleton(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Polygon2D_wrapper_get_skeleton(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (NodePath) wasgo_ret;
    
}
Texture Polygon2D::get_texture(){
	return Texture(_wasgo_Polygon2D_wrapper_get_texture(wasgo_id));
}
Vector2 Polygon2D::get_texture_offset(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Polygon2D_wrapper_get_texture_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
float Polygon2D::get_texture_rotation(){
	return (float) _wasgo_Polygon2D_wrapper_get_texture_rotation(wasgo_id);
}
float Polygon2D::get_texture_rotation_degrees(){
	return (float) _wasgo_Polygon2D_wrapper_get_texture_rotation_degrees(wasgo_id);
}
Vector2 Polygon2D::get_texture_scale(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Polygon2D_wrapper_get_texture_scale(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
PoolVector2Array Polygon2D::get_uv(){
	return PoolVector2Array(_wasgo_Polygon2D_wrapper_get_uv(wasgo_id));
}
PoolColorArray Polygon2D::get_vertex_colors(){
	return PoolColorArray(_wasgo_Polygon2D_wrapper_get_vertex_colors(wasgo_id));
}
void Polygon2D::set_antialiased(bool p_antialiased){
	_wasgo_Polygon2D_wrapper_set_antialiased(wasgo_id, p_antialiased);
}
void Polygon2D::set_bone_path(int p_index, NodePath p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	_wasgo_Polygon2D_wrapper_set_bone_path(wasgo_id, p_index, wasgo_buffer_path, wasgo_size_path);
}
void Polygon2D::set_bone_weights(int p_index, PoolRealArray p_weights){
	_wasgo_Polygon2D_wrapper_set_bone_weights(wasgo_id, p_index, p_weights._get_wasgo_id());
}
void Polygon2D::set_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_Polygon2D_wrapper_set_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void Polygon2D::set_internal_vertex_count(int p_internal_vertex_count){
	_wasgo_Polygon2D_wrapper_set_internal_vertex_count(wasgo_id, p_internal_vertex_count);
}
void Polygon2D::set_invert(bool p_invert){
	_wasgo_Polygon2D_wrapper_set_invert(wasgo_id, p_invert);
}
void Polygon2D::set_invert_border(float p_invert_border){
	_wasgo_Polygon2D_wrapper_set_invert_border(wasgo_id, p_invert_border);
}
void Polygon2D::set_offset(Vector2 p_offset){

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[12];
    int wasgo_size_offset = 12;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    
	_wasgo_Polygon2D_wrapper_set_offset(wasgo_id, wasgo_buffer_offset, wasgo_size_offset);
}
void Polygon2D::set_polygon(PoolVector2Array p_polygon){
	_wasgo_Polygon2D_wrapper_set_polygon(wasgo_id, p_polygon._get_wasgo_id());
}
void Polygon2D::set_polygons(Array p_polygons){
	_wasgo_Polygon2D_wrapper_set_polygons(wasgo_id, p_polygons._get_wasgo_id());
}
void Polygon2D::set_skeleton(NodePath p_skeleton){

    Variant wasgo_var_skeleton = p_skeleton;
    int wasgo_size_skeleton = String(p_skeleton).size();
    uint8_t wasgo_buffer_skeleton[wasgo_size_skeleton];
    encode_variant(wasgo_var_skeleton, wasgo_buffer_skeleton, wasgo_size_skeleton);
    
	_wasgo_Polygon2D_wrapper_set_skeleton(wasgo_id, wasgo_buffer_skeleton, wasgo_size_skeleton);
}
void Polygon2D::set_texture(Texture p_texture){
	_wasgo_Polygon2D_wrapper_set_texture(wasgo_id, p_texture._get_wasgo_id());
}
void Polygon2D::set_texture_offset(Vector2 p_texture_offset){

    Variant wasgo_var_texture_offset = p_texture_offset;
    uint8_t wasgo_buffer_texture_offset[12];
    int wasgo_size_texture_offset = 12;
    encode_variant(wasgo_var_texture_offset, wasgo_buffer_texture_offset, wasgo_size_texture_offset);
    
	_wasgo_Polygon2D_wrapper_set_texture_offset(wasgo_id, wasgo_buffer_texture_offset, wasgo_size_texture_offset);
}
void Polygon2D::set_texture_rotation(float p_texture_rotation){
	_wasgo_Polygon2D_wrapper_set_texture_rotation(wasgo_id, p_texture_rotation);
}
void Polygon2D::set_texture_rotation_degrees(float p_texture_rotation){
	_wasgo_Polygon2D_wrapper_set_texture_rotation_degrees(wasgo_id, p_texture_rotation);
}
void Polygon2D::set_texture_scale(Vector2 p_texture_scale){

    Variant wasgo_var_texture_scale = p_texture_scale;
    uint8_t wasgo_buffer_texture_scale[12];
    int wasgo_size_texture_scale = 12;
    encode_variant(wasgo_var_texture_scale, wasgo_buffer_texture_scale, wasgo_size_texture_scale);
    
	_wasgo_Polygon2D_wrapper_set_texture_scale(wasgo_id, wasgo_buffer_texture_scale, wasgo_size_texture_scale);
}
void Polygon2D::set_uv(PoolVector2Array p_uv){
	_wasgo_Polygon2D_wrapper_set_uv(wasgo_id, p_uv._get_wasgo_id());
}
void Polygon2D::set_vertex_colors(PoolColorArray p_vertex_colors){
	_wasgo_Polygon2D_wrapper_set_vertex_colors(wasgo_id, p_vertex_colors._get_wasgo_id());
}

Polygon2D::Polygon2D(WasGoID p_wasgo_id) : Node2D(p_wasgo_id){
}
Polygon2D::Polygon2D(Node2D other) : Node2D(other._get_wasgo_id()){
    wasgo_id = _wasgo_Polygon2D_constructor();
}
Polygon2D::new_instance(){
    return Polygon2D(_wasgo_Polygon2D_constructor());
}