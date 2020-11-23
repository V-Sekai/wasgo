/* THIS FILE IS GENERATED */
#ifndef HASHINGCONTEXT_H
#define HASHINGCONTEXT_H

#include <stdint.h>

#include "Reference.h"
#include "Erro.h"
#include "PoolByteArray.h"
class HashingContext : public Reference{
public: HashingContext();
enum HashType{
HASH_MD5: 0,
HASH_SHA1: 1,
};
PoolByteArray  finish();
PoolByteArray  finish();
enum.Error  start(int type);
enum.Error  update(PoolByteArray chunk);
};
#endif