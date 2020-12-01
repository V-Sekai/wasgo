/* THIS FILE IS GENERATED */
#include "PolygonPathFinder.h"
PoolVector2Array PolygonPathFinder::find_path(Vector2 p_from, Vector2 p_to){
	return PoolVector2Array::from_wasgo_id(_wasgo_PolygonPathFinder_wrapper_find_path(wasgo_id, ((Variant) p_from).get_wasgo_id(), ((Variant) p_to).get_wasgo_id()));
}
Rect2 PolygonPathFinder::get_bounds(){
	return Rect2::from_wasgo_id(_wasgo_PolygonPathFinder_wrapper_get_bounds(wasgo_id));
}
Vector2 PolygonPathFinder::get_closest_point(Vector2 p_point){
	return Vector2::from_wasgo_id(_wasgo_PolygonPathFinder_wrapper_get_closest_point(wasgo_id, ((Variant) p_point).get_wasgo_id()));
}
PoolVector2Array PolygonPathFinder::get_intersections(Vector2 p_from, Vector2 p_to){
	return PoolVector2Array::from_wasgo_id(_wasgo_PolygonPathFinder_wrapper_get_intersections(wasgo_id, ((Variant) p_from).get_wasgo_id(), ((Variant) p_to).get_wasgo_id()));
}
float PolygonPathFinder::get_point_penalty(int p_idx){
	return (float) _wasgo_PolygonPathFinder_wrapper_get_point_penalty(wasgo_id, p_idx);
}
bool PolygonPathFinder::is_point_inside(Vector2 p_point){
	return (bool) _wasgo_PolygonPathFinder_wrapper_is_point_inside(wasgo_id, ((Variant) p_point).get_wasgo_id());
}
void PolygonPathFinder::set_point_penalty(int p_idx, float p_penalty){
	_wasgo_PolygonPathFinder_wrapper_set_point_penalty(wasgo_id, p_idx, p_penalty);
}
void PolygonPathFinder::setup(PoolVector2Array p_points, PoolIntArray p_connections){
	_wasgo_PolygonPathFinder_wrapper_setup(wasgo_id, ((Variant) p_points).get_wasgo_id(), ((Variant) p_connections).get_wasgo_id());
}