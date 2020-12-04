/* THIS FILE IS GENERATED */
#ifndef FUNCREF_H
#define FUNCREF_H

#include "wasgo\wasgo.h"

#include "Reference.h"
#include "Variant.h"
#include "Object.h"
#include "ustring.h"
class FuncRef : public Reference{
public:
Variant call_func();
Variant call_funcv(Array p_arg_array);
String get_function();
bool is_valid();
void set_function(String p_name);
void set_instance(Object p_instance);

protected:
public:
explicit FuncRef(WasGoID p_wasgo_id);
explicit FuncRef(Reference other);
FuncRef new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_FuncRef_wrapper_call_func(WasGoID wasgo_id);
WasGoID _wasgo_FuncRef_wrapper_call_funcv(WasGoID wasgo_id, WasGoID p_arg_array);
void _wasgo_FuncRef_wrapper_get_function(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_FuncRef_wrapper_is_valid(WasGoID wasgo_id);
void _wasgo_FuncRef_wrapper_set_function(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_FuncRef_wrapper_set_instance(WasGoID wasgo_id, WasGoID p_instance);

    //constructor wrappers
    WasGoID _wasgo_FuncRef_constructor();
            
}
#endif