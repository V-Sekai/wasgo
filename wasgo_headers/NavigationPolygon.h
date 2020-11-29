/* THIS FILE IS GENERATED */
#ifndef NAVIGATIONPOLYGON_H
#define NAVIGATIONPOLYGON_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
class NavigationPolygon : public Resource{
public: NavigationPolygon();
void add_outline(PoolVector2Array p_outline);
void add_outline_at_index(PoolVector2Array p_outline, int p_index);
void add_polygon(PoolIntArray p_polygon);
void clear_outlines();
void clear_polygons();
PoolVector2Array get_outline(int p_idx);
int get_outline_count();
PoolIntArray get_polygon(int p_idx);
int get_polygon_count();
PoolVector2Array get_vertices();
void make_polygons_from_outlines();
void remove_outline(int p_idx);
void set_outline(int p_idx, PoolVector2Array p_outline);
void set_vertices(PoolVector2Array p_vertices);
};
#endif