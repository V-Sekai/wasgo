/* THIS FILE IS GENERATED */
#ifndef X509CERTIFICATE_H
#define X509CERTIFICATE_H

#include <stdint.h>

#include "Resource.h"
#include "String.h"
#include "Erro.h"
class X509Certificate : public Resource{
public: X509Certificate();
enum.Error  load(String path);
enum.Error  save(String path);
};
#endif