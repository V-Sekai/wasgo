/* THIS FILE IS GENERATED */
#ifndef WASGOSTATE_H
#define WASGOSTATE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "WasmResource.h"
#include "Node.h"
class WasGoState : public Node{
int get_heap_size();
Dictionary get_properties();
int get_stack_size();
WasmResource get_wasm_script();
void set_heap_size(int p_p_heap_size);
void set_properties(Dictionary p_p_properties);
void set_stack_size(int p_p_stack_size);
void set_wasm_script(WasmResource p_p_wasm_script);

WasGoState(WasGoId p_wasgo_id);
~WasGoState();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_WasGoState_wrapper_get_heap_size(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_WasGoState_wrapper_get_properties(WasGoId wasgo_id);
int _wasgo_WasGoState_wrapper_get_stack_size(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_WasGoState_wrapper_get_wasm_script(WasGoId wasgo_id);
void _wasgo_WasGoState_wrapper_set_heap_size(WasGoId wasgo_id, int p_p_heap_size);
void _wasgo_WasGoState_wrapper_set_properties(WasGoId wasgo_id, WasGo::WasGoId p_p_properties);
void _wasgo_WasGoState_wrapper_set_stack_size(WasGoId wasgo_id, int p_p_stack_size);
void _wasgo_WasGoState_wrapper_set_wasm_script(WasGoId wasgo_id, WasGo::WasGoId p_p_wasm_script);
}
#endif