/* THIS FILE IS GENERATED */
#ifndef X509CERTIFICATE_H
#define X509CERTIFICATE_H

#include "wasgo\wasgoid.h"

#include "Resource.h"
#include "Ustring.h"
#include "error_list.h"
class X509Certificate : public Resource{
public:
Error load(String p_path);
Error save(String p_path);

protected:
public:
explicit X509Certificate(WasGoID p_wasgo_id);
explicit X509Certificate(Resource other);
X509Certificate();
X509Certificate new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_X509Certificate_wrapper_load(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
WasGoID _wasgo_X509Certificate_wrapper_save(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_X509Certificate_constructor();
            
}
#endif