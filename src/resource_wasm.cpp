/* resource_wasm.cpp */

#include "resource_wasm.h"
#include "core/os/file_access.h"

Error WasmResource::load_file(const String &p_path) {
    // buffer = bh_read_file_to_buffer(p_path, &buf_size);
	Error err;
	FileAccess *file = FileAccess::open(p_path, FileAccess::READ, &err);
	if (err != OK) {
//		printf("We couldnt read the file: %s\n", p_path);
		return err;
	}
    wasm_buf.resize(file->get_len());
    PoolByteArray::Write wasm_buf_writer = wasm_buf.write();
	err = (Error)file->get_buffer(wasm_buf_writer.ptr(), file->get_len());
    file->close();
    return err;
}

void WasmResource::_bind_methods() 
    {
            ClassDB::bind_method(D_METHOD("get_buf"), &WasmResource::get_buf);
    }

PoolByteArray WasmResource::get_buf() {
    return wasm_buf;
}
