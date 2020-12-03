/* THIS FILE IS GENERATED */
#ifndef NAVIGATIONPOLYGON_H
#define NAVIGATIONPOLYGON_H

#include "wasgo\wasgo.h"

#include "Resource.h"
#include "Variant.h"
class NavigationPolygon : public Resource{
public:
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

protected:
NavigationPolygon(WasGoId p_wasgo_id);
public:
NavigationPolygon();
~NavigationPolygon();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_NavigationPolygon_wrapper_add_outline(WasGoId wasgo_id, WasGoId p_outline);
void _wasgo_NavigationPolygon_wrapper_add_outline_at_index(WasGoId wasgo_id, WasGoId p_outline, int p_index);
void _wasgo_NavigationPolygon_wrapper_add_polygon(WasGoId wasgo_id, WasGoId p_polygon);
void _wasgo_NavigationPolygon_wrapper_clear_outlines(WasGoId wasgo_id);
void _wasgo_NavigationPolygon_wrapper_clear_polygons(WasGoId wasgo_id);
WasGoId _wasgo_NavigationPolygon_wrapper_get_outline(WasGoId wasgo_id, int p_idx);
int _wasgo_NavigationPolygon_wrapper_get_outline_count(WasGoId wasgo_id);
WasGoId _wasgo_NavigationPolygon_wrapper_get_polygon(WasGoId wasgo_id, int p_idx);
int _wasgo_NavigationPolygon_wrapper_get_polygon_count(WasGoId wasgo_id);
WasGoId _wasgo_NavigationPolygon_wrapper_get_vertices(WasGoId wasgo_id);
void _wasgo_NavigationPolygon_wrapper_make_polygons_from_outlines(WasGoId wasgo_id);
void _wasgo_NavigationPolygon_wrapper_remove_outline(WasGoId wasgo_id, int p_idx);
void _wasgo_NavigationPolygon_wrapper_set_outline(WasGoId wasgo_id, int p_idx, WasGoId p_outline);
void _wasgo_NavigationPolygon_wrapper_set_vertices(WasGoId wasgo_id, WasGoId p_vertices);

    //constructor and destructor wrappers
    WasGoId _wasgo_NavigationPolygon_constructor();
    void _wasgo_NavigationPolygon_destructor(WasGoId p_wasgo_id);
            
}
#endif