/* resource_loader_wasm.h */

#ifndef RESOURCE_LOADER_WASM_H
#define RESOURCE_LOADER_WASM_H

#include "core/io/file_access.h"
#include "core/io/resource_loader.h"

class ResourceFormatLoaderWasm : public ResourceFormatLoader {
	GDCLASS(ResourceFormatLoaderWasm, ResourceFormatLoader);

public:
	virtual Ref<Resource> load(const String &p_path, const String &p_original_path = "", Error *r_error = nullptr, bool p_use_sub_threads = false, float *r_progress = nullptr, CacheMode p_cache_mode = CACHE_MODE_REUSE) override;
	virtual void get_recognized_extensions(List<String> *r_extensions) const override;
	virtual bool handles_type(const String &p_type) const override;
	virtual String get_resource_type(const String &p_path) const override;
};
#endif // RESOURCE_LOADER_WASM_H
