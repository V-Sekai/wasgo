/* THIS FILE IS GENERATED */
#ifndef CRYPTOKEY_H
#define CRYPTOKEY_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "ustring.h"
#include "error_list.h"
#include "Resource.h"
class CryptoKey : public Resource{
public:
Error load(String p_path);
Error save(String p_path);

CryptoKey(WasGoId p_wasgo_id);
~CryptoKey();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_CryptoKey_wrapper_load(WasGoId wasgo_id, WasGoId p_path);
WasGoId _wasgo_CryptoKey_wrapper_save(WasGoId wasgo_id, WasGoId p_path);
}
#endif