/* THIS FILE IS GENERATED */
#include "EncodedObjectAsID.h"
int EncodedObjectAsID::get_object_id(){
	return (int) _wasgo_EncodedObjectAsID_wrapper_get_object_id(wasgo_id));
}
void EncodedObjectAsID::set_object_id(int p_id){
	_wasgo_EncodedObjectAsID_wrapper_set_object_id(wasgo_id, id);
}

EncodedObjectAsID::EncodedObjectAsID(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
EncodedObjectAsID::~EncodedObjectAsID(){
}