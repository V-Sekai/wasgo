/* THIS FILE IS GENERATED */
#ifndef TILEMAP_H
#define TILEMAP_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "Transform2D.h"
#include "TileSet.h"
#include "Node2D.h"
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
Vector2 get_cell_size();
Transform2D get_custom_transform();
TileMap::HalfOffset get_half_offset();
TileMap::Mode get_mode();
TileSet get_tileset();
void set_cell_size(Vector2 p_size);
void set_custom_transform(Transform2D p_custom_transform);
void set_half_offset(TileMap::HalfOffset p_half_offset);
void set_mode(TileMap::Mode p_mode);
void set_tileset(TileSet p_tileset);

TileMap(WasGoId p_wasgo_id);
~TileMap();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_TileMap_wrapper_get_cell_size(WasGoId wasgo_id);
WasGoId _wasgo_TileMap_wrapper_get_custom_transform(WasGoId wasgo_id);
WasGoId _wasgo_TileMap_wrapper_get_half_offset(WasGoId wasgo_id);
WasGoId _wasgo_TileMap_wrapper_get_mode(WasGoId wasgo_id);
WasGoId _wasgo_TileMap_wrapper_get_tileset(WasGoId wasgo_id);
void _wasgo_TileMap_wrapper_set_cell_size(WasGoId wasgo_id, WasGoId p_size);
void _wasgo_TileMap_wrapper_set_custom_transform(WasGoId wasgo_id, WasGoId p_custom_transform);
void _wasgo_TileMap_wrapper_set_half_offset(WasGoId wasgo_id, WasGoId p_half_offset);
void _wasgo_TileMap_wrapper_set_mode(WasGoId wasgo_id, WasGoId p_mode);
void _wasgo_TileMap_wrapper_set_tileset(WasGoId wasgo_id, WasGoId p_tileset);
}
#endif