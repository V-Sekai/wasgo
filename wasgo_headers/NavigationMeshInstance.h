/* THIS FILE IS GENERATED */
#ifndef NAVIGATIONMESHINSTANCE_H
#define NAVIGATIONMESHINSTANCE_H

#include <stdint.h>

#include "Spatial.h"
#include "NavigationMesh.h"
class NavigationMeshInstance : public Spatial{
public: NavigationMeshInstance();
NavigationMesh  get_navigation_mesh();
NavigationMesh  get_navigation_mesh();
bool  is_enabled();
bool  is_enabled();
void  set_enabled(bool enabled);
void  set_navigation_mesh(NavigationMesh navmesh);
};
#endif