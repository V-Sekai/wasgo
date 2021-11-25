#include "register_types.h"
#include "api/API_Generator.h"
#include "src/Test.h"
#include "src/resource_loader_wasm.h"
#include "src/resource_wasm.h"
#include "src/wasgo_runtime.h"
#include "src/wasgo_state.h"
#include "stdio.h"
#include "include/wasgo_function_table.h"

static Ref<ResourceFormatLoaderWasm> wasm_loader;
static WasGoRuntime *wasgo_runtime = NULL;

void register_wasgo_types() {
	printf("REGISTERING WASGO\n");
	printf("Creating some test wasgo objects\n");

	wasgo_runtime = new(WasGoRuntime);

	wasgo_runtime->initialize(native_symbols, sizeof(native_symbols)/sizeof(NativeSymbol));
	WasGoTest::test();

	printf("DONE\n");
	ClassDB::register_class<WasGoState>();
	ClassDB::register_class<ResourceFormatLoaderWasm>();
	ClassDB::register_class<WasmResource>();
	ClassDB::register_class<WasGoRuntime>();

	Engine::get_singleton()->add_singleton(Engine::Singleton("WasGo", WasGoRuntime::get_singleton()));

	wasm_loader.instantiate();
	ResourceLoader::add_resource_format_loader(wasm_loader);

#ifdef WASGO_API_GENERATION
#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)
#define DO_EXPAND(VAL) VAL##1
#define EXPAND(VAL) DO_EXPAND(VAL)
#if EXPAND(WASGO_API_GENERATION) == 1
#define WASGO_API_GENERATION_PATH "wasgo_api.json"
#else
#define WASGO_API_GENERATION_PATH TOSTRING(WASGO_API_GENERATION)
#endif

	printf("***Generating the wasgo api json file***\n");
	char *filepath = WASGO_API_GENERATION_PATH;
	if (strcmp(filepath, "") == 0) {
		filepath = "wasgo_api.json";
	}
	WasGoAPIGen::write(filepath);
	printf("***file at ");
	printf(filepath);
	printf("***\n");
#endif
}

void unregister_wasgo_types(){
	ResourceLoader::remove_resource_format_loader(wasm_loader);
	wasm_loader.unref();
}
