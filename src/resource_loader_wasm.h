/* resource_loader_wasm.h */

#ifndef RESOURCE_LOADER_WASM_H
#define RESOURCE_LOADER_WASM_H

#include "core/io/resource_loader.h"

class ResourceFormatLoaderWasm : public ResourceFormatLoader {
    GDCLASS(ResourceFormatLoaderWasm, ResourceFormatLoader);
public:
    virtual RES load(const String &p_path, const String &p_original_path, Error *r_error = NULL);
    virtual void get_recognized_extensions(List<String> *r_extensions) const;
    virtual bool handles_type(const String &p_type) const;
    virtual String get_resource_type(const String &p_path) const;
};
#endif // RESOURCE_LOADER_WASM_H