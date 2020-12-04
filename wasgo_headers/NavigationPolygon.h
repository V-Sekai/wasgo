/* THIS FILE IS GENERATED */
#ifndef NAVIGATIONPOLYGON_H
#define NAVIGATIONPOLYGON_H

#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Resource.h"
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
public:
explicit NavigationPolygon(WasGoID p_wasgo_id);
explicit NavigationPolygon(Resource other);
NavigationPolygon new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_NavigationPolygon_wrapper_add_outline(WasGoID wasgo_id, WasGoID p_outline);
void _wasgo_NavigationPolygon_wrapper_add_outline_at_index(WasGoID wasgo_id, WasGoID p_outline, int p_index);
void _wasgo_NavigationPolygon_wrapper_add_polygon(WasGoID wasgo_id, WasGoID p_polygon);
void _wasgo_NavigationPolygon_wrapper_clear_outlines(WasGoID wasgo_id);
void _wasgo_NavigationPolygon_wrapper_clear_polygons(WasGoID wasgo_id);
WasGoID _wasgo_NavigationPolygon_wrapper_get_outline(WasGoID wasgo_id, int p_idx);
int _wasgo_NavigationPolygon_wrapper_get_outline_count(WasGoID wasgo_id);
WasGoID _wasgo_NavigationPolygon_wrapper_get_polygon(WasGoID wasgo_id, int p_idx);
int _wasgo_NavigationPolygon_wrapper_get_polygon_count(WasGoID wasgo_id);
WasGoID _wasgo_NavigationPolygon_wrapper_get_vertices(WasGoID wasgo_id);
void _wasgo_NavigationPolygon_wrapper_make_polygons_from_outlines(WasGoID wasgo_id);
void _wasgo_NavigationPolygon_wrapper_remove_outline(WasGoID wasgo_id, int p_idx);
void _wasgo_NavigationPolygon_wrapper_set_outline(WasGoID wasgo_id, int p_idx, WasGoID p_outline);
void _wasgo_NavigationPolygon_wrapper_set_vertices(WasGoID wasgo_id, WasGoID p_vertices);

    //constructor wrappers
    WasGoID _wasgo_NavigationPolygon_constructor();
            
}
#endif