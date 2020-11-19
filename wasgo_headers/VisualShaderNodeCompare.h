/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODECOMPARE_H
#define VISUALSHADERNODECOMPARE_H

#include <stdint.h>

#include "VisualShaderNode.h"
class VisualShaderNodeCompare : public VisualShaderNode{
public: VisualShaderNodeCompare();
enum ComparisonType{
CTYPE_SCALAR: 0,
CTYPE_VECTOR: 1,
CTYPE_BOOLEAN: 2,
};
enum Function{
FUNC_EQUAL: 0,
FUNC_NOT_EQUAL: 1,
FUNC_GREATER_THAN: 2,
FUNC_GREATER_THAN_EQUAL: 3,
FUNC_LESS_THAN: 4,
};
enum Condition{
COND_ALL: 0,
};
enum.VisualShaderNodeCompare::ComparisonType  get_comparison_type();
enum.VisualShaderNodeCompare::ComparisonType  get_comparison_type();
enum.VisualShaderNodeCompare::Condition  get_condition();
enum.VisualShaderNodeCompare::Condition  get_condition();
enum.VisualShaderNodeCompare::Function  get_function();
enum.VisualShaderNodeCompare::Function  get_function();
void  set_comparison_type(int type);
void  set_condition(int condition);
void  set_function(int func);
};
#endif