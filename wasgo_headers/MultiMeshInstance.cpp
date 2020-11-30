/* THIS FILE IS GENERATED */
#include "MultiMeshInstance.h"
MultiMesh MultiMeshInstance::get_multimesh(){
	return MultiMesh::from_wasgo_id(_wasgo_MultiMeshInstance_wrapper_get_multimesh(wasgo_id));
}
void MultiMeshInstance::set_multimesh(MultiMesh p_multimesh){
	_wasgo_MultiMeshInstance_wrapper_set_multimesh(wasgo_id, ((Variant) multimesh).get_wasgo_id());
}

MultiMeshInstance::MultiMeshInstance(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
MultiMeshInstance::~MultiMeshInstance(){
}