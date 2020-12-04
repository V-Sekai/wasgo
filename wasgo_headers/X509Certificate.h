/* THIS FILE IS GENERATED */
#ifndef X509CERTIFICATE_H
#define X509CERTIFICATE_H

#include "wasgo\wasgo.h"

#include "Resource.h"
#include "error_list.h"
#include "ustring.h"
class X509Certificate : public Resource{
public:
Error load(String p_path);
Error save(String p_path);

protected:
public:
explicit X509Certificate(WasGoId p_wasgo_id);
explicit X509Certificate(Resource other);
X509Certificate new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_X509Certificate_wrapper_load(WasGoId wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
WasGoId _wasgo_X509Certificate_wrapper_save(WasGoId wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);

    //constructor wrappers
    WasGoId _wasgo_X509Certificate_constructor();
            
}
#endif