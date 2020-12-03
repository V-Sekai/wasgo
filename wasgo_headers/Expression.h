/* THIS FILE IS GENERATED */
#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "Object.h"
#include "Reference.h"
#include "error_list.h"
#include "Variant.h"
class Expression : public Reference{
public:
Variant execute(Array p_inputs = (Array) [], Object p_base_instance = (Object) "", bool p_show_error = (bool) true);
String get_error_text();
bool has_execute_failed();
Error parse(String p_expression, PoolStringArray p_input_names = (PoolStringArray) []);

protected:
Expression(WasGoId p_wasgo_id);
public:
Expression();
~Expression();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_Expression_wrapper_execute(WasGoId wasgo_id, WasGoId p_inputs, WasGoId p_base_instance, bool p_show_error);
void _wasgo_Expression_wrapper_get_error_text(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Expression_wrapper_has_execute_failed(WasGoId wasgo_id);
WasGoId _wasgo_Expression_wrapper_parse(WasGoId wasgo_id, const uint8_t * p_expression, int p_expression_wasgo_buffer_size, WasGoId p_input_names);

    //constructor and destructor wrappers
    WasGoId _wasgo_Expression_constructor();
    void _wasgo_Expression_destructor(WasGoId p_wasgo_id);
            
}
#endif