/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "EncodedObjectAsID.h"
int EncodedObjectAsID::get_object_id(){
	return (int) _wasgo_EncodedObjectAsID_wrapper_get_object_id(wasgo_id);
}
void EncodedObjectAsID::set_object_id(int p_id){
	_wasgo_EncodedObjectAsID_wrapper_set_object_id(wasgo_id, p_id);
}

EncodedObjectAsID::EncodedObjectAsID(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
EncodedObjectAsID::EncodedObjectAsID(Reference other) : Reference(other._get_wasgo_id()){
    wasgo_id = _wasgo_EncodedObjectAsID_constructor();
}
EncodedObjectAsID::new_instance(){
    return EncodedObjectAsID(_wasgo_EncodedObjectAsID_constructor());
}