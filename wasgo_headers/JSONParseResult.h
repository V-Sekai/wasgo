/* THIS FILE IS GENERATED */
#ifndef JSONPARSERESULT_H
#define JSONPARSERESULT_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Reference.h"
#include "Error.h"
class JSONParseResult : public Reference{
Error get_error();
int get_error_line();
String get_error_string();
Variant get_result();
void set_error(Error p_error);
void set_error_line(int p_error_line);
void set_error_string(String p_error_string);
void set_result(Variant p_result);

JSONParseResult(WasGoId p_wasgo_id);
~JSONParseResult();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_JSONParseResult_wrapper_get_error(WasGoId wasgo_id);
int _wasgo_JSONParseResult_wrapper_get_error_line(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_JSONParseResult_wrapper_get_error_string(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_JSONParseResult_wrapper_get_result(WasGoId wasgo_id);
void _wasgo_JSONParseResult_wrapper_set_error(WasGoId wasgo_id, WasGo::WasGoId p_error);
void _wasgo_JSONParseResult_wrapper_set_error_line(WasGoId wasgo_id, int p_error_line);
void _wasgo_JSONParseResult_wrapper_set_error_string(WasGoId wasgo_id, WasGo::WasGoId p_error_string);
void _wasgo_JSONParseResult_wrapper_set_result(WasGoId wasgo_id, WasGo::WasGoId p_result);
}
#endif