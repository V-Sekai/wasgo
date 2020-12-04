/* THIS FILE IS GENERATED */
#ifndef WASGOSTATE_H
#define WASGOSTATE_H

#include "wasgo\wasgo.h"

#include "WasmResource.h"
#include "Node.h"
#include "Variant.h"
#include "ustring.h"
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
public:
explicit WasGoState(WasGoID p_wasgo_id);
explicit WasGoState(Node other);
WasGoState new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_WasGoState_wrapper_get_heap_size(WasGoID wasgo_id);
WasGoID _wasgo_WasGoState_wrapper_get_properties(WasGoID wasgo_id);
WasGoID _wasgo_WasGoState_wrapper_get_property(WasGoID wasgo_id, const uint8_t * p_arg0, int p_arg0_wasgo_buffer_size);
int _wasgo_WasGoState_wrapper_get_stack_size(WasGoID wasgo_id);
WasGoID _wasgo_WasGoState_wrapper_get_wasm_script(WasGoID wasgo_id);
void _wasgo_WasGoState_wrapper_set_heap_size(WasGoID wasgo_id, int p_p_heap_size);
void _wasgo_WasGoState_wrapper_set_properties(WasGoID wasgo_id, WasGoID p_p_properties);
void _wasgo_WasGoState_wrapper_set_property(WasGoID wasgo_id, const uint8_t * p_p_property, int p_p_property_wasgo_buffer_size, WasGoID p_arg1);
void _wasgo_WasGoState_wrapper_set_stack_size(WasGoID wasgo_id, int p_p_stack_size);
void _wasgo_WasGoState_wrapper_set_wasm_script(WasGoID wasgo_id, WasGoID p_p_wasm_script);

    //constructor wrappers
    WasGoID _wasgo_WasGoState_constructor();
            
}
#endif