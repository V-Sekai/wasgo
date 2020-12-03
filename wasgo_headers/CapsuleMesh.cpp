/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CapsuleMesh.h"
float CapsuleMesh::get_mid_height(){
	return (float) _wasgo_CapsuleMesh_wrapper_get_mid_height(wasgo_id);
}
int CapsuleMesh::get_radial_segments(){
	return (int) _wasgo_CapsuleMesh_wrapper_get_radial_segments(wasgo_id);
}
float CapsuleMesh::get_radius(){
	return (float) _wasgo_CapsuleMesh_wrapper_get_radius(wasgo_id);
}
int CapsuleMesh::get_rings(){
	return (int) _wasgo_CapsuleMesh_wrapper_get_rings(wasgo_id);
}
void CapsuleMesh::set_mid_height(float p_mid_height){
	_wasgo_CapsuleMesh_wrapper_set_mid_height(wasgo_id, p_mid_height);
}
void CapsuleMesh::set_radial_segments(int p_segments){
	_wasgo_CapsuleMesh_wrapper_set_radial_segments(wasgo_id, p_segments);
}
void CapsuleMesh::set_radius(float p_radius){
	_wasgo_CapsuleMesh_wrapper_set_radius(wasgo_id, p_radius);
}
void CapsuleMesh::set_rings(int p_rings){
	_wasgo_CapsuleMesh_wrapper_set_rings(wasgo_id, p_rings);
}

CapsuleMesh::CapsuleMesh(WasGoId p_wasgo_id) : PrimitiveMesh(p_wasgo_id){
}
CapsuleMesh::CapsuleMesh(){
    wasgo_id = _wasgo_CapsuleMesh_constructor();
}
CapsuleMesh::~CapsuleMesh(){
    _wasgo_CapsuleMesh_destructor(wasgo_id);
}