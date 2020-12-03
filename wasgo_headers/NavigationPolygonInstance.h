/* THIS FILE IS GENERATED */
#ifndef NAVIGATIONPOLYGONINSTANCE_H
#define NAVIGATIONPOLYGONINSTANCE_H

#include "wasgo\wasgo.h"

#include "NavigationPolygon.h"
#include "Node2D.h"
class NavigationPolygonInstance : public Node2D{
public:
NavigationPolygon get_navigation_polygon();
bool is_enabled();
void set_enabled(bool p_enabled);
void set_navigation_polygon(NavigationPolygon p_navpoly);

protected:
NavigationPolygonInstance(WasGoId p_wasgo_id);
public:
NavigationPolygonInstance();
~NavigationPolygonInstance();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_NavigationPolygonInstance_wrapper_get_navigation_polygon(WasGoId wasgo_id);
int _wasgo_NavigationPolygonInstance_wrapper_is_enabled(WasGoId wasgo_id);
void _wasgo_NavigationPolygonInstance_wrapper_set_enabled(WasGoId wasgo_id, bool p_enabled);
void _wasgo_NavigationPolygonInstance_wrapper_set_navigation_polygon(WasGoId wasgo_id, WasGoId p_navpoly);

    //constructor and destructor wrappers
    WasGoId _wasgo_NavigationPolygonInstance_constructor();
    void _wasgo_NavigationPolygonInstance_destructor(WasGoId p_wasgo_id);
            
}
#endif