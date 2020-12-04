/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PackedDataContainer.h"
Error PackedDataContainer::pack(Variant p_value){
	return Error(_wasgo_PackedDataContainer_wrapper_pack(wasgo_id, p_value._get_wasgo_id()));
}
int PackedDataContainer::size(){
	return (int) _wasgo_PackedDataContainer_wrapper_size(wasgo_id);
}

PackedDataContainer::PackedDataContainer(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
PackedDataContainer::PackedDataContainer(Resource other) : Resource(other._get_wasgo_id()){
    wasgo_id = _wasgo_PackedDataContainer_constructor();
}
PackedDataContainer::new_instance(){
    return PackedDataContainer(_wasgo_PackedDataContainer_constructor());
}