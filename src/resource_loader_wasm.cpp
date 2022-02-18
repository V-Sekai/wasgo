/* resource_loader_wasm.cpp */

#include "resource_loader_wasm.h"

#include "resource_wasm.h"

RES ResourceFormatLoaderWasm::load(const String &p_path, const String &p_original_path, Error *r_error, bool p_use_sub_threads, float *r_progress, CacheMode p_cache_mode) {
	Ref<WasmResource> wasm;
	wasm.instantiate();
	if (r_error) {
	    *r_error = OK;
    }
	*r_error = wasm->load_file(p_path);
    return wasm;
}

void ResourceFormatLoaderWasm::get_recognized_extensions(List<String> *r_extensions) const {
    if (!r_extensions->find("wasm")) {
            r_extensions->push_back("wasm");
    }
}

String ResourceFormatLoaderWasm::get_resource_type(const String &p_path) const {
    return "Resource";
}

bool ResourceFormatLoaderWasm::handles_type(const String &p_type) const {
    return ClassDB::is_parent_class(p_type, "Resource");
}