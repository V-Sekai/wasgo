/* THIS FILE IS GENERATED */
#include "StreamTexture.h"
String StreamTexture::get_load_path(){
	return String::from_wasgo_id(_wasgo_StreamTexture_wrapper_get_load_path(wasgo_id));
}
Error StreamTexture::load(String p_path){
	return Error::from_wasgo_id(_wasgo_StreamTexture_wrapper_load(wasgo_id, ((Variant) p_path).get_wasgo_id()));
}