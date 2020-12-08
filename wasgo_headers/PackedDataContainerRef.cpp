/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PackedDataContainerRef.h"
int PackedDataContainerRef::size(){
	return (int) _wasgo_PackedDataContainerRef_wrapper_size(wasgo_id);
}

PackedDataContainerRef::PackedDataContainerRef(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
PackedDataContainerRef::PackedDataContainerRef(Reference other) : Reference(other._get_wasgo_id()){
}
PackedDataContainerRef::PackedDataContainerRef():Reference(){
}
PackedDataContainerRef PackedDataContainerRef::new_instance(){
    return PackedDataContainerRef(_wasgo_PackedDataContainerRef_constructor());
}
WasGoID PackedDataContainerRef::_get_wasgo_id(){
    return wasgo_id;
}
PackedDataContainerRef::operator bool(){
    return (bool) wasgo_id;
}
