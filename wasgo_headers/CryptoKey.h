/* THIS FILE IS GENERATED */
#ifndef CRYPTOKEY_H
#define CRYPTOKEY_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
#include "Error.h"
class CryptoKey : public Resource{
public: CryptoKey();
Error load(String p_path);
Error save(String p_path);
};
#endif