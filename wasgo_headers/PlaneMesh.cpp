/* THIS FILE IS GENERATED */
#include "PlaneMesh.h"
Vector2 PlaneMesh::get_size(){
	return Vector2::from_wasgo_id(_wasgo_PlaneMesh_wrapper_get_size(wasgo_id));
}
int PlaneMesh::get_subdivide_depth(){
	return (int) _wasgo_PlaneMesh_wrapper_get_subdivide_depth(wasgo_id);
}
int PlaneMesh::get_subdivide_width(){
	return (int) _wasgo_PlaneMesh_wrapper_get_subdivide_width(wasgo_id);
}
void PlaneMesh::set_size(Vector2 p_size){
	_wasgo_PlaneMesh_wrapper_set_size(wasgo_id, ((Variant) p_size).get_wasgo_id());
}
void PlaneMesh::set_subdivide_depth(int p_subdivide){
	_wasgo_PlaneMesh_wrapper_set_subdivide_depth(wasgo_id, p_subdivide);
}
void PlaneMesh::set_subdivide_width(int p_subdivide){
	_wasgo_PlaneMesh_wrapper_set_subdivide_width(wasgo_id, p_subdivide);
}