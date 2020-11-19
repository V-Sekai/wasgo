/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Reference.h"
#include "Object.h"
#include "Variant.h"
#include "Erro.h"
#include "PoolStringArray.h"
class Expression : public Reference{
public: Expression();
Variant  execute(Array inputs = [], Object base_instance = null, bool show_error = true);
String  get_error_text();
String  get_error_text();
bool  has_execute_failed();
bool  has_execute_failed();
enum.Error  parse(String expression, PoolStringArray input_names = []);
};