/* THIS FILE IS GENERATED */
#ifndef CRYPTOKEY_H
#define CRYPTOKEY_H

#include "wasgo\wasgo.h"

#include "error_list.h"
#include "ustring.h"
#include "Resource.h"
class CryptoKey : public Resource{
public:
Error load(String p_path);
Error save(String p_path);

protected:
CryptoKey(WasGoId p_wasgo_id);
public:
CryptoKey();
~CryptoKey();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_CryptoKey_wrapper_load(WasGoId wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
WasGoId _wasgo_CryptoKey_wrapper_save(WasGoId wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_CryptoKey_constructor();
    void _wasgo_CryptoKey_destructor(WasGoId p_wasgo_id);
            
}
#endif