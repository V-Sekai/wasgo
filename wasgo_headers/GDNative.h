/* THIS FILE IS GENERATED */
#ifndef GDNATIVE_H
#define GDNATIVE_H

#include <stdint.h>

#include "Reference.h"
#include "String.h"
#include "GDNativeLibrary.h"
#include "Variant.h"
class GDNative : public Reference{
public: GDNative();
Variant  call_native(String calling_type, String procedure_name, Array arguments);
GDNativeLibrary  get_library();
GDNativeLibrary  get_library();
bool  initialize();
bool  initialize();
void  set_library(GDNativeLibrary library);
bool  terminate();
bool  terminate();
};
#endif