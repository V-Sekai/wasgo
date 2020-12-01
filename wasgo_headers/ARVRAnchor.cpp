/* THIS FILE IS GENERATED */
#include "ARVRAnchor.h"
int ARVRAnchor::get_anchor_id(){
	return (int) _wasgo_ARVRAnchor_wrapper_get_anchor_id(wasgo_id);
}
String ARVRAnchor::get_anchor_name(){
	return String::from_wasgo_id(_wasgo_ARVRAnchor_wrapper_get_anchor_name(wasgo_id));
}
bool ARVRAnchor::get_is_active(){
	return (bool) _wasgo_ARVRAnchor_wrapper_get_is_active(wasgo_id);
}
Mesh ARVRAnchor::get_mesh(){
	return Mesh::from_wasgo_id(_wasgo_ARVRAnchor_wrapper_get_mesh(wasgo_id));
}
Plane ARVRAnchor::get_plane(){
	return Plane::from_wasgo_id(_wasgo_ARVRAnchor_wrapper_get_plane(wasgo_id));
}
Vector3 ARVRAnchor::get_size(){
	return Vector3::from_wasgo_id(_wasgo_ARVRAnchor_wrapper_get_size(wasgo_id));
}
void ARVRAnchor::set_anchor_id(int p_anchor_id){
	_wasgo_ARVRAnchor_wrapper_set_anchor_id(wasgo_id, p_anchor_id);
}