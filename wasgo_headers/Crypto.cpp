/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Crypto.h"
PoolByteArray Crypto::generate_random_bytes(int p_size){
	return PoolByteArray(_wasgo_Crypto_wrapper_generate_random_bytes(wasgo_id, p_size));
}
CryptoKey Crypto::generate_rsa(int p_size){
	return CryptoKey(_wasgo_Crypto_wrapper_generate_rsa(wasgo_id, p_size));
}
X509Certificate Crypto::generate_self_signed_certificate(CryptoKey p_key, String p_issuer_name, String p_not_before, String p_not_after){

    Variant wasgo_var_issuer_name = p_issuer_name;
    int wasgo_size_issuer_name = 10 + String(p_issuer_name).size();
    uint8_t wasgo_buffer_issuer_name[wasgo_size_issuer_name];
    encode_variant(wasgo_var_issuer_name, wasgo_buffer_issuer_name, wasgo_size_issuer_name);
    

    Variant wasgo_var_not_before = p_not_before;
    int wasgo_size_not_before = 10 + String(p_not_before).size();
    uint8_t wasgo_buffer_not_before[wasgo_size_not_before];
    encode_variant(wasgo_var_not_before, wasgo_buffer_not_before, wasgo_size_not_before);
    

    Variant wasgo_var_not_after = p_not_after;
    int wasgo_size_not_after = 10 + String(p_not_after).size();
    uint8_t wasgo_buffer_not_after[wasgo_size_not_after];
    encode_variant(wasgo_var_not_after, wasgo_buffer_not_after, wasgo_size_not_after);
    
	return X509Certificate(_wasgo_Crypto_wrapper_generate_self_signed_certificate(wasgo_id, p_key._get_wasgo_id(), wasgo_buffer_issuer_name, wasgo_size_issuer_name, wasgo_size_issuer_name, wasgo_buffer_not_before, wasgo_size_not_before, wasgo_buffer_not_after, wasgo_size_not_after));
}

Crypto::Crypto(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
Crypto::Crypto(Reference other) : Reference(other._get_wasgo_id()){
}
Crypto::Crypto():Reference(){
}
Crypto Crypto::new_instance(){
    return Crypto(_wasgo_Crypto_constructor());
}
WasGoID Crypto::_get_wasgo_id(){
    return wasgo_id;
}
Crypto::operator bool(){
    return (bool) wasgo_id;
}
