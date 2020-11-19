
#ifndef WASGO_RUNTIME_H
#define WASGO_RUNTIME_H

#include "core/object.h"
#include "wasm_export.h"
#include "core/os/file_access.h"

  class WasGoRuntime : public Object {
    GDCLASS(WasGoRuntime, Object);

    static WasGoRuntime *singleton;

public:
  static WasGoRuntime *get_singleton();
  wasm_module_t load_module(String script_path);
  //Error init();

  WasGoRuntime();
  ~WasGoRuntime();

private:
  HashMap<String, wasm_module_t> script_module_map;

};

#endif
