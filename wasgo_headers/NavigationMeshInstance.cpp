/* THIS FILE IS GENERATED */
#include "NavigationMeshInstance.h"
NavigationMesh NavigationMeshInstance::get_navigation_mesh(){
	return NavigationMesh::from_wasgo_id(_wasgo_NavigationMeshInstance_wrapper_get_navigation_mesh(wasgo_id));
}
bool NavigationMeshInstance::is_enabled(){
	return (bool) _wasgo_NavigationMeshInstance_wrapper_is_enabled(wasgo_id);
}
void NavigationMeshInstance::set_enabled(bool p_enabled){
	_wasgo_NavigationMeshInstance_wrapper_set_enabled(wasgo_id, p_enabled);
}
void NavigationMeshInstance::set_navigation_mesh(NavigationMesh p_navmesh){
	_wasgo_NavigationMeshInstance_wrapper_set_navigation_mesh(wasgo_id, ((Variant) p_navmesh).get_wasgo_id());
}