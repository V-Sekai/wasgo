/* THIS FILE IS GENERATED */
#ifndef FUNCREF_H
#define FUNCREF_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "Object.h"
#include "Variant.h"
#include "Reference.h"
class FuncRef : public Reference{
public:
Variant call_func();
Variant call_funcv(Array p_arg_array);
String get_function();
bool is_valid();
void set_function(String p_name);
void set_instance(Object p_instance);

protected:
FuncRef(WasGoId p_wasgo_id);
public:
FuncRef();
~FuncRef();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_FuncRef_wrapper_call_func(WasGoId wasgo_id);
WasGoId _wasgo_FuncRef_wrapper_call_funcv(WasGoId wasgo_id, WasGoId p_arg_array);
void _wasgo_FuncRef_wrapper_get_function(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_FuncRef_wrapper_is_valid(WasGoId wasgo_id);
void _wasgo_FuncRef_wrapper_set_function(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_FuncRef_wrapper_set_instance(WasGoId wasgo_id, WasGoId p_instance);

    //constructor and destructor wrappers
    WasGoId _wasgo_FuncRef_constructor();
    void _wasgo_FuncRef_destructor(WasGoId p_wasgo_id);
            
}
#endif