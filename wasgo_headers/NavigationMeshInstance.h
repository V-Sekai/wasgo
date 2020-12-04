/* THIS FILE IS GENERATED */
#ifndef NAVIGATIONMESHINSTANCE_H
#define NAVIGATIONMESHINSTANCE_H

#include "wasgo\wasgo.h"

#include "Spatial.h"
#include "NavigationMesh.h"
class NavigationMeshInstance : public Spatial{
public:
NavigationMesh get_navigation_mesh();
bool is_enabled();
void set_enabled(bool p_enabled);
void set_navigation_mesh(NavigationMesh p_navmesh);

protected:
public:
explicit NavigationMeshInstance(WasGoID p_wasgo_id);
explicit NavigationMeshInstance(Spatial other);
NavigationMeshInstance new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_NavigationMeshInstance_wrapper_get_navigation_mesh(WasGoID wasgo_id);
int _wasgo_NavigationMeshInstance_wrapper_is_enabled(WasGoID wasgo_id);
void _wasgo_NavigationMeshInstance_wrapper_set_enabled(WasGoID wasgo_id, bool p_enabled);
void _wasgo_NavigationMeshInstance_wrapper_set_navigation_mesh(WasGoID wasgo_id, WasGoID p_navmesh);

    //constructor wrappers
    WasGoID _wasgo_NavigationMeshInstance_constructor();
            
}
#endif