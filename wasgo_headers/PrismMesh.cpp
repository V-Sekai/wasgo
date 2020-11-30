/* THIS FILE IS GENERATED */
#include "PrismMesh.h"
float PrismMesh::get_left_to_right(){
	return (float) _wasgo_PrismMesh_wrapper_get_left_to_right(wasgo_id));
}
Vector3 PrismMesh::get_size(){
	return Vector3::from_wasgo_id(_wasgo_PrismMesh_wrapper_get_size(wasgo_id));
}
int PrismMesh::get_subdivide_depth(){
	return (int) _wasgo_PrismMesh_wrapper_get_subdivide_depth(wasgo_id));
}
int PrismMesh::get_subdivide_height(){
	return (int) _wasgo_PrismMesh_wrapper_get_subdivide_height(wasgo_id));
}
int PrismMesh::get_subdivide_width(){
	return (int) _wasgo_PrismMesh_wrapper_get_subdivide_width(wasgo_id));
}
void PrismMesh::set_left_to_right(float p_left_to_right){
	_wasgo_PrismMesh_wrapper_set_left_to_right(wasgo_id, left_to_right);
}
void PrismMesh::set_size(Vector3 p_size){
	_wasgo_PrismMesh_wrapper_set_size(wasgo_id, ((Variant) size).get_wasgo_id());
}
void PrismMesh::set_subdivide_depth(int p_segments){
	_wasgo_PrismMesh_wrapper_set_subdivide_depth(wasgo_id, segments);
}
void PrismMesh::set_subdivide_height(int p_segments){
	_wasgo_PrismMesh_wrapper_set_subdivide_height(wasgo_id, segments);
}
void PrismMesh::set_subdivide_width(int p_segments){
	_wasgo_PrismMesh_wrapper_set_subdivide_width(wasgo_id, segments);
}

PrismMesh::PrismMesh(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
PrismMesh::~PrismMesh(){
}