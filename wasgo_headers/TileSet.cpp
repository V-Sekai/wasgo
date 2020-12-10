/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "TileSet.h"
void TileSet::autotile_clear_bitmask_map(int p_id){
	_wasgo_TileSet_wrapper_autotile_clear_bitmask_map(wasgo_id, p_id);
}
int TileSet::autotile_get_bitmask(int p_id, Vector2 p_coord){

    Variant wasgo_var_coord = p_coord;
    uint8_t wasgo_buffer_coord[12];
    int wasgo_size_coord = 12;
    encode_variant(wasgo_var_coord, wasgo_buffer_coord, wasgo_size_coord);
    
	return (int) _wasgo_TileSet_wrapper_autotile_get_bitmask(wasgo_id, p_id, wasgo_buffer_coord, wasgo_size_coord, wasgo_size_coord);
}
TileSet::BitmaskMode TileSet::autotile_get_bitmask_mode(int p_id){
	return TileSet::BitmaskMode(_wasgo_TileSet_wrapper_autotile_get_bitmask_mode(wasgo_id, p_id));
}
Vector2 TileSet::autotile_get_icon_coordinate(int p_id){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_TileSet_wrapper_autotile_get_icon_coordinate(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_id);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
OccluderPolygon2D TileSet::autotile_get_light_occluder(int p_id, Vector2 p_coord){

    Variant wasgo_var_coord = p_coord;
    uint8_t wasgo_buffer_coord[12];
    int wasgo_size_coord = 12;
    encode_variant(wasgo_var_coord, wasgo_buffer_coord, wasgo_size_coord);
    
	return OccluderPolygon2D(_wasgo_TileSet_wrapper_autotile_get_light_occluder(wasgo_id, p_id, wasgo_buffer_coord, wasgo_size_coord, wasgo_size_coord));
}
NavigationPolygon TileSet::autotile_get_navigation_polygon(int p_id, Vector2 p_coord){

    Variant wasgo_var_coord = p_coord;
    uint8_t wasgo_buffer_coord[12];
    int wasgo_size_coord = 12;
    encode_variant(wasgo_var_coord, wasgo_buffer_coord, wasgo_size_coord);
    
	return NavigationPolygon(_wasgo_TileSet_wrapper_autotile_get_navigation_polygon(wasgo_id, p_id, wasgo_buffer_coord, wasgo_size_coord, wasgo_size_coord));
}
Vector2 TileSet::autotile_get_size(int p_id){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_TileSet_wrapper_autotile_get_size(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_id);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
int TileSet::autotile_get_spacing(int p_id){
	return (int) _wasgo_TileSet_wrapper_autotile_get_spacing(wasgo_id, p_id);
}
int TileSet::autotile_get_subtile_priority(int p_id, Vector2 p_coord){

    Variant wasgo_var_coord = p_coord;
    uint8_t wasgo_buffer_coord[12];
    int wasgo_size_coord = 12;
    encode_variant(wasgo_var_coord, wasgo_buffer_coord, wasgo_size_coord);
    
	return (int) _wasgo_TileSet_wrapper_autotile_get_subtile_priority(wasgo_id, p_id, wasgo_buffer_coord, wasgo_size_coord, wasgo_size_coord);
}
int TileSet::autotile_get_z_index(int p_id, Vector2 p_coord){

    Variant wasgo_var_coord = p_coord;
    uint8_t wasgo_buffer_coord[12];
    int wasgo_size_coord = 12;
    encode_variant(wasgo_var_coord, wasgo_buffer_coord, wasgo_size_coord);
    
	return (int) _wasgo_TileSet_wrapper_autotile_get_z_index(wasgo_id, p_id, wasgo_buffer_coord, wasgo_size_coord, wasgo_size_coord);
}
void TileSet::autotile_set_bitmask(int p_id, Vector2 p_bitmask, int p_flag){

    Variant wasgo_var_bitmask = p_bitmask;
    uint8_t wasgo_buffer_bitmask[12];
    int wasgo_size_bitmask = 12;
    encode_variant(wasgo_var_bitmask, wasgo_buffer_bitmask, wasgo_size_bitmask);
    
	_wasgo_TileSet_wrapper_autotile_set_bitmask(wasgo_id, p_id, wasgo_buffer_bitmask, wasgo_size_bitmask, wasgo_size_bitmask, p_flag);
}
void TileSet::autotile_set_bitmask_mode(int p_id, TileSet::BitmaskMode p_mode){
	_wasgo_TileSet_wrapper_autotile_set_bitmask_mode(wasgo_id, p_id, p_mode._get_wasgo_id());
}
void TileSet::autotile_set_icon_coordinate(int p_id, Vector2 p_coord){

    Variant wasgo_var_coord = p_coord;
    uint8_t wasgo_buffer_coord[12];
    int wasgo_size_coord = 12;
    encode_variant(wasgo_var_coord, wasgo_buffer_coord, wasgo_size_coord);
    
	_wasgo_TileSet_wrapper_autotile_set_icon_coordinate(wasgo_id, p_id, wasgo_buffer_coord, wasgo_size_coord, wasgo_size_coord);
}
void TileSet::autotile_set_light_occluder(int p_id, OccluderPolygon2D p_light_occluder, Vector2 p_coord){

    Variant wasgo_var_coord = p_coord;
    uint8_t wasgo_buffer_coord[12];
    int wasgo_size_coord = 12;
    encode_variant(wasgo_var_coord, wasgo_buffer_coord, wasgo_size_coord);
    
	_wasgo_TileSet_wrapper_autotile_set_light_occluder(wasgo_id, p_id, p_light_occluder._get_wasgo_id(), -69, wasgo_buffer_coord, wasgo_size_coord);
}
void TileSet::autotile_set_navigation_polygon(int p_id, NavigationPolygon p_navigation_polygon, Vector2 p_coord){

    Variant wasgo_var_coord = p_coord;
    uint8_t wasgo_buffer_coord[12];
    int wasgo_size_coord = 12;
    encode_variant(wasgo_var_coord, wasgo_buffer_coord, wasgo_size_coord);
    
	_wasgo_TileSet_wrapper_autotile_set_navigation_polygon(wasgo_id, p_id, p_navigation_polygon._get_wasgo_id(), -69, wasgo_buffer_coord, wasgo_size_coord);
}
void TileSet::autotile_set_size(int p_id, Vector2 p_size){

    Variant wasgo_var_size = p_size;
    uint8_t wasgo_buffer_size[12];
    int wasgo_size_size = 12;
    encode_variant(wasgo_var_size, wasgo_buffer_size, wasgo_size_size);
    
	_wasgo_TileSet_wrapper_autotile_set_size(wasgo_id, p_id, wasgo_buffer_size, wasgo_size_size, wasgo_size_size);
}
void TileSet::autotile_set_spacing(int p_id, int p_spacing){
	_wasgo_TileSet_wrapper_autotile_set_spacing(wasgo_id, p_id, p_spacing);
}
void TileSet::autotile_set_subtile_priority(int p_id, Vector2 p_coord, int p_priority){

    Variant wasgo_var_coord = p_coord;
    uint8_t wasgo_buffer_coord[12];
    int wasgo_size_coord = 12;
    encode_variant(wasgo_var_coord, wasgo_buffer_coord, wasgo_size_coord);
    
	_wasgo_TileSet_wrapper_autotile_set_subtile_priority(wasgo_id, p_id, wasgo_buffer_coord, wasgo_size_coord, wasgo_size_coord, p_priority);
}
void TileSet::autotile_set_z_index(int p_id, Vector2 p_coord, int p_z_index){

    Variant wasgo_var_coord = p_coord;
    uint8_t wasgo_buffer_coord[12];
    int wasgo_size_coord = 12;
    encode_variant(wasgo_var_coord, wasgo_buffer_coord, wasgo_size_coord);
    
	_wasgo_TileSet_wrapper_autotile_set_z_index(wasgo_id, p_id, wasgo_buffer_coord, wasgo_size_coord, wasgo_size_coord, p_z_index);
}
void TileSet::clear(){
	_wasgo_TileSet_wrapper_clear(wasgo_id);
}
void TileSet::create_tile(int p_id){
	_wasgo_TileSet_wrapper_create_tile(wasgo_id, p_id);
}
int TileSet::find_tile_by_name(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = 10 + String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return (int) _wasgo_TileSet_wrapper_find_tile_by_name(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
int TileSet::get_last_unused_tile_id(){
	return (int) _wasgo_TileSet_wrapper_get_last_unused_tile_id(wasgo_id);
}
Array TileSet::get_tiles_ids(){
	return Array(_wasgo_TileSet_wrapper_get_tiles_ids(wasgo_id));
}
void TileSet::remove_tile(int p_id){
	_wasgo_TileSet_wrapper_remove_tile(wasgo_id, p_id);
}
void TileSet::tile_add_shape(int p_id, Shape2D p_shape, Transform2D p_shape_transform, bool p_one_way, Vector2 p_autotile_coord){

    Variant wasgo_var_shape_transform = p_shape_transform;
    uint8_t wasgo_buffer_shape_transform[28];
    int wasgo_size_shape_transform = 28;
    encode_variant(wasgo_var_shape_transform, wasgo_buffer_shape_transform, wasgo_size_shape_transform);
    

    Variant wasgo_var_autotile_coord = p_autotile_coord;
    uint8_t wasgo_buffer_autotile_coord[12];
    int wasgo_size_autotile_coord = 12;
    encode_variant(wasgo_var_autotile_coord, wasgo_buffer_autotile_coord, wasgo_size_autotile_coord);
    
	_wasgo_TileSet_wrapper_tile_add_shape(wasgo_id, p_id, p_shape._get_wasgo_id(), -69, wasgo_buffer_shape_transform, wasgo_size_shape_transform, p_one_way, wasgo_buffer_autotile_coord, wasgo_size_autotile_coord);
}
OccluderPolygon2D TileSet::tile_get_light_occluder(int p_id){
	return OccluderPolygon2D(_wasgo_TileSet_wrapper_tile_get_light_occluder(wasgo_id, p_id));
}
ShaderMaterial TileSet::tile_get_material(int p_id){
	return ShaderMaterial(_wasgo_TileSet_wrapper_tile_get_material(wasgo_id, p_id));
}
Color TileSet::tile_get_modulate(int p_id){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_TileSet_wrapper_tile_get_modulate(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_id);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
String TileSet::tile_get_name(int p_id){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_TileSet_wrapper_tile_get_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_id);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
NavigationPolygon TileSet::tile_get_navigation_polygon(int p_id){
	return NavigationPolygon(_wasgo_TileSet_wrapper_tile_get_navigation_polygon(wasgo_id, p_id));
}
Vector2 TileSet::tile_get_navigation_polygon_offset(int p_id){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_TileSet_wrapper_tile_get_navigation_polygon_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_id);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Texture TileSet::tile_get_normal_map(int p_id){
	return Texture(_wasgo_TileSet_wrapper_tile_get_normal_map(wasgo_id, p_id));
}
Vector2 TileSet::tile_get_occluder_offset(int p_id){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_TileSet_wrapper_tile_get_occluder_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_id);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Rect2 TileSet::tile_get_region(int p_id){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_TileSet_wrapper_tile_get_region(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_id);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Shape2D TileSet::tile_get_shape(int p_id, int p_shape_id){
	return Shape2D(_wasgo_TileSet_wrapper_tile_get_shape(wasgo_id, p_id, p_shape_id));
}
int TileSet::tile_get_shape_count(int p_id){
	return (int) _wasgo_TileSet_wrapper_tile_get_shape_count(wasgo_id, p_id);
}
Vector2 TileSet::tile_get_shape_offset(int p_id, int p_shape_id){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_TileSet_wrapper_tile_get_shape_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_id, p_shape_id);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
bool TileSet::tile_get_shape_one_way(int p_id, int p_shape_id){
	return (bool) _wasgo_TileSet_wrapper_tile_get_shape_one_way(wasgo_id, p_id, p_shape_id);
}
float TileSet::tile_get_shape_one_way_margin(int p_id, int p_shape_id){
	return (float) _wasgo_TileSet_wrapper_tile_get_shape_one_way_margin(wasgo_id, p_id, p_shape_id);
}
Transform2D TileSet::tile_get_shape_transform(int p_id, int p_shape_id){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_TileSet_wrapper_tile_get_shape_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_id, p_shape_id);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Array TileSet::tile_get_shapes(int p_id){
	return Array(_wasgo_TileSet_wrapper_tile_get_shapes(wasgo_id, p_id));
}
Texture TileSet::tile_get_texture(int p_id){
	return Texture(_wasgo_TileSet_wrapper_tile_get_texture(wasgo_id, p_id));
}
Vector2 TileSet::tile_get_texture_offset(int p_id){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_TileSet_wrapper_tile_get_texture_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_id);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
TileSet::TileMode TileSet::tile_get_tile_mode(int p_id){
	return TileSet::TileMode(_wasgo_TileSet_wrapper_tile_get_tile_mode(wasgo_id, p_id));
}
int TileSet::tile_get_z_index(int p_id){
	return (int) _wasgo_TileSet_wrapper_tile_get_z_index(wasgo_id, p_id);
}
void TileSet::tile_set_light_occluder(int p_id, OccluderPolygon2D p_light_occluder){
	_wasgo_TileSet_wrapper_tile_set_light_occluder(wasgo_id, p_id, p_light_occluder._get_wasgo_id());
}
void TileSet::tile_set_material(int p_id, ShaderMaterial p_material){
	_wasgo_TileSet_wrapper_tile_set_material(wasgo_id, p_id, p_material._get_wasgo_id());
}
void TileSet::tile_set_modulate(int p_id, Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_TileSet_wrapper_tile_set_modulate(wasgo_id, p_id, wasgo_buffer_color, wasgo_size_color, wasgo_size_color);
}
void TileSet::tile_set_name(int p_id, String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = 10 + String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_TileSet_wrapper_tile_set_name(wasgo_id, p_id, wasgo_buffer_name, wasgo_size_name, wasgo_size_name);
}
void TileSet::tile_set_navigation_polygon(int p_id, NavigationPolygon p_navigation_polygon){
	_wasgo_TileSet_wrapper_tile_set_navigation_polygon(wasgo_id, p_id, p_navigation_polygon._get_wasgo_id());
}
void TileSet::tile_set_navigation_polygon_offset(int p_id, Vector2 p_navigation_polygon_offset){

    Variant wasgo_var_navigation_polygon_offset = p_navigation_polygon_offset;
    uint8_t wasgo_buffer_navigation_polygon_offset[12];
    int wasgo_size_navigation_polygon_offset = 12;
    encode_variant(wasgo_var_navigation_polygon_offset, wasgo_buffer_navigation_polygon_offset, wasgo_size_navigation_polygon_offset);
    
	_wasgo_TileSet_wrapper_tile_set_navigation_polygon_offset(wasgo_id, p_id, wasgo_buffer_navigation_polygon_offset, wasgo_size_navigation_polygon_offset, wasgo_size_navigation_polygon_offset);
}
void TileSet::tile_set_normal_map(int p_id, Texture p_normal_map){
	_wasgo_TileSet_wrapper_tile_set_normal_map(wasgo_id, p_id, p_normal_map._get_wasgo_id());
}
void TileSet::tile_set_occluder_offset(int p_id, Vector2 p_occluder_offset){

    Variant wasgo_var_occluder_offset = p_occluder_offset;
    uint8_t wasgo_buffer_occluder_offset[12];
    int wasgo_size_occluder_offset = 12;
    encode_variant(wasgo_var_occluder_offset, wasgo_buffer_occluder_offset, wasgo_size_occluder_offset);
    
	_wasgo_TileSet_wrapper_tile_set_occluder_offset(wasgo_id, p_id, wasgo_buffer_occluder_offset, wasgo_size_occluder_offset, wasgo_size_occluder_offset);
}
void TileSet::tile_set_region(int p_id, Rect2 p_region){

    Variant wasgo_var_region = p_region;
    uint8_t wasgo_buffer_region[20];
    int wasgo_size_region = 20;
    encode_variant(wasgo_var_region, wasgo_buffer_region, wasgo_size_region);
    
	_wasgo_TileSet_wrapper_tile_set_region(wasgo_id, p_id, wasgo_buffer_region, wasgo_size_region, wasgo_size_region);
}
void TileSet::tile_set_shape(int p_id, int p_shape_id, Shape2D p_shape){
	_wasgo_TileSet_wrapper_tile_set_shape(wasgo_id, p_id, p_shape_id, -69, p_shape._get_wasgo_id());
}
void TileSet::tile_set_shape_offset(int p_id, int p_shape_id, Vector2 p_shape_offset){

    Variant wasgo_var_shape_offset = p_shape_offset;
    uint8_t wasgo_buffer_shape_offset[12];
    int wasgo_size_shape_offset = 12;
    encode_variant(wasgo_var_shape_offset, wasgo_buffer_shape_offset, wasgo_size_shape_offset);
    
	_wasgo_TileSet_wrapper_tile_set_shape_offset(wasgo_id, p_id, p_shape_id, -69, wasgo_buffer_shape_offset, wasgo_size_shape_offset);
}
void TileSet::tile_set_shape_one_way(int p_id, int p_shape_id, bool p_one_way){
	_wasgo_TileSet_wrapper_tile_set_shape_one_way(wasgo_id, p_id, p_shape_id, -69, p_one_way);
}
void TileSet::tile_set_shape_one_way_margin(int p_id, int p_shape_id, float p_one_way){
	_wasgo_TileSet_wrapper_tile_set_shape_one_way_margin(wasgo_id, p_id, p_shape_id, -69, p_one_way);
}
void TileSet::tile_set_shape_transform(int p_id, int p_shape_id, Transform2D p_shape_transform){

    Variant wasgo_var_shape_transform = p_shape_transform;
    uint8_t wasgo_buffer_shape_transform[28];
    int wasgo_size_shape_transform = 28;
    encode_variant(wasgo_var_shape_transform, wasgo_buffer_shape_transform, wasgo_size_shape_transform);
    
	_wasgo_TileSet_wrapper_tile_set_shape_transform(wasgo_id, p_id, p_shape_id, -69, wasgo_buffer_shape_transform, wasgo_size_shape_transform);
}
void TileSet::tile_set_shapes(int p_id, Array p_shapes){
	_wasgo_TileSet_wrapper_tile_set_shapes(wasgo_id, p_id, p_shapes._get_wasgo_id());
}
void TileSet::tile_set_texture(int p_id, Texture p_texture){
	_wasgo_TileSet_wrapper_tile_set_texture(wasgo_id, p_id, p_texture._get_wasgo_id());
}
void TileSet::tile_set_texture_offset(int p_id, Vector2 p_texture_offset){

    Variant wasgo_var_texture_offset = p_texture_offset;
    uint8_t wasgo_buffer_texture_offset[12];
    int wasgo_size_texture_offset = 12;
    encode_variant(wasgo_var_texture_offset, wasgo_buffer_texture_offset, wasgo_size_texture_offset);
    
	_wasgo_TileSet_wrapper_tile_set_texture_offset(wasgo_id, p_id, wasgo_buffer_texture_offset, wasgo_size_texture_offset, wasgo_size_texture_offset);
}
void TileSet::tile_set_tile_mode(int p_id, TileSet::TileMode p_tilemode){
	_wasgo_TileSet_wrapper_tile_set_tile_mode(wasgo_id, p_id, p_tilemode._get_wasgo_id());
}
void TileSet::tile_set_z_index(int p_id, int p_z_index){
	_wasgo_TileSet_wrapper_tile_set_z_index(wasgo_id, p_id, p_z_index);
}

TileSet::TileSet(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
TileSet::TileSet(Resource other) : Resource(other._get_wasgo_id()){
}
TileSet::TileSet():Resource(){
}
TileSet TileSet::new_instance(){
    return TileSet(_wasgo_TileSet_constructor());
}
WasGoID TileSet::_get_wasgo_id(){
    return wasgo_id;
}
TileSet::operator bool(){
    return (bool) wasgo_id;
}
