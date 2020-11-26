/* THIS FILE IS GENERATED */
#ifndef FUNCREF_H
#define FUNCREF_H

#include <stdint.h>

#include "Object.h"
#include "Reference.h"
#include "String.h"
#include "Variant.h"
class FuncRef : public Reference{
public: FuncRef();
Variant  call_func();
Variant  call_func();
Variant  call_funcv(Array arg_array);
bool  is_valid();
bool  is_valid();
void  set_function(String name);
void  set_instance(Object instance);
};
#endif