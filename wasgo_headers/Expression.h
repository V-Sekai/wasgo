/* THIS FILE IS GENERATED */
#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Object.h"
#include "Reference.h"
#include "Error.h"
class Expression : public Reference{
Variant execute(Array p_inputs = (Array) [], Object p_base_instance = (Object) "", bool p_show_error = (bool) True);
String get_error_text();
bool has_execute_failed();
Error parse(String p_expression, PoolStringArray p_input_names = (PoolStringArray) []);

Expression(WasGoId p_wasgo_id);
~Expression();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_Expression_wrapper_execute(WasGoId wasgo_id, WasGo::WasGoId p_inputs, WasGo::WasGoId p_base_instance, bool p_show_error);
WasGo::WasGoId _wasgo_Expression_wrapper_get_error_text(WasGoId wasgo_id);
int _wasgo_Expression_wrapper_has_execute_failed(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Expression_wrapper_parse(WasGoId wasgo_id, WasGo::WasGoId p_expression, WasGo::WasGoId p_input_names);
}
#endif