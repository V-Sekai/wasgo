
#ifndef WASGO_RUNTIME_H
#define WASGO_RUNTIME_H

// #include "core/object.h"
#include "core/config/engine.h"
#include "core/io/file_access.h"
#include "core/templates/rid_owner.h"
#include "core/variant/variant.h"
#include "resource_loader_wasm.h"
#include "resource_wasm.h"
// #include "core/list.h"

struct WASMModuleCommon;
typedef struct WASMModuleCommon *wasm_module_t;
struct WASMModuleInstanceCommon;
typedef struct WASMModuleInstanceCommon *wasm_module_inst_t;

class WasGoRuntime : public Object {
    GDCLASS(WasGoRuntime, Object);
    static WasGoRuntime *singleton;

	Mutex mutex;
	RID_PtrOwner<WASMModuleCommon> module_rids;

public:
	static WasGoRuntime *get_singleton();
	static char global_heap_buf[512 * 1024 * 100];
	static RuntimeInitArgs init_args;
	RID load_module(Vector<uint8_t> wasm_code, String &r_error);
	void unload_module(RID module_rid);

	wasm_module_inst_t instantiate_module(RID module_rid, uint32_t stack_size, uint32_t heap_size, String &r_error);

	WasGoRuntime();
	~WasGoRuntime();
	void initialize(NativeSymbol symbols[], int native_symbol_size);
};

#endif
