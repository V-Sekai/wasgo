/* THIS FILE IS GENERATED */
#ifndef CRYPTOKEY_H
#define CRYPTOKEY_H

#include <stdint.h>

#include "Erro.h"
#include "String.h"
#include "Resource.h"
class CryptoKey : public Resource{
public: CryptoKey();
enum.Error  load(String path);
enum.Error  save(String path);
};
#endif