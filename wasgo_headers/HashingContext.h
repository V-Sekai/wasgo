/* THIS FILE IS GENERATED */
#ifndef HASHINGCONTEXT_H
#define HASHINGCONTEXT_H

#include "wasgo\wasgo.h"

#include "Reference.h"
#include "error_list.h"
#include "Variant.h"
class HashingContext : public Reference{
public:
enum HashType{
HASH_MD5,
HASH_SHA1,
HASH_SHA256
};
PoolByteArray finish();
Error start(HashingContext::HashType p_type);
Error update(PoolByteArray p_chunk);

protected:
HashingContext(WasGoId p_wasgo_id);
public:
HashingContext();
~HashingContext();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_HashingContext_wrapper_finish(WasGoId wasgo_id);
WasGoId _wasgo_HashingContext_wrapper_start(WasGoId wasgo_id, WasGoId p_type);
WasGoId _wasgo_HashingContext_wrapper_update(WasGoId wasgo_id, WasGoId p_chunk);

    //constructor and destructor wrappers
    WasGoId _wasgo_HashingContext_constructor();
    void _wasgo_HashingContext_destructor(WasGoId p_wasgo_id);
            
}
#endif