/* THIS FILE IS GENERATED */
#include "TileMap.h"
Vector2 TileMap::get_cell_size(){
	return Vector2::from_wasgo_id(_wasgo_TileMap_wrapper_get_cell_size(wasgo_id));
}
Transform2D TileMap::get_custom_transform(){
	return Transform2D::from_wasgo_id(_wasgo_TileMap_wrapper_get_custom_transform(wasgo_id));
}
TileMap::HalfOffset TileMap::get_half_offset(){
	return TileMap::HalfOffset::from_wasgo_id(_wasgo_TileMap_wrapper_get_half_offset(wasgo_id));
}
TileMap::Mode TileMap::get_mode(){
	return TileMap::Mode::from_wasgo_id(_wasgo_TileMap_wrapper_get_mode(wasgo_id));
}
TileSet TileMap::get_tileset(){
	return TileSet::from_wasgo_id(_wasgo_TileMap_wrapper_get_tileset(wasgo_id));
}
void TileMap::set_cell_size(Vector2 p_size){
	_wasgo_TileMap_wrapper_set_cell_size(wasgo_id, ((Variant) size).get_wasgo_id());
}
void TileMap::set_custom_transform(Transform2D p_custom_transform){
	_wasgo_TileMap_wrapper_set_custom_transform(wasgo_id, ((Variant) custom_transform).get_wasgo_id());
}
void TileMap::set_half_offset(TileMap::HalfOffset p_half_offset){
	_wasgo_TileMap_wrapper_set_half_offset(wasgo_id, ((Variant) half_offset).get_wasgo_id());
}
void TileMap::set_mode(TileMap::Mode p_mode){
	_wasgo_TileMap_wrapper_set_mode(wasgo_id, ((Variant) mode).get_wasgo_id());
}
void TileMap::set_tileset(TileSet p_tileset){
	_wasgo_TileMap_wrapper_set_tileset(wasgo_id, ((Variant) tileset).get_wasgo_id());
}

TileMap::TileMap(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
TileMap::~TileMap(){
}