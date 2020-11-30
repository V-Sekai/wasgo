/* THIS FILE IS GENERATED */
#ifndef CRYPTO_H
#define CRYPTO_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "CryptoKey.h"
#include "X509Certificate.h"
#include "Reference.h"
class Crypto : public Reference{
PoolByteArray generate_random_bytes(int p_size);
CryptoKey generate_rsa(int p_size);
X509Certificate generate_self_signed_certificate(CryptoKey p_key, String p_issuer_name = (String) CN=myserver,O=myorganisation,C=IT, String p_not_before = (String) 20140101000000, String p_not_after = (String) 20340101000000);

Crypto(WasGoId p_wasgo_id);
~Crypto();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_Crypto_wrapper_generate_random_bytes(WasGoId wasgo_id, int p_size);
WasGo::WasGoId _wasgo_Crypto_wrapper_generate_rsa(WasGoId wasgo_id, int p_size);
WasGo::WasGoId _wasgo_Crypto_wrapper_generate_self_signed_certificate(WasGoId wasgo_id, WasGo::WasGoId p_key, WasGo::WasGoId p_issuer_name, WasGo::WasGoId p_not_before, WasGo::WasGoId p_not_after);
}
#endif