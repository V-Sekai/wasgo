/* THIS FILE IS GENERATED */
#ifndef POLYGONPATHFINDER_H
#define POLYGONPATHFINDER_H

#include "wasgo\wasgoid.h"

#include "Resource.h"
#include "Variant.h"
#include "Rect2.h"
#include "Vector2.h"
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
public:
explicit PolygonPathFinder(WasGoID p_wasgo_id);
explicit PolygonPathFinder(Resource other);
PolygonPathFinder();
PolygonPathFinder new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_PolygonPathFinder_wrapper_find_path(WasGoID wasgo_id, const uint8_t * p_from, int p_from_wasgo_buffer_size, const uint8_t * p_to, int p_to_wasgo_buffer_size);
void _wasgo_PolygonPathFinder_wrapper_get_bounds(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_PolygonPathFinder_wrapper_get_closest_point(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_point, int p_point_wasgo_buffer_size);
WasGoID _wasgo_PolygonPathFinder_wrapper_get_intersections(WasGoID wasgo_id, const uint8_t * p_from, int p_from_wasgo_buffer_size, const uint8_t * p_to, int p_to_wasgo_buffer_size);
float _wasgo_PolygonPathFinder_wrapper_get_point_penalty(WasGoID wasgo_id, int p_idx);
int _wasgo_PolygonPathFinder_wrapper_is_point_inside(WasGoID wasgo_id, const uint8_t * p_point, int p_point_wasgo_buffer_size);
void _wasgo_PolygonPathFinder_wrapper_set_point_penalty(WasGoID wasgo_id, int p_idx, float p_penalty);
void _wasgo_PolygonPathFinder_wrapper_setup(WasGoID wasgo_id, WasGoID p_points, WasGoID p_connections);

    //constructor wrappers
    WasGoID _wasgo_PolygonPathFinder_constructor();
            
}
#endif