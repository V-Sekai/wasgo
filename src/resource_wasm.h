/* resource_wasm.h */

#ifndef RESOURCE_WASM_H
#define RESOURCE_WASM_H

#include "core/io/resource.h"
#include "core/io/resource_loader.h"
#include "wasm_export.h"

class WasmResource : public Resource {
	GDCLASS(WasmResource, Resource);

protected:
	static void _bind_methods();
	
private:
	Vector<uint8_t> wasm_buf;
	RID module_rid = RID();

public:
	Error load_file(const String &p_path);

	void set_wasm_buf(Vector<uint8_t> buf);
	const Vector<uint8_t> &get_wasm_buf() { return wasm_buf; }
	virtual RID get_rid() const override;

	~WasmResource();
};

#endif // RESOURCE_WASM_H