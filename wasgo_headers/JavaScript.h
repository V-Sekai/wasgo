/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Object.h"
#include "Variant.h"
class JavaScript : public Object{
public: JavaScript();
Variant  eval(String code, bool use_global_execution_context = false);
};