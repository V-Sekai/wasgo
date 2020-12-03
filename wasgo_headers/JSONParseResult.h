/* THIS FILE IS GENERATED */
#ifndef JSONPARSERESULT_H
#define JSONPARSERESULT_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "Reference.h"
#include "error_list.h"
#include "Variant.h"
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
JSONParseResult(WasGoId p_wasgo_id);
public:
JSONParseResult();
~JSONParseResult();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_JSONParseResult_wrapper_get_error(WasGoId wasgo_id);
int _wasgo_JSONParseResult_wrapper_get_error_line(WasGoId wasgo_id);
void _wasgo_JSONParseResult_wrapper_get_error_string(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_JSONParseResult_wrapper_get_result(WasGoId wasgo_id);
void _wasgo_JSONParseResult_wrapper_set_error(WasGoId wasgo_id, WasGoId p_error);
void _wasgo_JSONParseResult_wrapper_set_error_line(WasGoId wasgo_id, int p_error_line);
void _wasgo_JSONParseResult_wrapper_set_error_string(WasGoId wasgo_id, const uint8_t * p_error_string, int p_error_string_wasgo_buffer_size);
void _wasgo_JSONParseResult_wrapper_set_result(WasGoId wasgo_id, WasGoId p_result);

    //constructor and destructor wrappers
    WasGoId _wasgo_JSONParseResult_constructor();
    void _wasgo_JSONParseResult_destructor(WasGoId p_wasgo_id);
            
}
#endif