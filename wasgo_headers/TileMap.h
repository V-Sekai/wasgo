/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Rect2.h"
#include "Node2D.h"
#include "PoolIntArray.h"
#include "Transform2D.h"
#include "Vector2.h"
#include "Variant.h"
#include "Dictionary.h"
#include "TileSet.h"
class TileMap : public Node2D{
public: TileMap();
enum Mode{
MODE_SQUARE: 0,
MODE_ISOMETRIC: 1,
};
enum TileOrigin{
TILE_ORIGIN_TOP_LEFT: 0,
TILE_ORIGIN_CENTER: 1,
};
enum HalfOffset{
HALF_OFFSET_X: 0,
HALF_OFFSET_Y: 1,
HALF_OFFSET_DISABLED: 2,
HALF_OFFSET_NEGATIVE_X: 3,
};
void  _clear_quadrants();
void  _clear_quadrants();
int  _get_old_cell_size();
int  _get_old_cell_size();
PoolIntArray  _get_tile_data();
PoolIntArray  _get_tile_data();
void  _recreate_quadrants();
void  _recreate_quadrants();
void  _set_celld(Vector2 position, Dictionary data);
void  _set_old_cell_size(int size);
void  _set_tile_data(PoolIntArray arg0);
void  clear();
void  clear();
void  fix_invalid_tiles();
void  fix_invalid_tiles();
int  get_cell(int x, int y);
Vector2  get_cell_autotile_coord(int x, int y);
Vector2  get_cell_size();
Vector2  get_cell_size();
int  get_cellv(Vector2 position);
bool  get_clip_uv();
bool  get_clip_uv();
float  get_collision_bounce();
float  get_collision_bounce();
float  get_collision_friction();
float  get_collision_friction();
int  get_collision_layer();
int  get_collision_layer();
bool  get_collision_layer_bit(int bit);
int  get_collision_mask();
int  get_collision_mask();
bool  get_collision_mask_bit(int bit);
bool  get_collision_use_kinematic();
bool  get_collision_use_kinematic();
bool  get_collision_use_parent();
bool  get_collision_use_parent();
Transform2D  get_custom_transform();
Transform2D  get_custom_transform();
enum.TileMap::HalfOffset  get_half_offset();
enum.TileMap::HalfOffset  get_half_offset();
enum.TileMap::Mode  get_mode();
enum.TileMap::Mode  get_mode();
int  get_occluder_light_mask();
int  get_occluder_light_mask();
int  get_quadrant_size();
int  get_quadrant_size();
enum.TileMap::TileOrigin  get_tile_origin();
enum.TileMap::TileOrigin  get_tile_origin();
TileSet  get_tileset();
TileSet  get_tileset();
Array  get_used_cells();
Array  get_used_cells();
Array  get_used_cells_by_id(int id);
Rect2  get_used_rect();
Rect2  get_used_rect();
bool  is_cell_transposed(int x, int y);
bool  is_cell_x_flipped(int x, int y);
bool  is_cell_y_flipped(int x, int y);
bool  is_centered_textures_enabled();
bool  is_centered_textures_enabled();
bool  is_compatibility_mode_enabled();
bool  is_compatibility_mode_enabled();
bool  is_y_sort_mode_enabled();
bool  is_y_sort_mode_enabled();
Vector2  map_to_world(Vector2 map_position, bool ignore_half_ofs = false);
void  set_cell(int x, int y, int tile, bool flip_x = false, bool flip_y = false, bool transpose = false, Vector2 autotile_coord = (0, 0));
void  set_cell_size(Vector2 size);
void  set_cellv(Vector2 position, int tile, bool flip_x = false, bool flip_y = false, bool transpose = false);
void  set_centered_textures(bool enable);
void  set_clip_uv(bool enable);
void  set_collision_bounce(float value);
void  set_collision_friction(float value);
void  set_collision_layer(int layer);
void  set_collision_layer_bit(int bit, bool value);
void  set_collision_mask(int mask);
void  set_collision_mask_bit(int bit, bool value);
void  set_collision_use_kinematic(bool use_kinematic);
void  set_collision_use_parent(bool use_parent);
void  set_compatibility_mode(bool enable);
void  set_custom_transform(Transform2D custom_transform);
void  set_half_offset(int half_offset);
void  set_mode(int mode);
void  set_occluder_light_mask(int mask);
void  set_quadrant_size(int size);
void  set_tile_origin(int origin);
void  set_tileset(TileSet tileset);
void  set_y_sort_mode(bool enable);
void  update_bitmask_area(Vector2 position);
void  update_bitmask_region(Vector2 start = (0, 0), Vector2 end = (0, 0));
void  update_dirty_quadrants();
void  update_dirty_quadrants();
Vector2  world_to_map(Vector2 world_position);
};