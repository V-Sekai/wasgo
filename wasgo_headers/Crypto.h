/* THIS FILE IS GENERATED */
#ifndef CRYPTO_H
#define CRYPTO_H

#include <stdint.h>

#include "String.h"
#include "CryptoKey.h"
#include "PoolByteArray.h"
#include "Reference.h"
#include "X509Certificate.h"
class Crypto : public Reference{
public: Crypto();
PoolByteArray  generate_random_bytes(int size);
CryptoKey  generate_rsa(int size);
X509Certificate  generate_self_signed_certificate(CryptoKey key, String issuer_name = cn=myserver,o=myorganisation,c=it, String not_before = 20140101000000, String not_after = 20340101000000);
};
#endif