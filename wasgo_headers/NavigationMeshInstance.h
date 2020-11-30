/* THIS FILE IS GENERATED */
#ifndef NAVIGATIONMESHINSTANCE_H
#define NAVIGATIONMESHINSTANCE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Spatial.h"
#include "NavigationMesh.h"
class NavigationMeshInstance : public Spatial{
NavigationMesh get_navigation_mesh();
bool is_enabled();
void set_enabled(bool p_enabled);
void set_navigation_mesh(NavigationMesh p_navmesh);

NavigationMeshInstance(WasGoId p_wasgo_id);
~NavigationMeshInstance();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_NavigationMeshInstance_wrapper_get_navigation_mesh(WasGoId wasgo_id);
int _wasgo_NavigationMeshInstance_wrapper_is_enabled(WasGoId wasgo_id);
void _wasgo_NavigationMeshInstance_wrapper_set_enabled(WasGoId wasgo_id, bool p_enabled);
void _wasgo_NavigationMeshInstance_wrapper_set_navigation_mesh(WasGoId wasgo_id, WasGo::WasGoId p_navmesh);
}
#endif