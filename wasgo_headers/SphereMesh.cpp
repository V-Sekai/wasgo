/* THIS FILE IS GENERATED */
#include "SphereMesh.h"
float SphereMesh::get_height(){
	return (float) _wasgo_SphereMesh_wrapper_get_height(wasgo_id);
}
bool SphereMesh::get_is_hemisphere(){
	return (bool) _wasgo_SphereMesh_wrapper_get_is_hemisphere(wasgo_id);
}
int SphereMesh::get_radial_segments(){
	return (int) _wasgo_SphereMesh_wrapper_get_radial_segments(wasgo_id);
}
float SphereMesh::get_radius(){
	return (float) _wasgo_SphereMesh_wrapper_get_radius(wasgo_id);
}
int SphereMesh::get_rings(){
	return (int) _wasgo_SphereMesh_wrapper_get_rings(wasgo_id);
}
void SphereMesh::set_height(float p_height){
	_wasgo_SphereMesh_wrapper_set_height(wasgo_id, p_height);
}
void SphereMesh::set_is_hemisphere(bool p_is_hemisphere){
	_wasgo_SphereMesh_wrapper_set_is_hemisphere(wasgo_id, p_is_hemisphere);
}
void SphereMesh::set_radial_segments(int p_radial_segments){
	_wasgo_SphereMesh_wrapper_set_radial_segments(wasgo_id, p_radial_segments);
}
void SphereMesh::set_radius(float p_radius){
	_wasgo_SphereMesh_wrapper_set_radius(wasgo_id, p_radius);
}
void SphereMesh::set_rings(int p_rings){
	_wasgo_SphereMesh_wrapper_set_rings(wasgo_id, p_rings);
}