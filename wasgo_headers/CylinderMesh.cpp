/* THIS FILE IS GENERATED */
#include "CylinderMesh.h"
float CylinderMesh::get_bottom_radius(){
	return (float) _wasgo_CylinderMesh_wrapper_get_bottom_radius(wasgo_id));
}
float CylinderMesh::get_height(){
	return (float) _wasgo_CylinderMesh_wrapper_get_height(wasgo_id));
}
int CylinderMesh::get_radial_segments(){
	return (int) _wasgo_CylinderMesh_wrapper_get_radial_segments(wasgo_id));
}
int CylinderMesh::get_rings(){
	return (int) _wasgo_CylinderMesh_wrapper_get_rings(wasgo_id));
}
float CylinderMesh::get_top_radius(){
	return (float) _wasgo_CylinderMesh_wrapper_get_top_radius(wasgo_id));
}
void CylinderMesh::set_bottom_radius(float p_radius){
	_wasgo_CylinderMesh_wrapper_set_bottom_radius(wasgo_id, radius);
}
void CylinderMesh::set_height(float p_height){
	_wasgo_CylinderMesh_wrapper_set_height(wasgo_id, height);
}
void CylinderMesh::set_radial_segments(int p_segments){
	_wasgo_CylinderMesh_wrapper_set_radial_segments(wasgo_id, segments);
}
void CylinderMesh::set_rings(int p_rings){
	_wasgo_CylinderMesh_wrapper_set_rings(wasgo_id, rings);
}
void CylinderMesh::set_top_radius(float p_radius){
	_wasgo_CylinderMesh_wrapper_set_top_radius(wasgo_id, radius);
}

CylinderMesh::CylinderMesh(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
CylinderMesh::~CylinderMesh(){
}