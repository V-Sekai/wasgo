/* THIS FILE IS GENERATED */
#ifndef NAVIGATIONPOLYGON_H
#define NAVIGATIONPOLYGON_H

#include <stdint.h>

#include "PoolVector2Array.h"
#include "Resource.h"
#include "PoolIntArray.h"
#include "Variant.h"
class NavigationPolygon : public Resource{
public: NavigationPolygon();
Array  _get_outlines();
Array  _get_outlines();
Array  _get_polygons();
Array  _get_polygons();
void  _set_outlines(Array outlines);
void  _set_polygons(Array polygons);
void  add_outline(PoolVector2Array outline);
void  add_outline_at_index(PoolVector2Array outline, int index);
void  add_polygon(PoolIntArray polygon);
void  clear_outlines();
void  clear_outlines();
void  clear_polygons();
void  clear_polygons();
PoolVector2Array  get_outline(int idx);
int  get_outline_count();
int  get_outline_count();
PoolIntArray  get_polygon(int idx);
int  get_polygon_count();
int  get_polygon_count();
PoolVector2Array  get_vertices();
PoolVector2Array  get_vertices();
void  make_polygons_from_outlines();
void  make_polygons_from_outlines();
void  remove_outline(int idx);
void  set_outline(int idx, PoolVector2Array outline);
void  set_vertices(PoolVector2Array vertices);
};
#endif