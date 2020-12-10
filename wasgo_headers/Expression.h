/* THIS FILE IS GENERATED */
#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "wasgo\wasgoid.h"

#include "error_list.h"
#include "Reference.h"
#include "Object.h"
#include "Variant.h"
#include "Ustring.h"
class Expression : public Reference{
public:
Variant execute(Array p_inputs = Array(), Object p_base_instance = Object(), bool p_show_error = (bool) true);
String get_error_text();
bool has_execute_failed();
Error parse(String p_expression, PoolStringArray p_input_names = PoolStringArray());

protected:
public:
explicit Expression(WasGoID p_wasgo_id);
explicit Expression(Reference other);
Expression();
Expression new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Expression_wrapper_execute(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, WasGoID p_inputs, WasGoID p_base_instance, bool p_show_error);
void _wasgo_Expression_wrapper_get_error_text(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Expression_wrapper_has_execute_failed(WasGoID wasgo_id);
WasGoID _wasgo_Expression_wrapper_parse(WasGoID wasgo_id, const uint8_t * p_expression, int p_expression_wasgo_buffer_size, int wasgo_throwaway, WasGoID p_input_names);

    //constructor wrappers
    WasGoID _wasgo_Expression_constructor();
            
}
#endif