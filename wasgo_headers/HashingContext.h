/* THIS FILE IS GENERATED */
#ifndef HASHINGCONTEXT_H
#define HASHINGCONTEXT_H

#include "wasgo\wasgoid.h"

#include "Variant.h"
#include "Reference.h"
#include "error_list.h"
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
explicit HashingContext(WasGoID p_wasgo_id);
explicit HashingContext(Reference other);
HashingContext();
HashingContext new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_HashingContext_wrapper_finish(WasGoID wasgo_id);
WasGoID _wasgo_HashingContext_wrapper_start(WasGoID wasgo_id, WasGoID p_type);
WasGoID _wasgo_HashingContext_wrapper_update(WasGoID wasgo_id, WasGoID p_chunk);

    //constructor wrappers
    WasGoID _wasgo_HashingContext_constructor();
            
}
#endif