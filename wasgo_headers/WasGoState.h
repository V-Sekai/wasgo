/* THIS FILE IS GENERATED */
#ifndef WASGOSTATE_H
#define WASGOSTATE_H

#include "stdint.h"

#include "Variant.h"
#include "WasmResource.h"
#include "Node.h"
class WasGoState : public Node{
public: WasGoState();
int get_heap_size();
Dictionary get_properties();
int get_stack_size();
WasmResource get_wasm_script();
void set_heap_size(int p_p_heap_size);
void set_properties(Dictionary p_p_properties);
void set_stack_size(int p_p_stack_size);
void set_wasm_script(WasmResource p_p_wasm_script);
};
#endif