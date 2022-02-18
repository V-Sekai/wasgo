#include "wasgo_runtime.h"
#include "include/wasgo_function_table.h"

char WasGoRuntime::global_heap_buf[512 * 1024 * 100];
WasGoRuntime *WasGoRuntime::singleton = NULL;
RuntimeInitArgs WasGoRuntime::init_args;

WasGoRuntime *WasGoRuntime::get_singleton() {
  return singleton;
}

//wasm_module_t WasGoRuntime::load_module(String script_path){
wasm_module_t WasGoRuntime::load_module(Vector<uint8_t> wasm_code){
	MutexLock l(mutex);
	int buf_size = wasm_code.size(); //buffer_length
	uint8_t *buffer = (uint8_t *)wasm_code.ptr(); //buffer

	char error_buf[128];

	wasm_module_t res = wasm_runtime_load(buffer, buf_size, error_buf, sizeof(error_buf));
	return res;
}

WasGoRuntime::WasGoRuntime() {
	singleton = this;
	singleton->initialize(native_symbols, sizeof(native_symbols) / sizeof(NativeSymbol));
}

WasGoRuntime::~WasGoRuntime() {
  //void get_key_list(List<TKey> *p_keys) const {

  List<String> keys;
  script_module_map.get_key_list(&keys);
  List<String>::Element *curr = keys.front();
  while(curr->next() != NULL){
    wasm_runtime_unload(script_module_map[curr->get()]);
    curr = curr->next();
  }
  wasm_runtime_destroy();
}

void WasGoRuntime::initialize(NativeSymbol symbols[], int native_symbol_size) {
	memset(&init_args, 0, sizeof(RuntimeInitArgs));

	init_args.mem_alloc_type = Alloc_With_Pool;
	init_args.mem_alloc_option.pool.heap_buf = WasGoRuntime::global_heap_buf;
	init_args.mem_alloc_option.pool.heap_size = sizeof(WasGoRuntime::global_heap_buf);

	// Native symbols need below registration phase
	init_args.n_native_symbols = native_symbol_size;
	init_args.native_module_name = "env";
	init_args.native_symbols = symbols;

	if (!wasm_runtime_full_init(&init_args)) {
		printf("Init Wasgo runtime environment failed.\n");
	} else {
		printf("Wasgo runtime environment running.\n");
	}
}