/* THIS FILE IS GENERATED */
#ifndef CRYPTO_H
#define CRYPTO_H

#include "stdint.h"

#include "Reference.h"
#include "Variant.h"
#include "CryptoKey.h"
#include "X509Certificate.h"
class Crypto : public Reference{
public: Crypto();
PoolByteArray generate_random_bytes(int p_size);
CryptoKey generate_rsa(int p_size);
X509Certificate generate_self_signed_certificate(CryptoKey p_key, String p_issuer_name = (String) CN=myserver,O=myorganisation,C=IT, String p_not_before = (String) 20140101000000, String p_not_after = (String) 20340101000000);
};
#endif