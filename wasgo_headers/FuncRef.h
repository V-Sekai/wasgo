/* THIS FILE IS GENERATED */
#ifndef FUNCREF_H
#define FUNCREF_H

#include "wasgo\wasgoid.h"

#include "Ustring.h"
#include "Reference.h"
#include "Object.h"
#include "Variant.h"
class FuncRef : public Reference{
public:
Variant call_func();
Variant call_funcv(Array p_arg_array);
bool is_valid();
void set_function(String p_name);
void set_instance(Object p_instance);

protected:
public:
explicit FuncRef(WasGoID p_wasgo_id);
explicit FuncRef(Reference other);
FuncRef();
FuncRef new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_FuncRef_wrapper_call_func(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_FuncRef_wrapper_call_funcv(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, WasGoID p_arg_array);
int _wasgo_FuncRef_wrapper_is_valid(WasGoID wasgo_id);
void _wasgo_FuncRef_wrapper_set_function(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_FuncRef_wrapper_set_instance(WasGoID wasgo_id, WasGoID p_instance);

    //constructor wrappers
    WasGoID _wasgo_FuncRef_constructor();
            
}
#endif