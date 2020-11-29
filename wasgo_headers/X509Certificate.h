/* THIS FILE IS GENERATED */
#ifndef X509CERTIFICATE_H
#define X509CERTIFICATE_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
#include "Error.h"
class X509Certificate : public Resource{
public: X509Certificate();
Error load(String p_path);
Error save(String p_path);
};
#endif