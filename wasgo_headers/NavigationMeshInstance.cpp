/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "NavigationMeshInstance.h"
NavigationMesh NavigationMeshInstance::get_navigation_mesh(){
	return NavigationMesh(_wasgo_NavigationMeshInstance_wrapper_get_navigation_mesh(wasgo_id));
}
bool NavigationMeshInstance::is_enabled(){
	return (bool) _wasgo_NavigationMeshInstance_wrapper_is_enabled(wasgo_id);
}
void NavigationMeshInstance::set_enabled(bool p_enabled){
	_wasgo_NavigationMeshInstance_wrapper_set_enabled(wasgo_id, p_enabled);
}
void NavigationMeshInstance::set_navigation_mesh(NavigationMesh p_navmesh){
	_wasgo_NavigationMeshInstance_wrapper_set_navigation_mesh(wasgo_id, p_navmesh._get_wasgo_id());
}

NavigationMeshInstance::NavigationMeshInstance(WasGoID p_wasgo_id) : Spatial(p_wasgo_id){
}
NavigationMeshInstance::NavigationMeshInstance(Spatial other) : Spatial(other._get_wasgo_id()){
}
NavigationMeshInstance::NavigationMeshInstance():Spatial(){
}
NavigationMeshInstance NavigationMeshInstance::new_instance(){
    return NavigationMeshInstance(_wasgo_NavigationMeshInstance_constructor());
}
WasGoID NavigationMeshInstance::_get_wasgo_id(){
    return wasgo_id;
}
NavigationMeshInstance::operator bool(){
    return (bool) wasgo_id;
}
