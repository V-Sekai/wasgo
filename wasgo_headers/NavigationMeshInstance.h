/* THIS FILE IS GENERATED */
#ifndef NAVIGATIONMESHINSTANCE_H
#define NAVIGATIONMESHINSTANCE_H

#include "wasgo\wasgo.h"

#include "NavigationMesh.h"
#include "Spatial.h"
class NavigationMeshInstance : public Spatial{
public:
NavigationMesh get_navigation_mesh();
bool is_enabled();
void set_enabled(bool p_enabled);
void set_navigation_mesh(NavigationMesh p_navmesh);

protected:
NavigationMeshInstance(WasGoId p_wasgo_id);
public:
NavigationMeshInstance();
~NavigationMeshInstance();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_NavigationMeshInstance_wrapper_get_navigation_mesh(WasGoId wasgo_id);
int _wasgo_NavigationMeshInstance_wrapper_is_enabled(WasGoId wasgo_id);
void _wasgo_NavigationMeshInstance_wrapper_set_enabled(WasGoId wasgo_id, bool p_enabled);
void _wasgo_NavigationMeshInstance_wrapper_set_navigation_mesh(WasGoId wasgo_id, WasGoId p_navmesh);

    //constructor and destructor wrappers
    WasGoId _wasgo_NavigationMeshInstance_constructor();
    void _wasgo_NavigationMeshInstance_destructor(WasGoId p_wasgo_id);
            
}
#endif