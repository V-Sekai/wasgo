/* THIS FILE IS GENERATED */
#ifndef FUNCREF_H
#define FUNCREF_H

#include "stdint.h"

#include "Reference.h"
#include "Variant.h"
#include "Object.h"
class FuncRef : public Reference{
public: FuncRef();
Variant call_func();
Variant call_funcv(Array p_arg_array);
String get_function();
bool is_valid();
void set_function(String p_name);
void set_instance(Object p_instance);
};
#endif