/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODECOMPARE_H
#define VISUALSHADERNODECOMPARE_H

#include "stdint.h"

#include "VisualShaderNode.h"
class VisualShaderNodeCompare : public VisualShaderNode{
public: VisualShaderNodeCompare();
enum ComparisonType{
CTYPE_SCALAR,
CTYPE_VECTOR,
CTYPE_BOOLEAN,
CTYPE_TRANSFORM
};
enum Condition{
COND_ALL,
COND_ANY
};
enum Function{
FUNC_EQUAL,
FUNC_NOT_EQUAL,
FUNC_GREATER_THAN,
FUNC_GREATER_THAN_EQUAL,
FUNC_LESS_THAN,
FUNC_LESS_THAN_EQUAL
};
VisualShaderNodeCompare::ComparisonType get_comparison_type();
VisualShaderNodeCompare::Condition get_condition();
VisualShaderNodeCompare::Function get_function();
void set_comparison_type(VisualShaderNodeCompare::ComparisonType p_type);
void set_condition(VisualShaderNodeCompare::Condition p_condition);
void set_function(VisualShaderNodeCompare::Function p_func);
};
#endif