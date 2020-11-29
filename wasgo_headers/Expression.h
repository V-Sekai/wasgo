/* THIS FILE IS GENERATED */
#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "stdint.h"

#include "Error.h"
#include "Variant.h"
#include "Reference.h"
#include "Object.h"
class Expression : public Reference{
public: Expression();
Variant execute(Array p_inputs = (Array) [], Object p_base_instance = (Object) "", bool p_show_error = (bool) True);
String get_error_text();
bool has_execute_failed();
Error parse(String p_expression, PoolStringArray p_input_names = (PoolStringArray) []);
};
#endif