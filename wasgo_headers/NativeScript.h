/* THIS FILE IS GENERATED */
#ifndef NATIVESCRIPT_H
#define NATIVESCRIPT_H

#include <stdint.h>

#include "GDNativeLibrary.h"
#include "String.h"
#include "Script.h"
#include "Variant.h"
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
#endif