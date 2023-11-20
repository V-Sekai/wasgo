#include "register_types.h"
#include "src/resource_loader_wasm.h"
#include "src/resource_wasm.h"
#include "src/wasgo_callable.h"
#include "src/wasgo_runtime.h"
#include "src/wasgo_state.h"
#include "src/wasgo_test.h"
#include "stdio.h"

// #include "include/wasgo_function_table.h"

static Ref<ResourceFormatLoaderWasm> wasm_loader;
static WasGoRuntime *wasgo_runtime = nullptr;

void initialize_wasgo_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	// printf("REGISTERING WASGO\n");
	// printf("Creating some test wasgo objects\n");
	wasgo_runtime = new (WasGoRuntime);
	// wasgo_runtime->initialize(native_symbols, sizeof(native_symbols)/sizeof(NativeSymbol));
	ClassDB::register_class<WasGoState>();
	ClassDB::register_class<ResourceFormatLoaderWasm>();
	ClassDB::register_class<WasmResource>();
	ClassDB::register_class<WasGoRuntime>();
	// ClassDB::register_class<WasGoCallable>();
	Engine::get_singleton()->add_singleton(Engine::Singleton("WasGo", WasGoRuntime::get_singleton()));
	wasm_loader.instantiate();
	ResourceLoader::add_resource_format_loader(wasm_loader);
	WasGoTest::test();
}

void uninitialize_wasgo_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	ResourceLoader::remove_resource_format_loader(wasm_loader);
	wasm_loader.unref();
}
