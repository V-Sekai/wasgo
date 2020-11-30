/* THIS FILE IS GENERATED */
#ifndef X509CERTIFICATE_H
#define X509CERTIFICATE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Resource.h"
#include "Error.h"
class X509Certificate : public Resource{
Error load(String p_path);
Error save(String p_path);

X509Certificate(WasGoId p_wasgo_id);
~X509Certificate();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_X509Certificate_wrapper_load(WasGoId wasgo_id, WasGo::WasGoId p_path);
WasGo::WasGoId _wasgo_X509Certificate_wrapper_save(WasGoId wasgo_id, WasGo::WasGoId p_path);
}
#endif