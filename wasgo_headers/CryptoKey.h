/* THIS FILE IS GENERATED */
#ifndef CRYPTOKEY_H
#define CRYPTOKEY_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Resource.h"
#include "Error.h"
class CryptoKey : public Resource{
Error load(String p_path);
Error save(String p_path);

CryptoKey(WasGoId p_wasgo_id);
~CryptoKey();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_CryptoKey_wrapper_load(WasGoId wasgo_id, WasGo::WasGoId p_path);
WasGo::WasGoId _wasgo_CryptoKey_wrapper_save(WasGoId wasgo_id, WasGo::WasGoId p_path);
}
#endif