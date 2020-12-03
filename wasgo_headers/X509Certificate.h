/* THIS FILE IS GENERATED */
#ifndef X509CERTIFICATE_H
#define X509CERTIFICATE_H

#include "wasgo\wasgo.h"

#include "error_list.h"
#include "ustring.h"
#include "Resource.h"
class X509Certificate : public Resource{
public:
Error load(String p_path);
Error save(String p_path);

protected:
X509Certificate(WasGoId p_wasgo_id);
public:
X509Certificate();
~X509Certificate();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_X509Certificate_wrapper_load(WasGoId wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
WasGoId _wasgo_X509Certificate_wrapper_save(WasGoId wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_X509Certificate_constructor();
    void _wasgo_X509Certificate_destructor(WasGoId p_wasgo_id);
            
}
#endif