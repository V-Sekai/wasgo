#include "wasgo_runtime.h"
#include "include/wasgo_function_table.h"

char WasGoRuntime::global_heap_buf[512 * 1024 * 100];
WasGoRuntime *WasGoRuntime::singleton = NULL;
RuntimeInitArgs WasGoRuntime::init_args;

WasGoRuntime *WasGoRuntime::get_singleton() {
  return singleton;
}

//wasm_module_t WasGoRuntime::load_module(String script_path){
wasm_module_t WasGoRuntime::load_module(Ref<WasmResource> wasm){
if (wasm != nullptr){
  	if(script_module_map.has(wasm->get_path())){
    	return script_module_map[wasm->get_path()];
 }

 Vector<uint8_t> array = wasm->get_buf(); //gets the binary data
 int buf_size = array.size(); //buffer_length
 uint8_t *buffer = (uint8_t *)array.ptr(); //buffer

 char error_buf[128];
 // char *buffer = nullptr;
 // uint32_t buf_size;

 // Error err;
 // FileAccess *file = FileAccess::open(script_path, FileAccess::READ, &err);
 // if (err != OK) {
 // 	//printf("We couldnt read the file: %s\n", script_path);
 //       return nullptr;
 // }
 // buffer = (char *)malloc(file->get_len());
 // buf_size = file->get_len();
 // file->get_buffer((uint8_t *)buffer, file->get_len());
 // file->close();
 //
 // if (!buffer) {
 // 	//printf("Open wasm app file [%s] failed.\n", script_path);
 // 	if (buffer) free(buffer);
 //       return nullptr;
 // }

 script_module_map.set(wasm->get_path(), wasm_runtime_load(buffer, buf_size, error_buf, sizeof(error_buf)));
 return script_module_map[wasm->get_path()];
 }
 return nullptr;
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
		printf("Init runtime environment failed.\n");
	}
}