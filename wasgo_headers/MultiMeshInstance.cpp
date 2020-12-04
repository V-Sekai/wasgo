/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "MultiMeshInstance.h"
MultiMesh MultiMeshInstance::get_multimesh(){
	return MultiMesh(_wasgo_MultiMeshInstance_wrapper_get_multimesh(wasgo_id));
}
void MultiMeshInstance::set_multimesh(MultiMesh p_multimesh){
	_wasgo_MultiMeshInstance_wrapper_set_multimesh(wasgo_id, p_multimesh._get_wasgo_id());
}

MultiMeshInstance::MultiMeshInstance(WasGoId p_wasgo_id) : GeometryInstance(p_wasgo_id){
}
MultiMeshInstance::MultiMeshInstance(GeometryInstance other) : GeometryInstance(other._get_wasgo_id()){
    wasgo_id = _wasgo_MultiMeshInstance_constructor();
}
MultiMeshInstance::new_instance(){
    return MultiMeshInstance(_wasgo_MultiMeshInstance_constructor());
}