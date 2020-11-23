/* THIS FILE IS GENERATED */
#ifndef CRYPTOKEY_H
#define CRYPTOKEY_H

#include <stdint.h>

#include "Resource.h"
#include "String.h"
#include "Erro.h"
class CryptoKey : public Resource{
public: CryptoKey();
enum.Error  load(String path);
enum.Error  save(String path);
};
#endif