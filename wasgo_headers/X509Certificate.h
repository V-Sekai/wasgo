/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Erro.h"
#include "String.h"
#include "Resource.h"
class X509Certificate : public Resource{
public: X509Certificate();
enum.Error  load(String path);
enum.Error  save(String path);
};