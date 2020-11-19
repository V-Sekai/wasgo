/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Reference.h"
#include "Variant.h"
#include "GDNativeLibrary.h"
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