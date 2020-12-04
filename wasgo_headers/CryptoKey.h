/* THIS FILE IS GENERATED */
#ifndef CRYPTOKEY_H
#define CRYPTOKEY_H

#include "wasgo\wasgo.h"

#include "error_list.h"
#include "Resource.h"
#include "ustring.h"
class CryptoKey : public Resource{
public:
Error load(String p_path);
Error save(String p_path);

protected:
public:
explicit CryptoKey(WasGoID p_wasgo_id);
explicit CryptoKey(Resource other);
CryptoKey new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_CryptoKey_wrapper_load(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
WasGoID _wasgo_CryptoKey_wrapper_save(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_CryptoKey_constructor();
            
}
#endif