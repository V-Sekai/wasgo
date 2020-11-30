
#ifndef WASGO_RUNTIME_H
#define WASGO_RUNTIME_H

#include "core/object.h"
#include "core/os/file_access.h"
#include "core/variant.h"
#include "core/engine.h"
#include "wasm_export.h"
#include "resource_loader_wasm.h"
#include "resource_wasm.h"
#include "core/list.h"

  class WasGoRuntime : public Object {
    GDCLASS(WasGoRuntime, Object);
    static WasGoRuntime *singleton;

public:
	static WasGoRuntime *get_singleton();
	static char global_heap_buf[512 * 1024 * 100];
	static RuntimeInitArgs init_args;
	wasm_module_t load_module(Ref<WasmResource> wasm);
	//Error init();

	WasGoRuntime();
	~WasGoRuntime();
	void initialize(NativeSymbol native_symbols[]);

private:
	HashMap<String, wasm_module_t> script_module_map;
};

#endif
