/* THIS FILE IS GENERATED */
#ifndef POLYGONPATHFINDER_H
#define POLYGONPATHFINDER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "Rect2.h"
#include "Resource.h"
#include "Variant.h"
class PolygonPathFinder : public Resource{
public:
PoolVector2Array find_path(Vector2 p_from, Vector2 p_to);
Rect2 get_bounds();
Vector2 get_closest_point(Vector2 p_point);
PoolVector2Array get_intersections(Vector2 p_from, Vector2 p_to);
float get_point_penalty(int p_idx);
bool is_point_inside(Vector2 p_point);
void set_point_penalty(int p_idx, float p_penalty);
void setup(PoolVector2Array p_points, PoolIntArray p_connections);

PolygonPathFinder(WasGoId p_wasgo_id);
~PolygonPathFinder();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_PolygonPathFinder_wrapper_find_path(WasGoId wasgo_id, WasGoId p_from, WasGoId p_to);
WasGoId _wasgo_PolygonPathFinder_wrapper_get_bounds(WasGoId wasgo_id);
WasGoId _wasgo_PolygonPathFinder_wrapper_get_closest_point(WasGoId wasgo_id, WasGoId p_point);
WasGoId _wasgo_PolygonPathFinder_wrapper_get_intersections(WasGoId wasgo_id, WasGoId p_from, WasGoId p_to);
float _wasgo_PolygonPathFinder_wrapper_get_point_penalty(WasGoId wasgo_id, int p_idx);
int _wasgo_PolygonPathFinder_wrapper_is_point_inside(WasGoId wasgo_id, WasGoId p_point);
void _wasgo_PolygonPathFinder_wrapper_set_point_penalty(WasGoId wasgo_id, int p_idx, float p_penalty);
void _wasgo_PolygonPathFinder_wrapper_setup(WasGoId wasgo_id, WasGoId p_points, WasGoId p_connections);
}
#endif