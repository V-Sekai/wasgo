/* THIS FILE IS GENERATED */
#ifndef TILEMAP_H
#define TILEMAP_H

#include "wasgo\wasgo.h"

#include "Node2D.h"
#include "Vector2.h"
#include "Variant.h"
#include "Transform2D.h"
#include "Rect2.h"
#include "TileSet.h"
class TileMap : public Node2D{
public:
enum HalfOffset{
HALF_OFFSET_X,
HALF_OFFSET_Y,
HALF_OFFSET_DISABLED,
HALF_OFFSET_NEGATIVE_X,
HALF_OFFSET_NEGATIVE_Y
};
enum Mode{
MODE_SQUARE,
MODE_ISOMETRIC,
MODE_CUSTOM
};
enum TileOrigin{
TILE_ORIGIN_TOP_LEFT,
TILE_ORIGIN_CENTER,
TILE_ORIGIN_BOTTOM_LEFT
};
void clear();
void fix_invalid_tiles();
int get_cell(int p_x, int p_y);
Vector2 get_cell_autotile_coord(int p_x, int p_y);
Vector2 get_cell_size();
int get_cellv(Vector2 p_position);
bool get_clip_uv();
float get_collision_bounce();
float get_collision_friction();
int get_collision_layer();
bool get_collision_layer_bit(int p_bit);
int get_collision_mask();
bool get_collision_mask_bit(int p_bit);
bool get_collision_use_kinematic();
bool get_collision_use_parent();
Transform2D get_custom_transform();
TileMap::HalfOffset get_half_offset();
TileMap::Mode get_mode();
int get_occluder_light_mask();
int get_quadrant_size();
TileMap::TileOrigin get_tile_origin();
TileSet get_tileset();
Array get_used_cells();
Array get_used_cells_by_id(int p_id);
Rect2 get_used_rect();
bool is_cell_transposed(int p_x, int p_y);
bool is_cell_x_flipped(int p_x, int p_y);
bool is_cell_y_flipped(int p_x, int p_y);
bool is_centered_textures_enabled();
bool is_compatibility_mode_enabled();
bool is_y_sort_mode_enabled();
Vector2 map_to_world(Vector2 p_map_position, bool p_ignore_half_ofs = (bool) false);
void set_cell(int p_x, int p_y, int p_tile, bool p_flip_x = (bool) false, bool p_flip_y = (bool) false, bool p_transpose = (bool) false, Vector2 p_autotile_coord = Vector2((0, 0)));
void set_cell_size(Vector2 p_size);
void set_cellv(Vector2 p_position, int p_tile, bool p_flip_x = (bool) false, bool p_flip_y = (bool) false, bool p_transpose = (bool) false);
void set_centered_textures(bool p_enable);
void set_clip_uv(bool p_enable);
void set_collision_bounce(float p_value);
void set_collision_friction(float p_value);
void set_collision_layer(int p_layer);
void set_collision_layer_bit(int p_bit, bool p_value);
void set_collision_mask(int p_mask);
void set_collision_mask_bit(int p_bit, bool p_value);
void set_collision_use_kinematic(bool p_use_kinematic);
void set_collision_use_parent(bool p_use_parent);
void set_compatibility_mode(bool p_enable);
void set_custom_transform(Transform2D p_custom_transform);
void set_half_offset(TileMap::HalfOffset p_half_offset);
void set_mode(TileMap::Mode p_mode);
void set_occluder_light_mask(int p_mask);
void set_quadrant_size(int p_size);
void set_tile_origin(TileMap::TileOrigin p_origin);
void set_tileset(TileSet p_tileset);
void set_y_sort_mode(bool p_enable);
void update_bitmask_area(Vector2 p_position);
void update_bitmask_region(Vector2 p_start = Vector2((0, 0)), Vector2 p_end = Vector2((0, 0)));
void update_dirty_quadrants();
Vector2 world_to_map(Vector2 p_world_position);

protected:
TileMap(WasGoId p_wasgo_id);
public:
TileMap();
~TileMap();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_TileMap_wrapper_clear(WasGoId wasgo_id);
void _wasgo_TileMap_wrapper_fix_invalid_tiles(WasGoId wasgo_id);
int _wasgo_TileMap_wrapper_get_cell(WasGoId wasgo_id, int p_x, int p_y);
void _wasgo_TileMap_wrapper_get_cell_autotile_coord(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_x, int p_y);
void _wasgo_TileMap_wrapper_get_cell_size(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_TileMap_wrapper_get_cellv(WasGoId wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size);
int _wasgo_TileMap_wrapper_get_clip_uv(WasGoId wasgo_id);
float _wasgo_TileMap_wrapper_get_collision_bounce(WasGoId wasgo_id);
float _wasgo_TileMap_wrapper_get_collision_friction(WasGoId wasgo_id);
int _wasgo_TileMap_wrapper_get_collision_layer(WasGoId wasgo_id);
int _wasgo_TileMap_wrapper_get_collision_layer_bit(WasGoId wasgo_id, int p_bit);
int _wasgo_TileMap_wrapper_get_collision_mask(WasGoId wasgo_id);
int _wasgo_TileMap_wrapper_get_collision_mask_bit(WasGoId wasgo_id, int p_bit);
int _wasgo_TileMap_wrapper_get_collision_use_kinematic(WasGoId wasgo_id);
int _wasgo_TileMap_wrapper_get_collision_use_parent(WasGoId wasgo_id);
void _wasgo_TileMap_wrapper_get_custom_transform(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_TileMap_wrapper_get_half_offset(WasGoId wasgo_id);
WasGoId _wasgo_TileMap_wrapper_get_mode(WasGoId wasgo_id);
int _wasgo_TileMap_wrapper_get_occluder_light_mask(WasGoId wasgo_id);
int _wasgo_TileMap_wrapper_get_quadrant_size(WasGoId wasgo_id);
WasGoId _wasgo_TileMap_wrapper_get_tile_origin(WasGoId wasgo_id);
WasGoId _wasgo_TileMap_wrapper_get_tileset(WasGoId wasgo_id);
WasGoId _wasgo_TileMap_wrapper_get_used_cells(WasGoId wasgo_id);
WasGoId _wasgo_TileMap_wrapper_get_used_cells_by_id(WasGoId wasgo_id, int p_id);
void _wasgo_TileMap_wrapper_get_used_rect(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_TileMap_wrapper_is_cell_transposed(WasGoId wasgo_id, int p_x, int p_y);
int _wasgo_TileMap_wrapper_is_cell_x_flipped(WasGoId wasgo_id, int p_x, int p_y);
int _wasgo_TileMap_wrapper_is_cell_y_flipped(WasGoId wasgo_id, int p_x, int p_y);
int _wasgo_TileMap_wrapper_is_centered_textures_enabled(WasGoId wasgo_id);
int _wasgo_TileMap_wrapper_is_compatibility_mode_enabled(WasGoId wasgo_id);
int _wasgo_TileMap_wrapper_is_y_sort_mode_enabled(WasGoId wasgo_id);
void _wasgo_TileMap_wrapper_map_to_world(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_map_position, int p_map_position_wasgo_buffer_size, bool p_ignore_half_ofs);
void _wasgo_TileMap_wrapper_set_cell(WasGoId wasgo_id, int p_x, int p_y, int p_tile, bool p_flip_x, bool p_flip_y, bool p_transpose, const uint8_t * p_autotile_coord, int p_autotile_coord_wasgo_buffer_size);
void _wasgo_TileMap_wrapper_set_cell_size(WasGoId wasgo_id, const uint8_t * p_size, int p_size_wasgo_buffer_size);
void _wasgo_TileMap_wrapper_set_cellv(WasGoId wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size, int p_tile, bool p_flip_x, bool p_flip_y, bool p_transpose);
void _wasgo_TileMap_wrapper_set_centered_textures(WasGoId wasgo_id, bool p_enable);
void _wasgo_TileMap_wrapper_set_clip_uv(WasGoId wasgo_id, bool p_enable);
void _wasgo_TileMap_wrapper_set_collision_bounce(WasGoId wasgo_id, float p_value);
void _wasgo_TileMap_wrapper_set_collision_friction(WasGoId wasgo_id, float p_value);
void _wasgo_TileMap_wrapper_set_collision_layer(WasGoId wasgo_id, int p_layer);
void _wasgo_TileMap_wrapper_set_collision_layer_bit(WasGoId wasgo_id, int p_bit, bool p_value);
void _wasgo_TileMap_wrapper_set_collision_mask(WasGoId wasgo_id, int p_mask);
void _wasgo_TileMap_wrapper_set_collision_mask_bit(WasGoId wasgo_id, int p_bit, bool p_value);
void _wasgo_TileMap_wrapper_set_collision_use_kinematic(WasGoId wasgo_id, bool p_use_kinematic);
void _wasgo_TileMap_wrapper_set_collision_use_parent(WasGoId wasgo_id, bool p_use_parent);
void _wasgo_TileMap_wrapper_set_compatibility_mode(WasGoId wasgo_id, bool p_enable);
void _wasgo_TileMap_wrapper_set_custom_transform(WasGoId wasgo_id, const uint8_t * p_custom_transform, int p_custom_transform_wasgo_buffer_size);
void _wasgo_TileMap_wrapper_set_half_offset(WasGoId wasgo_id, WasGoId p_half_offset);
void _wasgo_TileMap_wrapper_set_mode(WasGoId wasgo_id, WasGoId p_mode);
void _wasgo_TileMap_wrapper_set_occluder_light_mask(WasGoId wasgo_id, int p_mask);
void _wasgo_TileMap_wrapper_set_quadrant_size(WasGoId wasgo_id, int p_size);
void _wasgo_TileMap_wrapper_set_tile_origin(WasGoId wasgo_id, WasGoId p_origin);
void _wasgo_TileMap_wrapper_set_tileset(WasGoId wasgo_id, WasGoId p_tileset);
void _wasgo_TileMap_wrapper_set_y_sort_mode(WasGoId wasgo_id, bool p_enable);
void _wasgo_TileMap_wrapper_update_bitmask_area(WasGoId wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_TileMap_wrapper_update_bitmask_region(WasGoId wasgo_id, const uint8_t * p_start, int p_start_wasgo_buffer_size, const uint8_t * p_end, int p_end_wasgo_buffer_size);
void _wasgo_TileMap_wrapper_update_dirty_quadrants(WasGoId wasgo_id);
void _wasgo_TileMap_wrapper_world_to_map(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_world_position, int p_world_position_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_TileMap_constructor();
    void _wasgo_TileMap_destructor(WasGoId p_wasgo_id);
            
}
#endif