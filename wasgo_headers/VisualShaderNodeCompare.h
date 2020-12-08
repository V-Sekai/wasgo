/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODECOMPARE_H
#define VISUALSHADERNODECOMPARE_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeCompare : public VisualShaderNode{
public:
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

protected:
public:
explicit VisualShaderNodeCompare(WasGoID p_wasgo_id);
explicit VisualShaderNodeCompare(VisualShaderNode other);
VisualShaderNodeCompare();
VisualShaderNodeCompare new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_VisualShaderNodeCompare_wrapper_get_comparison_type(WasGoID wasgo_id);
WasGoID _wasgo_VisualShaderNodeCompare_wrapper_get_condition(WasGoID wasgo_id);
WasGoID _wasgo_VisualShaderNodeCompare_wrapper_get_function(WasGoID wasgo_id);
void _wasgo_VisualShaderNodeCompare_wrapper_set_comparison_type(WasGoID wasgo_id, WasGoID p_type);
void _wasgo_VisualShaderNodeCompare_wrapper_set_condition(WasGoID wasgo_id, WasGoID p_condition);
void _wasgo_VisualShaderNodeCompare_wrapper_set_function(WasGoID wasgo_id, WasGoID p_func);

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeCompare_constructor();
            
}
#endif