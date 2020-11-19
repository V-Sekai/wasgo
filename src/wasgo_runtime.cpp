#include "wasgo_runtime.h"

WasGoRuntime *WasGoRuntime::singleton = NULL;

WasGoRuntime *WasGoRuntime::get_singleton() {
  return singleton;
}

wasm_module_t WasGoRuntime::load_module(String script_path){

  if(script_module_map.has(script_path)){
    return script_module_map[script_path];
  }

  char error_buf[128];
	char *buffer = nullptr;
	uint32_t buf_size;

	Error err;
	FileAccess *file = FileAccess::open(script_path, FileAccess::READ, &err);
	if (err != OK) {
		//printf("We couldnt read the file: %s\n", script_path);
        return nullptr;
	}
	buffer = (char *)malloc(file->get_len());
	buf_size = file->get_len();
	file->get_buffer((uint8_t *)buffer, file->get_len());
	file->close();

	if (!buffer) {
		//printf("Open wasm app file [%s] failed.\n", script_path);
		if (buffer) free(buffer);
        return nullptr;
	}

  script_module_map.set(script_path, wasm_runtime_load((uint8_t *)buffer, buf_size, error_buf, sizeof(error_buf)));
	return script_module_map[script_path];
}

WasGoRuntime::WasGoRuntime() {
  singleton = this;
}
