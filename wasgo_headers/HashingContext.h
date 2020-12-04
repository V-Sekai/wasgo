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
public:
explicit HashingContext(WasGoId p_wasgo_id);
explicit HashingContext(Reference other);
HashingContext new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_HashingContext_wrapper_finish(WasGoId wasgo_id);
WasGoId _wasgo_HashingContext_wrapper_start(WasGoId wasgo_id, WasGoId p_type);
WasGoId _wasgo_HashingContext_wrapper_update(WasGoId wasgo_id, WasGoId p_chunk);

    //constructor wrappers
    WasGoId _wasgo_HashingContext_constructor();
            
}
#endif