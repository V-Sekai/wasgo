/* THIS FILE IS GENERATED */
#ifndef HASHINGCONTEXT_H
#define HASHINGCONTEXT_H

#include "stdint.h"

#include "Reference.h"
#include "Variant.h"
#include "Error.h"
class HashingContext : public Reference{
public: HashingContext();
enum HashType{
HASH_MD5,
HASH_SHA1,
HASH_SHA256
};
PoolByteArray finish();
Error start(HashingContext::HashType p_type);
Error update(PoolByteArray p_chunk);
};
#endif