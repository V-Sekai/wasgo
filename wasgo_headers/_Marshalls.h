/* THIS FILE IS GENERATED */
#ifndef _MARSHALLS_H
#define _MARSHALLS_H

#include <stdint.h>

#include "PoolByteArray.h"
#include "Reference.h"
#include "String.h"
#include "Variant.h"
class _Marshalls : public Reference{
public: _Marshalls();
PoolByteArray  base64_to_raw(String base64_str);
String  base64_to_utf8(String base64_str);
Variant  base64_to_variant(String base64_str, bool allow_objects = false);
String  raw_to_base64(PoolByteArray array);
String  utf8_to_base64(String utf8_str);
String  variant_to_base64(Variant variant, bool full_objects = false);
};
#endif