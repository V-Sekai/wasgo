/* THIS FILE IS GENERATED */
#ifndef CRYPTO_H
#define CRYPTO_H

#include "wasgo\wasgoid.h"

#include "Reference.h"
#include "X509Certificate.h"
#include "Variant.h"
#include "Ustring.h"
#include "CryptoKey.h"
class Crypto : public Reference{
public:
PoolByteArray generate_random_bytes(int p_size);
CryptoKey generate_rsa(int p_size);
X509Certificate generate_self_signed_certificate(CryptoKey p_key, String p_issuer_name = String(cn=myserver,o=myorganisation,c=it), String p_not_before = (String) 20140101000000, String p_not_after = (String) 20340101000000);

protected:
public:
explicit Crypto(WasGoID p_wasgo_id);
explicit Crypto(Reference other);
Crypto();
Crypto new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_Crypto_wrapper_generate_random_bytes(WasGoID wasgo_id, int p_size);
WasGoID _wasgo_Crypto_wrapper_generate_rsa(WasGoID wasgo_id, int p_size);
WasGoID _wasgo_Crypto_wrapper_generate_self_signed_certificate(WasGoID wasgo_id, WasGoID p_key, const uint8_t * p_issuer_name, int wasgo_throwaway, int p_issuer_name_wasgo_buffer_size, const uint8_t * p_not_before, int p_not_before_wasgo_buffer_size, const uint8_t * p_not_after, int p_not_after_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_Crypto_constructor();
            
}
#endif