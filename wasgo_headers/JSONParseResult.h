/* THIS FILE IS GENERATED */
#ifndef JSONPARSERESULT_H
#define JSONPARSERESULT_H

#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Reference.h"
#include "error_list.h"
#include "ustring.h"
class JSONParseResult : public Reference{
public:
Error get_error();
int get_error_line();
String get_error_string();
Variant get_result();
void set_error(Error p_error);
void set_error_line(int p_error_line);
void set_error_string(String p_error_string);
void set_result(Variant p_result);

protected:
public:
explicit JSONParseResult(WasGoID p_wasgo_id);
explicit JSONParseResult(Reference other);
JSONParseResult new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_JSONParseResult_wrapper_get_error(WasGoID wasgo_id);
int _wasgo_JSONParseResult_wrapper_get_error_line(WasGoID wasgo_id);
void _wasgo_JSONParseResult_wrapper_get_error_string(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_JSONParseResult_wrapper_get_result(WasGoID wasgo_id);
void _wasgo_JSONParseResult_wrapper_set_error(WasGoID wasgo_id, WasGoID p_error);
void _wasgo_JSONParseResult_wrapper_set_error_line(WasGoID wasgo_id, int p_error_line);
void _wasgo_JSONParseResult_wrapper_set_error_string(WasGoID wasgo_id, const uint8_t * p_error_string, int p_error_string_wasgo_buffer_size);
void _wasgo_JSONParseResult_wrapper_set_result(WasGoID wasgo_id, WasGoID p_result);

    //constructor wrappers
    WasGoID _wasgo_JSONParseResult_constructor();
            
}
#endif