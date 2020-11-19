/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Object.h"
#include "Variant.h"
#include "Reference.h"
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