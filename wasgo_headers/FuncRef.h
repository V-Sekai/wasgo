/* THIS FILE IS GENERATED */
#ifndef FUNCREF_H
#define FUNCREF_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Object.h"
#include "Reference.h"
class FuncRef : public Reference{
Variant call_func();
Variant call_funcv(Array p_arg_array);
String get_function();
bool is_valid();
void set_function(String p_name);
void set_instance(Object p_instance);

FuncRef(WasGoId p_wasgo_id);
~FuncRef();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_FuncRef_wrapper_call_func(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_FuncRef_wrapper_call_funcv(WasGoId wasgo_id, WasGo::WasGoId p_arg_array);
WasGo::WasGoId _wasgo_FuncRef_wrapper_get_function(WasGoId wasgo_id);
int _wasgo_FuncRef_wrapper_is_valid(WasGoId wasgo_id);
void _wasgo_FuncRef_wrapper_set_function(WasGoId wasgo_id, WasGo::WasGoId p_name);
void _wasgo_FuncRef_wrapper_set_instance(WasGoId wasgo_id, WasGo::WasGoId p_instance);
}
#endif