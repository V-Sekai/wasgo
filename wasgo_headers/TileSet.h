/* THIS FILE IS GENERATED */
#ifndef TILESET_H
#define TILESET_H

#include "wasgo\wasgoid.h"

#include "Rect2.h"
#include "OccluderPolygon2D.h"
#include "NavigationPolygon.h"
#include "Transform2D.h"
#include "Ustring.h"
#include "Texture.h"
#include "Resource.h"
#include "Variant.h"
#include "ShaderMaterial.h"
#include "Vector2.h"
#include "Shape2D.h"
#include "Color.h"
class TileSet : public Resource{
public:
enum AutotileBindings{
BIND_TOPLEFT,
BIND_TOP,
BIND_TOPRIGHT,
BIND_LEFT,
BIND_CENTER,
BIND_RIGHT,
BIND_BOTTOMLEFT,
BIND_BOTTOM,
BIND_BOTTOMRIGHT
};
enum BitmaskMode{
BITMASK_2X2,
BITMASK_3X3_MINIMAL,
BITMASK_3X3
};
enum TileMode{
SINGLE_TILE,
AUTO_TILE,
ATLAS_TILE
};
void autotile_clear_bitmask_map(int p_id);
int autotile_get_bitmask(int p_id, Vector2 p_coord);
TileSet::BitmaskMode autotile_get_bitmask_mode(int p_id);
Vector2 autotile_get_icon_coordinate(int p_id);
OccluderPolygon2D autotile_get_light_occluder(int p_id, Vector2 p_coord);
NavigationPolygon autotile_get_navigation_polygon(int p_id, Vector2 p_coord);
Vector2 autotile_get_size(int p_id);
int autotile_get_spacing(int p_id);
int autotile_get_subtile_priority(int p_id, Vector2 p_coord);
int autotile_get_z_index(int p_id, Vector2 p_coord);
void autotile_set_bitmask(int p_id, Vector2 p_bitmask, int p_flag);
void autotile_set_bitmask_mode(int p_id, TileSet::BitmaskMode p_mode);
void autotile_set_icon_coordinate(int p_id, Vector2 p_coord);
void autotile_set_light_occluder(int p_id, OccluderPolygon2D p_light_occluder, Vector2 p_coord);
void autotile_set_navigation_polygon(int p_id, NavigationPolygon p_navigation_polygon, Vector2 p_coord);
void autotile_set_size(int p_id, Vector2 p_size);
void autotile_set_spacing(int p_id, int p_spacing);
void autotile_set_subtile_priority(int p_id, Vector2 p_coord, int p_priority);
void autotile_set_z_index(int p_id, Vector2 p_coord, int p_z_index);
void clear();
void create_tile(int p_id);
int find_tile_by_name(String p_name);
int get_last_unused_tile_id();
Array get_tiles_ids();
void remove_tile(int p_id);
void tile_add_shape(int p_id, Shape2D p_shape, Transform2D p_shape_transform, bool p_one_way = (bool) false, Vector2 p_autotile_coord = Vector2(0, 0));
OccluderPolygon2D tile_get_light_occluder(int p_id);
ShaderMaterial tile_get_material(int p_id);
Color tile_get_modulate(int p_id);
String tile_get_name(int p_id);
NavigationPolygon tile_get_navigation_polygon(int p_id);
Vector2 tile_get_navigation_polygon_offset(int p_id);
Texture tile_get_normal_map(int p_id);
Vector2 tile_get_occluder_offset(int p_id);
Rect2 tile_get_region(int p_id);
Shape2D tile_get_shape(int p_id, int p_shape_id);
int tile_get_shape_count(int p_id);
Vector2 tile_get_shape_offset(int p_id, int p_shape_id);
bool tile_get_shape_one_way(int p_id, int p_shape_id);
float tile_get_shape_one_way_margin(int p_id, int p_shape_id);
Transform2D tile_get_shape_transform(int p_id, int p_shape_id);
Array tile_get_shapes(int p_id);
Texture tile_get_texture(int p_id);
Vector2 tile_get_texture_offset(int p_id);
TileSet::TileMode tile_get_tile_mode(int p_id);
int tile_get_z_index(int p_id);
void tile_set_light_occluder(int p_id, OccluderPolygon2D p_light_occluder);
void tile_set_material(int p_id, ShaderMaterial p_material);
void tile_set_modulate(int p_id, Color p_color);
void tile_set_name(int p_id, String p_name);
void tile_set_navigation_polygon(int p_id, NavigationPolygon p_navigation_polygon);
void tile_set_navigation_polygon_offset(int p_id, Vector2 p_navigation_polygon_offset);
void tile_set_normal_map(int p_id, Texture p_normal_map);
void tile_set_occluder_offset(int p_id, Vector2 p_occluder_offset);
void tile_set_region(int p_id, Rect2 p_region);
void tile_set_shape(int p_id, int p_shape_id, Shape2D p_shape);
void tile_set_shape_offset(int p_id, int p_shape_id, Vector2 p_shape_offset);
void tile_set_shape_one_way(int p_id, int p_shape_id, bool p_one_way);
void tile_set_shape_one_way_margin(int p_id, int p_shape_id, float p_one_way);
void tile_set_shape_transform(int p_id, int p_shape_id, Transform2D p_shape_transform);
void tile_set_shapes(int p_id, Array p_shapes);
void tile_set_texture(int p_id, Texture p_texture);
void tile_set_texture_offset(int p_id, Vector2 p_texture_offset);
void tile_set_tile_mode(int p_id, TileSet::TileMode p_tilemode);
void tile_set_z_index(int p_id, int p_z_index);

protected:
public:
explicit TileSet(WasGoID p_wasgo_id);
explicit TileSet(Resource other);
TileSet();
TileSet new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_TileSet_wrapper_autotile_clear_bitmask_map(WasGoID wasgo_id, int p_id);
int _wasgo_TileSet_wrapper_autotile_get_bitmask(WasGoID wasgo_id, int p_id, const uint8_t * p_coord, int wasgo_throwaway, int p_coord_wasgo_buffer_size);
WasGoID _wasgo_TileSet_wrapper_autotile_get_bitmask_mode(WasGoID wasgo_id, int p_id);
void _wasgo_TileSet_wrapper_autotile_get_icon_coordinate(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_id);
WasGoID _wasgo_TileSet_wrapper_autotile_get_light_occluder(WasGoID wasgo_id, int p_id, const uint8_t * p_coord, int wasgo_throwaway, int p_coord_wasgo_buffer_size);
WasGoID _wasgo_TileSet_wrapper_autotile_get_navigation_polygon(WasGoID wasgo_id, int p_id, const uint8_t * p_coord, int wasgo_throwaway, int p_coord_wasgo_buffer_size);
void _wasgo_TileSet_wrapper_autotile_get_size(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_id);
int _wasgo_TileSet_wrapper_autotile_get_spacing(WasGoID wasgo_id, int p_id);
int _wasgo_TileSet_wrapper_autotile_get_subtile_priority(WasGoID wasgo_id, int p_id, const uint8_t * p_coord, int wasgo_throwaway, int p_coord_wasgo_buffer_size);
int _wasgo_TileSet_wrapper_autotile_get_z_index(WasGoID wasgo_id, int p_id, const uint8_t * p_coord, int wasgo_throwaway, int p_coord_wasgo_buffer_size);
void _wasgo_TileSet_wrapper_autotile_set_bitmask(WasGoID wasgo_id, int p_id, const uint8_t * p_bitmask, int wasgo_throwaway, int p_bitmask_wasgo_buffer_size, int p_flag);
void _wasgo_TileSet_wrapper_autotile_set_bitmask_mode(WasGoID wasgo_id, int p_id, WasGoID p_mode);
void _wasgo_TileSet_wrapper_autotile_set_icon_coordinate(WasGoID wasgo_id, int p_id, const uint8_t * p_coord, int wasgo_throwaway, int p_coord_wasgo_buffer_size);
void _wasgo_TileSet_wrapper_autotile_set_light_occluder(WasGoID wasgo_id, int p_id, WasGoID p_light_occluder, int wasgo_throwaway, const uint8_t * p_coord, int p_coord_wasgo_buffer_size);
void _wasgo_TileSet_wrapper_autotile_set_navigation_polygon(WasGoID wasgo_id, int p_id, WasGoID p_navigation_polygon, int wasgo_throwaway, const uint8_t * p_coord, int p_coord_wasgo_buffer_size);
void _wasgo_TileSet_wrapper_autotile_set_size(WasGoID wasgo_id, int p_id, const uint8_t * p_size, int wasgo_throwaway, int p_size_wasgo_buffer_size);
void _wasgo_TileSet_wrapper_autotile_set_spacing(WasGoID wasgo_id, int p_id, int p_spacing);
void _wasgo_TileSet_wrapper_autotile_set_subtile_priority(WasGoID wasgo_id, int p_id, const uint8_t * p_coord, int wasgo_throwaway, int p_coord_wasgo_buffer_size, int p_priority);
void _wasgo_TileSet_wrapper_autotile_set_z_index(WasGoID wasgo_id, int p_id, const uint8_t * p_coord, int wasgo_throwaway, int p_coord_wasgo_buffer_size, int p_z_index);
void _wasgo_TileSet_wrapper_clear(WasGoID wasgo_id);
void _wasgo_TileSet_wrapper_create_tile(WasGoID wasgo_id, int p_id);
int _wasgo_TileSet_wrapper_find_tile_by_name(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
int _wasgo_TileSet_wrapper_get_last_unused_tile_id(WasGoID wasgo_id);
WasGoID _wasgo_TileSet_wrapper_get_tiles_ids(WasGoID wasgo_id);
void _wasgo_TileSet_wrapper_remove_tile(WasGoID wasgo_id, int p_id);
void _wasgo_TileSet_wrapper_tile_add_shape(WasGoID wasgo_id, int p_id, WasGoID p_shape, int wasgo_throwaway, const uint8_t * p_shape_transform, int p_shape_transform_wasgo_buffer_size, bool p_one_way, const uint8_t * p_autotile_coord, int p_autotile_coord_wasgo_buffer_size);
WasGoID _wasgo_TileSet_wrapper_tile_get_light_occluder(WasGoID wasgo_id, int p_id);
WasGoID _wasgo_TileSet_wrapper_tile_get_material(WasGoID wasgo_id, int p_id);
void _wasgo_TileSet_wrapper_tile_get_modulate(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_id);
void _wasgo_TileSet_wrapper_tile_get_name(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_id);
WasGoID _wasgo_TileSet_wrapper_tile_get_navigation_polygon(WasGoID wasgo_id, int p_id);
void _wasgo_TileSet_wrapper_tile_get_navigation_polygon_offset(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_id);
WasGoID _wasgo_TileSet_wrapper_tile_get_normal_map(WasGoID wasgo_id, int p_id);
void _wasgo_TileSet_wrapper_tile_get_occluder_offset(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_id);
void _wasgo_TileSet_wrapper_tile_get_region(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_id);
WasGoID _wasgo_TileSet_wrapper_tile_get_shape(WasGoID wasgo_id, int p_id, int p_shape_id);
int _wasgo_TileSet_wrapper_tile_get_shape_count(WasGoID wasgo_id, int p_id);
void _wasgo_TileSet_wrapper_tile_get_shape_offset(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_id, int p_shape_id);
int _wasgo_TileSet_wrapper_tile_get_shape_one_way(WasGoID wasgo_id, int p_id, int p_shape_id);
float _wasgo_TileSet_wrapper_tile_get_shape_one_way_margin(WasGoID wasgo_id, int p_id, int p_shape_id);
void _wasgo_TileSet_wrapper_tile_get_shape_transform(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_id, int p_shape_id);
WasGoID _wasgo_TileSet_wrapper_tile_get_shapes(WasGoID wasgo_id, int p_id);
WasGoID _wasgo_TileSet_wrapper_tile_get_texture(WasGoID wasgo_id, int p_id);
void _wasgo_TileSet_wrapper_tile_get_texture_offset(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_id);
WasGoID _wasgo_TileSet_wrapper_tile_get_tile_mode(WasGoID wasgo_id, int p_id);
int _wasgo_TileSet_wrapper_tile_get_z_index(WasGoID wasgo_id, int p_id);
void _wasgo_TileSet_wrapper_tile_set_light_occluder(WasGoID wasgo_id, int p_id, WasGoID p_light_occluder);
void _wasgo_TileSet_wrapper_tile_set_material(WasGoID wasgo_id, int p_id, WasGoID p_material);
void _wasgo_TileSet_wrapper_tile_set_modulate(WasGoID wasgo_id, int p_id, const uint8_t * p_color, int wasgo_throwaway, int p_color_wasgo_buffer_size);
void _wasgo_TileSet_wrapper_tile_set_name(WasGoID wasgo_id, int p_id, const uint8_t * p_name, int wasgo_throwaway, int p_name_wasgo_buffer_size);
void _wasgo_TileSet_wrapper_tile_set_navigation_polygon(WasGoID wasgo_id, int p_id, WasGoID p_navigation_polygon);
void _wasgo_TileSet_wrapper_tile_set_navigation_polygon_offset(WasGoID wasgo_id, int p_id, const uint8_t * p_navigation_polygon_offset, int wasgo_throwaway, int p_navigation_polygon_offset_wasgo_buffer_size);
void _wasgo_TileSet_wrapper_tile_set_normal_map(WasGoID wasgo_id, int p_id, WasGoID p_normal_map);
void _wasgo_TileSet_wrapper_tile_set_occluder_offset(WasGoID wasgo_id, int p_id, const uint8_t * p_occluder_offset, int wasgo_throwaway, int p_occluder_offset_wasgo_buffer_size);
void _wasgo_TileSet_wrapper_tile_set_region(WasGoID wasgo_id, int p_id, const uint8_t * p_region, int wasgo_throwaway, int p_region_wasgo_buffer_size);
void _wasgo_TileSet_wrapper_tile_set_shape(WasGoID wasgo_id, int p_id, int p_shape_id, int wasgo_throwaway, WasGoID p_shape);
void _wasgo_TileSet_wrapper_tile_set_shape_offset(WasGoID wasgo_id, int p_id, int p_shape_id, int wasgo_throwaway, const uint8_t * p_shape_offset, int p_shape_offset_wasgo_buffer_size);
void _wasgo_TileSet_wrapper_tile_set_shape_one_way(WasGoID wasgo_id, int p_id, int p_shape_id, int wasgo_throwaway, bool p_one_way);
void _wasgo_TileSet_wrapper_tile_set_shape_one_way_margin(WasGoID wasgo_id, int p_id, int p_shape_id, int wasgo_throwaway, float p_one_way);
void _wasgo_TileSet_wrapper_tile_set_shape_transform(WasGoID wasgo_id, int p_id, int p_shape_id, int wasgo_throwaway, const uint8_t * p_shape_transform, int p_shape_transform_wasgo_buffer_size);
void _wasgo_TileSet_wrapper_tile_set_shapes(WasGoID wasgo_id, int p_id, WasGoID p_shapes);
void _wasgo_TileSet_wrapper_tile_set_texture(WasGoID wasgo_id, int p_id, WasGoID p_texture);
void _wasgo_TileSet_wrapper_tile_set_texture_offset(WasGoID wasgo_id, int p_id, const uint8_t * p_texture_offset, int wasgo_throwaway, int p_texture_offset_wasgo_buffer_size);
void _wasgo_TileSet_wrapper_tile_set_tile_mode(WasGoID wasgo_id, int p_id, WasGoID p_tilemode);
void _wasgo_TileSet_wrapper_tile_set_z_index(WasGoID wasgo_id, int p_id, int p_z_index);

    //constructor wrappers
    WasGoID _wasgo_TileSet_constructor();
            
}
#endif