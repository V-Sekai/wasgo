/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "JSONParseResult.h"
#include "Object.h"
#include "Variant.h"
class _JSON : public Object{
public: _JSON();
JSONParseResult  parse(String json);
String  print(Variant value, String indent = "", bool sort_keys = false);
};