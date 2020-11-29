/* THIS FILE IS GENERATED */
#ifndef POLYGONPATHFINDER_H
#define POLYGONPATHFINDER_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
class PolygonPathFinder : public Resource{
public: PolygonPathFinder();
PoolVector2Array find_path(Vector2 p_from, Vector2 p_to);
Rect2 get_bounds();
Vector2 get_closest_point(Vector2 p_point);
PoolVector2Array get_intersections(Vector2 p_from, Vector2 p_to);
float get_point_penalty(int p_idx);
bool is_point_inside(Vector2 p_point);
void set_point_penalty(int p_idx, float p_penalty);
void setup(PoolVector2Array p_points, PoolIntArray p_connections);
};
#endif