/* THIS FILE IS GENERATED */
#ifndef NAVIGATIONPOLYGONINSTANCE_H
#define NAVIGATIONPOLYGONINSTANCE_H

#include <stdint.h>

#include "Node2D.h"
#include "NavigationPolygon.h"
class NavigationPolygonInstance : public Node2D{
public: NavigationPolygonInstance();
void  _navpoly_changed();
void  _navpoly_changed();
NavigationPolygon  get_navigation_polygon();
NavigationPolygon  get_navigation_polygon();
bool  is_enabled();
bool  is_enabled();
void  set_enabled(bool enabled);
void  set_navigation_polygon(NavigationPolygon navpoly);
};
#endif