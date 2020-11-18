#include "register_types.h"
#include "stdio.h"
#include "src/Test.h"
#include "src/wasgo_state.h"
#include "src/resource_loader_wasm.h"
#include "src/resource_wasm.h"

static Ref<ResourceFormatLoaderWasm> wasm_loader;

void register_WasGo_types() {
	printf("REGISTERING WASGO\n");
	printf("Creating some test wasgo objects\n");

	WasGoTest::test();

	printf("DONE\n");
	ClassDB::register_class<WasGoState>();
	ClassDB::register_class<ResourceFormatLoaderWasm>();
	ClassDB::register_class<WasmResource>();

	wasm_loader.instance();
	ResourceLoader::add_resource_format_loader(wasm_loader);
}

void unregister_WasGo_types(){
	ResourceLoader::remove_resource_format_loader(wasm_loader);
	wasm_loader.unref();
}