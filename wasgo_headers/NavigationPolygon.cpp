/* THIS FILE IS GENERATED */
#include "NavigationPolygon.h"
void NavigationPolygon::add_outline(PoolVector2Array p_outline){
	_wasgo_NavigationPolygon_wrapper_add_outline(wasgo_id, ((Variant) p_outline).get_wasgo_id());
}
void NavigationPolygon::add_outline_at_index(PoolVector2Array p_outline, int p_index){
	_wasgo_NavigationPolygon_wrapper_add_outline_at_index(wasgo_id, ((Variant) p_outline).get_wasgo_id(), p_index);
}
void NavigationPolygon::add_polygon(PoolIntArray p_polygon){
	_wasgo_NavigationPolygon_wrapper_add_polygon(wasgo_id, ((Variant) p_polygon).get_wasgo_id());
}
void NavigationPolygon::clear_outlines(){
	_wasgo_NavigationPolygon_wrapper_clear_outlines(wasgo_id);
}
void NavigationPolygon::clear_polygons(){
	_wasgo_NavigationPolygon_wrapper_clear_polygons(wasgo_id);
}
PoolVector2Array NavigationPolygon::get_outline(int p_idx){
	return PoolVector2Array::from_wasgo_id(_wasgo_NavigationPolygon_wrapper_get_outline(wasgo_id, p_idx));
}
int NavigationPolygon::get_outline_count(){
	return (int) _wasgo_NavigationPolygon_wrapper_get_outline_count(wasgo_id);
}
PoolIntArray NavigationPolygon::get_polygon(int p_idx){
	return PoolIntArray::from_wasgo_id(_wasgo_NavigationPolygon_wrapper_get_polygon(wasgo_id, p_idx));
}
int NavigationPolygon::get_polygon_count(){
	return (int) _wasgo_NavigationPolygon_wrapper_get_polygon_count(wasgo_id);
}
PoolVector2Array NavigationPolygon::get_vertices(){
	return PoolVector2Array::from_wasgo_id(_wasgo_NavigationPolygon_wrapper_get_vertices(wasgo_id));
}
void NavigationPolygon::make_polygons_from_outlines(){
	_wasgo_NavigationPolygon_wrapper_make_polygons_from_outlines(wasgo_id);
}
void NavigationPolygon::remove_outline(int p_idx){
	_wasgo_NavigationPolygon_wrapper_remove_outline(wasgo_id, p_idx);
}
void NavigationPolygon::set_outline(int p_idx, PoolVector2Array p_outline){
	_wasgo_NavigationPolygon_wrapper_set_outline(wasgo_id, p_idx, ((Variant) p_outline).get_wasgo_id());
}
void NavigationPolygon::set_vertices(PoolVector2Array p_vertices){
	_wasgo_NavigationPolygon_wrapper_set_vertices(wasgo_id, ((Variant) p_vertices).get_wasgo_id());
}