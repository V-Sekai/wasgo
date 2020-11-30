/* THIS FILE IS GENERATED */
#include "CryptoKey.h"
Error CryptoKey::load(String p_path){
	return Error::from_wasgo_id(_wasgo_CryptoKey_wrapper_load(wasgo_id, ((Variant) path).get_wasgo_id()));
}
Error CryptoKey::save(String p_path){
	return Error::from_wasgo_id(_wasgo_CryptoKey_wrapper_save(wasgo_id, ((Variant) path).get_wasgo_id()));
}

CryptoKey::CryptoKey(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
CryptoKey::~CryptoKey(){
}