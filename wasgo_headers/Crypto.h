/* THIS FILE IS GENERATED */
#ifndef CRYPTO_H
#define CRYPTO_H

#include "wasgo\wasgo.h"

#include "X509Certificate.h"
#include "Variant.h"
#include "Reference.h"
#include "CryptoKey.h"
#include "ustring.h"
class Crypto : public Reference{
public:
PoolByteArray generate_random_bytes(int p_size);
CryptoKey generate_rsa(int p_size);
X509Certificate generate_self_signed_certificate(CryptoKey p_key, String p_issuer_name = String(cn=myserver,o=myorganisation,c=it), String p_not_before = (String) 20140101000000, String p_not_after = (String) 20340101000000);

protected:
Crypto(WasGoId p_wasgo_id);
public:
Crypto();
~Crypto();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_Crypto_wrapper_generate_random_bytes(WasGoId wasgo_id, int p_size);
WasGoId _wasgo_Crypto_wrapper_generate_rsa(WasGoId wasgo_id, int p_size);
WasGoId _wasgo_Crypto_wrapper_generate_self_signed_certificate(WasGoId wasgo_id, WasGoId p_key, const uint8_t * p_issuer_name, int p_issuer_name_wasgo_buffer_size, const uint8_t * p_not_before, int p_not_before_wasgo_buffer_size, const uint8_t * p_not_after, int p_not_after_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_Crypto_constructor();
    void _wasgo_Crypto_destructor(WasGoId p_wasgo_id);
            
}
#endif