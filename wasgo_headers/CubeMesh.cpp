/* THIS FILE IS GENERATED */
#include "CubeMesh.h"
Vector3 CubeMesh::get_size(){
	return Vector3::from_wasgo_id(_wasgo_CubeMesh_wrapper_get_size(wasgo_id));
}
int CubeMesh::get_subdivide_depth(){
	return (int) _wasgo_CubeMesh_wrapper_get_subdivide_depth(wasgo_id);
}
int CubeMesh::get_subdivide_height(){
	return (int) _wasgo_CubeMesh_wrapper_get_subdivide_height(wasgo_id);
}
int CubeMesh::get_subdivide_width(){
	return (int) _wasgo_CubeMesh_wrapper_get_subdivide_width(wasgo_id);
}
void CubeMesh::set_size(Vector3 p_size){
	_wasgo_CubeMesh_wrapper_set_size(wasgo_id, ((Variant) p_size).get_wasgo_id());
}
void CubeMesh::set_subdivide_depth(int p_divisions){
	_wasgo_CubeMesh_wrapper_set_subdivide_depth(wasgo_id, p_divisions);
}
void CubeMesh::set_subdivide_height(int p_divisions){
	_wasgo_CubeMesh_wrapper_set_subdivide_height(wasgo_id, p_divisions);
}
void CubeMesh::set_subdivide_width(int p_subdivide){
	_wasgo_CubeMesh_wrapper_set_subdivide_width(wasgo_id, p_subdivide);
}