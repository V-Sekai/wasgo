/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PackedDataContainer.h"
Error PackedDataContainer::pack(Variant p_value){

    Variant wasgo_var_value = p_value;
    uint8_t wasgo_buffer_value[256];
    int wasgo_size_value = 256;
    encode_variant(wasgo_var_value, wasgo_buffer_value, wasgo_size_value);
    
	return Error(_wasgo_PackedDataContainer_wrapper_pack(wasgo_id, wasgo_buffer_value, wasgo_size_value));
}
int PackedDataContainer::size(){
	return (int) _wasgo_PackedDataContainer_wrapper_size(wasgo_id);
}

PackedDataContainer::PackedDataContainer(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
PackedDataContainer::PackedDataContainer(Resource other) : Resource(other._get_wasgo_id()){
}
PackedDataContainer::PackedDataContainer():Resource(){
}
PackedDataContainer PackedDataContainer::new_instance(){
    return PackedDataContainer(_wasgo_PackedDataContainer_constructor());
}
WasGoID PackedDataContainer::_get_wasgo_id(){
    return wasgo_id;
}
PackedDataContainer::operator bool(){
    return (bool) wasgo_id;
}
