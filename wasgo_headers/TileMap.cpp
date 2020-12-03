/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "TileMap.h"
void TileMap::clear(){
	_wasgo_TileMap_wrapper_clear(wasgo_id);
}
void TileMap::fix_invalid_tiles(){
	_wasgo_TileMap_wrapper_fix_invalid_tiles(wasgo_id);
}
int TileMap::get_cell(int p_x, int p_y){
	return (int) _wasgo_TileMap_wrapper_get_cell(wasgo_id, p_x, p_y);
}
Vector2 TileMap::get_cell_autotile_coord(int p_x, int p_y){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_TileMap_wrapper_get_cell_autotile_coord(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_x, p_y);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 TileMap::get_cell_size(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_TileMap_wrapper_get_cell_size(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
int TileMap::get_cellv(Vector2 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	return (int) _wasgo_TileMap_wrapper_get_cellv(wasgo_id, wasgo_buffer_position, wasgo_size_position);
}
bool TileMap::get_clip_uv(){
	return (bool) _wasgo_TileMap_wrapper_get_clip_uv(wasgo_id);
}
float TileMap::get_collision_bounce(){
	return (float) _wasgo_TileMap_wrapper_get_collision_bounce(wasgo_id);
}
float TileMap::get_collision_friction(){
	return (float) _wasgo_TileMap_wrapper_get_collision_friction(wasgo_id);
}
int TileMap::get_collision_layer(){
	return (int) _wasgo_TileMap_wrapper_get_collision_layer(wasgo_id);
}
bool TileMap::get_collision_layer_bit(int p_bit){
	return (bool) _wasgo_TileMap_wrapper_get_collision_layer_bit(wasgo_id, p_bit);
}
int TileMap::get_collision_mask(){
	return (int) _wasgo_TileMap_wrapper_get_collision_mask(wasgo_id);
}
bool TileMap::get_collision_mask_bit(int p_bit){
	return (bool) _wasgo_TileMap_wrapper_get_collision_mask_bit(wasgo_id, p_bit);
}
bool TileMap::get_collision_use_kinematic(){
	return (bool) _wasgo_TileMap_wrapper_get_collision_use_kinematic(wasgo_id);
}
bool TileMap::get_collision_use_parent(){
	return (bool) _wasgo_TileMap_wrapper_get_collision_use_parent(wasgo_id);
}
Transform2D TileMap::get_custom_transform(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_TileMap_wrapper_get_custom_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform2D) wasgo_ret;
    
}
TileMap::HalfOffset TileMap::get_half_offset(){
	return TileMap::HalfOffset(_wasgo_TileMap_wrapper_get_half_offset(wasgo_id));
}
TileMap::Mode TileMap::get_mode(){
	return TileMap::Mode(_wasgo_TileMap_wrapper_get_mode(wasgo_id));
}
int TileMap::get_occluder_light_mask(){
	return (int) _wasgo_TileMap_wrapper_get_occluder_light_mask(wasgo_id);
}
int TileMap::get_quadrant_size(){
	return (int) _wasgo_TileMap_wrapper_get_quadrant_size(wasgo_id);
}
TileMap::TileOrigin TileMap::get_tile_origin(){
	return TileMap::TileOrigin(_wasgo_TileMap_wrapper_get_tile_origin(wasgo_id));
}
TileSet TileMap::get_tileset(){
	return TileSet(_wasgo_TileMap_wrapper_get_tileset(wasgo_id));
}
Array TileMap::get_used_cells(){
	return Array(_wasgo_TileMap_wrapper_get_used_cells(wasgo_id));
}
Array TileMap::get_used_cells_by_id(int p_id){
	return Array(_wasgo_TileMap_wrapper_get_used_cells_by_id(wasgo_id, p_id));
}
Rect2 TileMap::get_used_rect(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_TileMap_wrapper_get_used_rect(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Rect2) wasgo_ret;
    
}
bool TileMap::is_cell_transposed(int p_x, int p_y){
	return (bool) _wasgo_TileMap_wrapper_is_cell_transposed(wasgo_id, p_x, p_y);
}
bool TileMap::is_cell_x_flipped(int p_x, int p_y){
	return (bool) _wasgo_TileMap_wrapper_is_cell_x_flipped(wasgo_id, p_x, p_y);
}
bool TileMap::is_cell_y_flipped(int p_x, int p_y){
	return (bool) _wasgo_TileMap_wrapper_is_cell_y_flipped(wasgo_id, p_x, p_y);
}
bool TileMap::is_centered_textures_enabled(){
	return (bool) _wasgo_TileMap_wrapper_is_centered_textures_enabled(wasgo_id);
}
bool TileMap::is_compatibility_mode_enabled(){
	return (bool) _wasgo_TileMap_wrapper_is_compatibility_mode_enabled(wasgo_id);
}
bool TileMap::is_y_sort_mode_enabled(){
	return (bool) _wasgo_TileMap_wrapper_is_y_sort_mode_enabled(wasgo_id);
}
Vector2 TileMap::map_to_world(Vector2 p_map_position, bool p_ignore_half_ofs = (bool) false){

    Variant wasgo_var_map_position = p_map_position;
    uint8_t wasgo_buffer_map_position[12];
    int wasgo_size_map_position = 12;
    encode_variant(wasgo_var_map_position, wasgo_buffer_map_position, wasgo_size_map_position);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_TileMap_wrapper_map_to_world(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_map_position, wasgo_size_map_position, p_ignore_half_ofs);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
void TileMap::set_cell(int p_x, int p_y, int p_tile, bool p_flip_x = (bool) false, bool p_flip_y = (bool) false, bool p_transpose = (bool) false, Vector2 p_autotile_coord = Vector2((0, 0))){

    Variant wasgo_var_autotile_coord = p_autotile_coord;
    uint8_t wasgo_buffer_autotile_coord[12];
    int wasgo_size_autotile_coord = 12;
    encode_variant(wasgo_var_autotile_coord, wasgo_buffer_autotile_coord, wasgo_size_autotile_coord);
    
	_wasgo_TileMap_wrapper_set_cell(wasgo_id, p_x, p_y, p_tile, p_flip_x, p_flip_y, p_transpose, wasgo_buffer_autotile_coord, wasgo_size_autotile_coord);
}
void TileMap::set_cell_size(Vector2 p_size){

    Variant wasgo_var_size = p_size;
    uint8_t wasgo_buffer_size[12];
    int wasgo_size_size = 12;
    encode_variant(wasgo_var_size, wasgo_buffer_size, wasgo_size_size);
    
	_wasgo_TileMap_wrapper_set_cell_size(wasgo_id, wasgo_buffer_size, wasgo_size_size);
}
void TileMap::set_cellv(Vector2 p_position, int p_tile, bool p_flip_x = (bool) false, bool p_flip_y = (bool) false, bool p_transpose = (bool) false){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_TileMap_wrapper_set_cellv(wasgo_id, wasgo_buffer_position, wasgo_size_position, p_tile, p_flip_x, p_flip_y, p_transpose);
}
void TileMap::set_centered_textures(bool p_enable){
	_wasgo_TileMap_wrapper_set_centered_textures(wasgo_id, p_enable);
}
void TileMap::set_clip_uv(bool p_enable){
	_wasgo_TileMap_wrapper_set_clip_uv(wasgo_id, p_enable);
}
void TileMap::set_collision_bounce(float p_value){
	_wasgo_TileMap_wrapper_set_collision_bounce(wasgo_id, p_value);
}
void TileMap::set_collision_friction(float p_value){
	_wasgo_TileMap_wrapper_set_collision_friction(wasgo_id, p_value);
}
void TileMap::set_collision_layer(int p_layer){
	_wasgo_TileMap_wrapper_set_collision_layer(wasgo_id, p_layer);
}
void TileMap::set_collision_layer_bit(int p_bit, bool p_value){
	_wasgo_TileMap_wrapper_set_collision_layer_bit(wasgo_id, p_bit, p_value);
}
void TileMap::set_collision_mask(int p_mask){
	_wasgo_TileMap_wrapper_set_collision_mask(wasgo_id, p_mask);
}
void TileMap::set_collision_mask_bit(int p_bit, bool p_value){
	_wasgo_TileMap_wrapper_set_collision_mask_bit(wasgo_id, p_bit, p_value);
}
void TileMap::set_collision_use_kinematic(bool p_use_kinematic){
	_wasgo_TileMap_wrapper_set_collision_use_kinematic(wasgo_id, p_use_kinematic);
}
void TileMap::set_collision_use_parent(bool p_use_parent){
	_wasgo_TileMap_wrapper_set_collision_use_parent(wasgo_id, p_use_parent);
}
void TileMap::set_compatibility_mode(bool p_enable){
	_wasgo_TileMap_wrapper_set_compatibility_mode(wasgo_id, p_enable);
}
void TileMap::set_custom_transform(Transform2D p_custom_transform){

    Variant wasgo_var_custom_transform = p_custom_transform;
    uint8_t wasgo_buffer_custom_transform[28];
    int wasgo_size_custom_transform = 28;
    encode_variant(wasgo_var_custom_transform, wasgo_buffer_custom_transform, wasgo_size_custom_transform);
    
	_wasgo_TileMap_wrapper_set_custom_transform(wasgo_id, wasgo_buffer_custom_transform, wasgo_size_custom_transform);
}
void TileMap::set_half_offset(TileMap::HalfOffset p_half_offset){
	_wasgo_TileMap_wrapper_set_half_offset(wasgo_id, p_half_offset._get_wasgo_id());
}
void TileMap::set_mode(TileMap::Mode p_mode){
	_wasgo_TileMap_wrapper_set_mode(wasgo_id, p_mode._get_wasgo_id());
}
void TileMap::set_occluder_light_mask(int p_mask){
	_wasgo_TileMap_wrapper_set_occluder_light_mask(wasgo_id, p_mask);
}
void TileMap::set_quadrant_size(int p_size){
	_wasgo_TileMap_wrapper_set_quadrant_size(wasgo_id, p_size);
}
void TileMap::set_tile_origin(TileMap::TileOrigin p_origin){
	_wasgo_TileMap_wrapper_set_tile_origin(wasgo_id, p_origin._get_wasgo_id());
}
void TileMap::set_tileset(TileSet p_tileset){
	_wasgo_TileMap_wrapper_set_tileset(wasgo_id, p_tileset._get_wasgo_id());
}
void TileMap::set_y_sort_mode(bool p_enable){
	_wasgo_TileMap_wrapper_set_y_sort_mode(wasgo_id, p_enable);
}
void TileMap::update_bitmask_area(Vector2 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_TileMap_wrapper_update_bitmask_area(wasgo_id, wasgo_buffer_position, wasgo_size_position);
}
void TileMap::update_bitmask_region(Vector2 p_start = Vector2((0, 0)), Vector2 p_end = Vector2((0, 0))){

    Variant wasgo_var_start = p_start;
    uint8_t wasgo_buffer_start[12];
    int wasgo_size_start = 12;
    encode_variant(wasgo_var_start, wasgo_buffer_start, wasgo_size_start);
    

    Variant wasgo_var_end = p_end;
    uint8_t wasgo_buffer_end[12];
    int wasgo_size_end = 12;
    encode_variant(wasgo_var_end, wasgo_buffer_end, wasgo_size_end);
    
	_wasgo_TileMap_wrapper_update_bitmask_region(wasgo_id, wasgo_buffer_start, wasgo_size_start, wasgo_buffer_end, wasgo_size_end);
}
void TileMap::update_dirty_quadrants(){
	_wasgo_TileMap_wrapper_update_dirty_quadrants(wasgo_id);
}
Vector2 TileMap::world_to_map(Vector2 p_world_position){

    Variant wasgo_var_world_position = p_world_position;
    uint8_t wasgo_buffer_world_position[12];
    int wasgo_size_world_position = 12;
    encode_variant(wasgo_var_world_position, wasgo_buffer_world_position, wasgo_size_world_position);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_TileMap_wrapper_world_to_map(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_world_position, wasgo_size_world_position);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}

TileMap::TileMap(WasGoId p_wasgo_id) : Node2D(p_wasgo_id){
}
TileMap::TileMap(){
    wasgo_id = _wasgo_TileMap_constructor();
}
TileMap::~TileMap(){
    _wasgo_TileMap_destructor(wasgo_id);
}