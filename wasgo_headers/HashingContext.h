/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "PoolByteArray.h"
#include "Erro.h"
#include "Reference.h"
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