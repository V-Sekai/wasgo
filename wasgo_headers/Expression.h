/* THIS FILE IS GENERATED */
#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <stdint.h>

#include "String.h"
#include "Reference.h"
#include "Erro.h"
#include "Object.h"
#include "PoolStringArray.h"
#include "Variant.h"
class Expression : public Reference{
public: Expression();
Variant  execute(Array inputs = [], Object base_instance = null, bool show_error = true);
String  get_error_text();
String  get_error_text();
bool  has_execute_failed();
bool  has_execute_failed();
enum.Error  parse(String expression, PoolStringArray input_names = []);
};
#endif