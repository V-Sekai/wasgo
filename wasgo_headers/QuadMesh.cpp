/* THIS FILE IS GENERATED */
#include "QuadMesh.h"
Vector2 QuadMesh::get_size(){
	return Vector2::from_wasgo_id(_wasgo_QuadMesh_wrapper_get_size(wasgo_id));
}
void QuadMesh::set_size(Vector2 p_size){
	_wasgo_QuadMesh_wrapper_set_size(wasgo_id, ((Variant) p_size).get_wasgo_id());
}