/* THIS FILE IS GENERATED */
#ifndef NAVIGATIONPOLYGONINSTANCE_H
#define NAVIGATIONPOLYGONINSTANCE_H

#include "stdint.h"

#include "Node2D.h"
#include "NavigationPolygon.h"
class NavigationPolygonInstance : public Node2D{
public: NavigationPolygonInstance();
NavigationPolygon get_navigation_polygon();
bool is_enabled();
void set_enabled(bool p_enabled);
void set_navigation_polygon(NavigationPolygon p_navpoly);
};
#endif