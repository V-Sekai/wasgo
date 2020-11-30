/* THIS FILE IS GENERATED */
#include "X509Certificate.h"
Error X509Certificate::load(String p_path){
	return Error::from_wasgo_id(_wasgo_X509Certificate_wrapper_load(wasgo_id, ((Variant) path).get_wasgo_id()));
}
Error X509Certificate::save(String p_path){
	return Error::from_wasgo_id(_wasgo_X509Certificate_wrapper_save(wasgo_id, ((Variant) path).get_wasgo_id()));
}

X509Certificate::X509Certificate(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
X509Certificate::~X509Certificate(){
}