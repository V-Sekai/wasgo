/* THIS FILE IS GENERATED */
#include "Polygon2D.h"
void Polygon2D::add_bone(NodePath p_path, PoolRealArray p_weights){
	_wasgo_Polygon2D_wrapper_add_bone(wasgo_id, ((Variant) p_path).get_wasgo_id(), ((Variant) p_weights).get_wasgo_id());
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
	return NodePath::from_wasgo_id(_wasgo_Polygon2D_wrapper_get_bone_path(wasgo_id, p_index));
}
PoolRealArray Polygon2D::get_bone_weights(int p_index){
	return PoolRealArray::from_wasgo_id(_wasgo_Polygon2D_wrapper_get_bone_weights(wasgo_id, p_index));
}
Color Polygon2D::get_color(){
	return Color::from_wasgo_id(_wasgo_Polygon2D_wrapper_get_color(wasgo_id));
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
	return Vector2::from_wasgo_id(_wasgo_Polygon2D_wrapper_get_offset(wasgo_id));
}
PoolVector2Array Polygon2D::get_polygon(){
	return PoolVector2Array::from_wasgo_id(_wasgo_Polygon2D_wrapper_get_polygon(wasgo_id));
}
Array Polygon2D::get_polygons(){
	return Array::from_wasgo_id(_wasgo_Polygon2D_wrapper_get_polygons(wasgo_id));
}
NodePath Polygon2D::get_skeleton(){
	return NodePath::from_wasgo_id(_wasgo_Polygon2D_wrapper_get_skeleton(wasgo_id));
}
Texture Polygon2D::get_texture(){
	return Texture::from_wasgo_id(_wasgo_Polygon2D_wrapper_get_texture(wasgo_id));
}
Vector2 Polygon2D::get_texture_offset(){
	return Vector2::from_wasgo_id(_wasgo_Polygon2D_wrapper_get_texture_offset(wasgo_id));
}
float Polygon2D::get_texture_rotation(){
	return (float) _wasgo_Polygon2D_wrapper_get_texture_rotation(wasgo_id);
}
float Polygon2D::get_texture_rotation_degrees(){
	return (float) _wasgo_Polygon2D_wrapper_get_texture_rotation_degrees(wasgo_id);
}
Vector2 Polygon2D::get_texture_scale(){
	return Vector2::from_wasgo_id(_wasgo_Polygon2D_wrapper_get_texture_scale(wasgo_id));
}
PoolVector2Array Polygon2D::get_uv(){
	return PoolVector2Array::from_wasgo_id(_wasgo_Polygon2D_wrapper_get_uv(wasgo_id));
}
PoolColorArray Polygon2D::get_vertex_colors(){
	return PoolColorArray::from_wasgo_id(_wasgo_Polygon2D_wrapper_get_vertex_colors(wasgo_id));
}
void Polygon2D::set_antialiased(bool p_antialiased){
	_wasgo_Polygon2D_wrapper_set_antialiased(wasgo_id, p_antialiased);
}
void Polygon2D::set_bone_path(int p_index, NodePath p_path){
	_wasgo_Polygon2D_wrapper_set_bone_path(wasgo_id, p_index, ((Variant) p_path).get_wasgo_id());
}
void Polygon2D::set_bone_weights(int p_index, PoolRealArray p_weights){
	_wasgo_Polygon2D_wrapper_set_bone_weights(wasgo_id, p_index, ((Variant) p_weights).get_wasgo_id());
}
void Polygon2D::set_color(Color p_color){
	_wasgo_Polygon2D_wrapper_set_color(wasgo_id, ((Variant) p_color).get_wasgo_id());
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
	_wasgo_Polygon2D_wrapper_set_offset(wasgo_id, ((Variant) p_offset).get_wasgo_id());
}
void Polygon2D::set_polygon(PoolVector2Array p_polygon){
	_wasgo_Polygon2D_wrapper_set_polygon(wasgo_id, ((Variant) p_polygon).get_wasgo_id());
}
void Polygon2D::set_polygons(Array p_polygons){
	_wasgo_Polygon2D_wrapper_set_polygons(wasgo_id, ((Variant) p_polygons).get_wasgo_id());
}
void Polygon2D::set_skeleton(NodePath p_skeleton){
	_wasgo_Polygon2D_wrapper_set_skeleton(wasgo_id, ((Variant) p_skeleton).get_wasgo_id());
}
void Polygon2D::set_texture(Texture p_texture){
	_wasgo_Polygon2D_wrapper_set_texture(wasgo_id, ((Variant) p_texture).get_wasgo_id());
}
void Polygon2D::set_texture_offset(Vector2 p_texture_offset){
	_wasgo_Polygon2D_wrapper_set_texture_offset(wasgo_id, ((Variant) p_texture_offset).get_wasgo_id());
}
void Polygon2D::set_texture_rotation(float p_texture_rotation){
	_wasgo_Polygon2D_wrapper_set_texture_rotation(wasgo_id, p_texture_rotation);
}
void Polygon2D::set_texture_rotation_degrees(float p_texture_rotation){
	_wasgo_Polygon2D_wrapper_set_texture_rotation_degrees(wasgo_id, p_texture_rotation);
}
void Polygon2D::set_texture_scale(Vector2 p_texture_scale){
	_wasgo_Polygon2D_wrapper_set_texture_scale(wasgo_id, ((Variant) p_texture_scale).get_wasgo_id());
}
void Polygon2D::set_uv(PoolVector2Array p_uv){
	_wasgo_Polygon2D_wrapper_set_uv(wasgo_id, ((Variant) p_uv).get_wasgo_id());
}
void Polygon2D::set_vertex_colors(PoolColorArray p_vertex_colors){
	_wasgo_Polygon2D_wrapper_set_vertex_colors(wasgo_id, ((Variant) p_vertex_colors).get_wasgo_id());
}