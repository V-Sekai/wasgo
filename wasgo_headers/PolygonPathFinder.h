/* THIS FILE IS GENERATED */
#ifndef POLYGONPATHFINDER_H
#define POLYGONPATHFINDER_H

#include "wasgo\wasgo.h"

#include "Rect2.h"
#include "Vector2.h"
#include "Variant.h"
#include "Resource.h"
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

protected:
PolygonPathFinder(WasGoId p_wasgo_id);
public:
PolygonPathFinder();
~PolygonPathFinder();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_PolygonPathFinder_wrapper_find_path(WasGoId wasgo_id, const uint8_t * p_from, int p_from_wasgo_buffer_size, const uint8_t * p_to, int p_to_wasgo_buffer_size);
void _wasgo_PolygonPathFinder_wrapper_get_bounds(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_PolygonPathFinder_wrapper_get_closest_point(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_point, int p_point_wasgo_buffer_size);
WasGoId _wasgo_PolygonPathFinder_wrapper_get_intersections(WasGoId wasgo_id, const uint8_t * p_from, int p_from_wasgo_buffer_size, const uint8_t * p_to, int p_to_wasgo_buffer_size);
float _wasgo_PolygonPathFinder_wrapper_get_point_penalty(WasGoId wasgo_id, int p_idx);
int _wasgo_PolygonPathFinder_wrapper_is_point_inside(WasGoId wasgo_id, const uint8_t * p_point, int p_point_wasgo_buffer_size);
void _wasgo_PolygonPathFinder_wrapper_set_point_penalty(WasGoId wasgo_id, int p_idx, float p_penalty);
void _wasgo_PolygonPathFinder_wrapper_setup(WasGoId wasgo_id, WasGoId p_points, WasGoId p_connections);

    //constructor and destructor wrappers
    WasGoId _wasgo_PolygonPathFinder_constructor();
    void _wasgo_PolygonPathFinder_destructor(WasGoId p_wasgo_id);
            
}
#endif