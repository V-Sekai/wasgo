/* THIS FILE IS GENERATED */
#ifndef WASGOSTATE_H
#define WASGOSTATE_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "Variant.h"
#include "Node.h"
#include "WasmResource.h"
class WasGoState : public Node{
public:
int get_heap_size();
Dictionary get_properties();
Variant get_property(String p_arg0);
int get_stack_size();
WasmResource get_wasm_script();
void set_heap_size(int p_p_heap_size);
void set_properties(Dictionary p_p_properties);
void set_property(String p_p_property, Variant p_arg1);
void set_stack_size(int p_p_stack_size);
void set_wasm_script(WasmResource p_p_wasm_script);

protected:
WasGoState(WasGoId p_wasgo_id);
public:
WasGoState();
~WasGoState();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_WasGoState_wrapper_get_heap_size(WasGoId wasgo_id);
WasGoId _wasgo_WasGoState_wrapper_get_properties(WasGoId wasgo_id);
WasGoId _wasgo_WasGoState_wrapper_get_property(WasGoId wasgo_id, const uint8_t * p_arg0, int p_arg0_wasgo_buffer_size);
int _wasgo_WasGoState_wrapper_get_stack_size(WasGoId wasgo_id);
WasGoId _wasgo_WasGoState_wrapper_get_wasm_script(WasGoId wasgo_id);
void _wasgo_WasGoState_wrapper_set_heap_size(WasGoId wasgo_id, int p_p_heap_size);
void _wasgo_WasGoState_wrapper_set_properties(WasGoId wasgo_id, WasGoId p_p_properties);
void _wasgo_WasGoState_wrapper_set_property(WasGoId wasgo_id, const uint8_t * p_p_property, int p_p_property_wasgo_buffer_size, WasGoId p_arg1);
void _wasgo_WasGoState_wrapper_set_stack_size(WasGoId wasgo_id, int p_p_stack_size);
void _wasgo_WasGoState_wrapper_set_wasm_script(WasGoId wasgo_id, WasGoId p_p_wasm_script);

    //constructor and destructor wrappers
    WasGoId _wasgo_WasGoState_constructor();
    void _wasgo_WasGoState_destructor(WasGoId p_wasgo_id);
            
}
#endif