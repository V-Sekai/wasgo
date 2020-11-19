/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Variant.h"
#include "GDNativeLibrary.h"
#include "Script.h"
class NativeScript : public Script{
public: NativeScript();
String  get_class_documentation();
String  get_class_documentation();
String  get_class_name();
String  get_class_name();
GDNativeLibrary  get_library();
GDNativeLibrary  get_library();
String  get_method_documentation(String method);
String  get_property_documentation(String path);
String  get_script_class_icon_path();
String  get_script_class_icon_path();
String  get_script_class_name();
String  get_script_class_name();
String  get_signal_documentation(String signal_name);
Variant  new();
Variant  new();
void  set_class_name(String class_name);
void  set_library(GDNativeLibrary library);
void  set_script_class_icon_path(String icon_path);
void  set_script_class_name(String class_name);
};