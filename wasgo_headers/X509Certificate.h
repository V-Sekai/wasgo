/* THIS FILE IS GENERATED */
#ifndef X509CERTIFICATE_H
#define X509CERTIFICATE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "ustring.h"
#include "error_list.h"
#include "Resource.h"
class X509Certificate : public Resource{
public:
Error load(String p_path);
Error save(String p_path);

X509Certificate(WasGoId p_wasgo_id);
~X509Certificate();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_X509Certificate_wrapper_load(WasGoId wasgo_id, WasGoId p_path);
WasGoId _wasgo_X509Certificate_wrapper_save(WasGoId wasgo_id, WasGoId p_path);
}
#endif