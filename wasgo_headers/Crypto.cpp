/* THIS FILE IS GENERATED */
#include "Crypto.h"
PoolByteArray Crypto::generate_random_bytes(int p_size){
	return PoolByteArray::from_wasgo_id(_wasgo_Crypto_wrapper_generate_random_bytes(wasgo_id, size));
}
CryptoKey Crypto::generate_rsa(int p_size){
	return CryptoKey::from_wasgo_id(_wasgo_Crypto_wrapper_generate_rsa(wasgo_id, size));
}
X509Certificate Crypto::generate_self_signed_certificate(CryptoKey p_key, String p_issuer_name = (String) CN=myserver,O=myorganisation,C=IT, String p_not_before = (String) 20140101000000, String p_not_after = (String) 20340101000000){
	return X509Certificate::from_wasgo_id(_wasgo_Crypto_wrapper_generate_self_signed_certificate(wasgo_id, ((Variant) key).get_wasgo_id(), ((Variant) issuer_name).get_wasgo_id(), ((Variant) not_before).get_wasgo_id(), ((Variant) not_after).get_wasgo_id()));
}

Crypto::Crypto(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
Crypto::~Crypto(){
}