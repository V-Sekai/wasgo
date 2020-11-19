/* THIS FILE IS GENERATED */
#ifndef _CLASSDB_H
#define _CLASSDB_H

#include <stdint.h>

#include "String.h"
#include "Erro.h"
#include "Object.h"
#include "PoolStringArray.h"
#include "Dictionary.h"
#include "Variant.h"
class _ClassDB : public Object{
public: _ClassDB();
bool  can_instance(String class);
bool  class_exists(String class);
String  class_get_category(String class);
int  class_get_integer_constant(String class, String name);
PoolStringArray  class_get_integer_constant_list(String class, bool no_inheritance = false);
Array  class_get_method_list(String class, bool no_inheritance = false);
Variant  class_get_property(Object object, String property);
Array  class_get_property_list(String class, bool no_inheritance = false);
Dictionary  class_get_signal(String class, String signal);
Array  class_get_signal_list(String class, bool no_inheritance = false);
bool  class_has_integer_constant(String class, String name);
bool  class_has_method(String class, String method, bool no_inheritance = false);
bool  class_has_signal(String class, String signal);
enum.Error  class_set_property(Object object, String property, Variant value);
PoolStringArray  get_class_list();
PoolStringArray  get_class_list();
PoolStringArray  get_inheriters_from_class(String class);
String  get_parent_class(String class);
Variant  instance(String class);
bool  is_class_enabled(String class);
bool  is_parent_class(String class, String inherits);
};
#endif