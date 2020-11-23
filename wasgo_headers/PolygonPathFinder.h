/* THIS FILE IS GENERATED */
#ifndef POLYGONPATHFINDER_H
#define POLYGONPATHFINDER_H

#include <stdint.h>

#include "Resource.h"
#include "Rect2.h"
#include "Vector2.h"
#include "PoolIntArray.h"
#include "PoolVector2Array.h"
#include "Dictionary.h"
class PolygonPathFinder : public Resource{
public: PolygonPathFinder();
Dictionary  _get_data();
Dictionary  _get_data();
void  _set_data(Dictionary arg0);
PoolVector2Array  find_path(Vector2 from, Vector2 to);
Rect2  get_bounds();
Rect2  get_bounds();
Vector2  get_closest_point(Vector2 point);
PoolVector2Array  get_intersections(Vector2 from, Vector2 to);
float  get_point_penalty(int idx);
bool  is_point_inside(Vector2 point);
void  set_point_penalty(int idx, float penalty);
void  setup(PoolVector2Array points, PoolIntArray connections);
};
#endif