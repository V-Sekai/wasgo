/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Transform2D.h"
#include "Texture.h"
#include "Resource.h"
#include "Vector2.h"
#include "Object.h"
#include "OccluderPolygon2D.h"
#include "Variant.h"
#include "ShaderMaterial.h"
#include "NavigationPolygon.h"
#include "Rect2.h"
#include "Shape2D.h"
class TileSet : public Resource{
public: TileSet();
enum TileMode{
SINGLE_TILE: 0,
AUTO_TILE: 1,
};
enum AutotileBindings{
BIND_TOPLEFT: 1,
BIND_TOP: 2,
BIND_TOPRIGHT: 4,
BIND_LEFT: 8,
BIND_CENTER: 16,
BIND_RIGHT: 32,
BIND_BOTTOMLEFT: 64,
BIND_BOTTOM: 128,
};
enum BitmaskMode{
BITMASK_2X2: 0,
BITMASK_3X3_MINIMAL: 1,
};
Vector2  _forward_atlas_subtile_selection(int atlastile_id, Object tilemap, Vector2 tile_location);
Vector2  _forward_subtile_selection(int autotile_id, int bitmask, Object tilemap, Vector2 tile_location);
bool  _is_tile_bound(int drawn_id, int neighbor_id);
void  autotile_clear_bitmask_map(int id);
int  autotile_get_bitmask(int id, Vector2 coord);
enum.TileSet::BitmaskMode  autotile_get_bitmask_mode(int id);
Vector2  autotile_get_icon_coordinate(int id);
OccluderPolygon2D  autotile_get_light_occluder(int id, Vector2 coord);
NavigationPolygon  autotile_get_navigation_polygon(int id, Vector2 coord);
Vector2  autotile_get_size(int id);
int  autotile_get_spacing(int id);
int  autotile_get_subtile_priority(int id, Vector2 coord);
int  autotile_get_z_index(int id, Vector2 coord);
void  autotile_set_bitmask(int id, Vector2 bitmask, int flag);
void  autotile_set_bitmask_mode(int id, int mode);
void  autotile_set_icon_coordinate(int id, Vector2 coord);
void  autotile_set_light_occluder(int id, OccluderPolygon2D light_occluder, Vector2 coord);
void  autotile_set_navigation_polygon(int id, NavigationPolygon navigation_polygon, Vector2 coord);
void  autotile_set_size(int id, Vector2 size);
void  autotile_set_spacing(int id, int spacing);
void  autotile_set_subtile_priority(int id, Vector2 coord, int priority);
void  autotile_set_z_index(int id, Vector2 coord, int z_index);
void  clear();
void  clear();
void  create_tile(int id);
int  find_tile_by_name(String name);
int  get_last_unused_tile_id();
int  get_last_unused_tile_id();
Array  get_tiles_ids();
Array  get_tiles_ids();
void  remove_tile(int id);
void  tile_add_shape(int id, Shape2D shape, Transform2D shape_transform, bool one_way = false, Vector2 autotile_coord = (0, 0));
OccluderPolygon2D  tile_get_light_occluder(int id);
ShaderMaterial  tile_get_material(int id);
Color  tile_get_modulate(int id);
String  tile_get_name(int id);
NavigationPolygon  tile_get_navigation_polygon(int id);
Vector2  tile_get_navigation_polygon_offset(int id);
Texture  tile_get_normal_map(int id);
Vector2  tile_get_occluder_offset(int id);
Rect2  tile_get_region(int id);
Shape2D  tile_get_shape(int id, int shape_id);
int  tile_get_shape_count(int id);
Vector2  tile_get_shape_offset(int id, int shape_id);
bool  tile_get_shape_one_way(int id, int shape_id);
float  tile_get_shape_one_way_margin(int id, int shape_id);
Transform2D  tile_get_shape_transform(int id, int shape_id);
Array  tile_get_shapes(int id);
Texture  tile_get_texture(int id);
Vector2  tile_get_texture_offset(int id);
enum.TileSet::TileMode  tile_get_tile_mode(int id);
int  tile_get_z_index(int id);
void  tile_set_light_occluder(int id, OccluderPolygon2D light_occluder);
void  tile_set_material(int id, ShaderMaterial material);
void  tile_set_modulate(int id, Color color);
void  tile_set_name(int id, String name);
void  tile_set_navigation_polygon(int id, NavigationPolygon navigation_polygon);
void  tile_set_navigation_polygon_offset(int id, Vector2 navigation_polygon_offset);
void  tile_set_normal_map(int id, Texture normal_map);
void  tile_set_occluder_offset(int id, Vector2 occluder_offset);
void  tile_set_region(int id, Rect2 region);
void  tile_set_shape(int id, int shape_id, Shape2D shape);
void  tile_set_shape_offset(int id, int shape_id, Vector2 shape_offset);
void  tile_set_shape_one_way(int id, int shape_id, bool one_way);
void  tile_set_shape_one_way_margin(int id, int shape_id, float one_way);
void  tile_set_shape_transform(int id, int shape_id, Transform2D shape_transform);
void  tile_set_shapes(int id, Array shapes);
void  tile_set_texture(int id, Texture texture);
void  tile_set_texture_offset(int id, Vector2 texture_offset);
void  tile_set_tile_mode(int id, int tilemode);
void  tile_set_z_index(int id, int z_index);
};