/* THIS FILE IS GENERATED */
#ifndef CRYPTOKEY_H
#define CRYPTOKEY_H

#include "wasgo\wasgoid.h"

#include "Ustring.h"
#include "error_list.h"
#include "Resource.h"
class CryptoKey : public Resource{
public:
Error load(String p_path);
Error save(String p_path);

protected:
public:
explicit CryptoKey(WasGoID p_wasgo_id);
explicit CryptoKey(Resource other);
CryptoKey();
CryptoKey new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_CryptoKey_wrapper_load(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
WasGoID _wasgo_CryptoKey_wrapper_save(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_CryptoKey_constructor();
            
}
#endif