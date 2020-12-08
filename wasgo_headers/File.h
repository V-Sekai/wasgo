/* THIS FILE IS GENERATED */
#ifndef FILE_H
#define FILE_H

#include "wasgo\wasgoid.h"

#include "Variant.h"
#include "Reference.h"
#include "Ustring.h"
#include "error_list.h"
class File : public Reference{
public:
enum CompressionMode{
COMPRESSION_FASTLZ,
COMPRESSION_DEFLATE,
COMPRESSION_ZSTD,
COMPRESSION_GZIP
};
enum ModeFlags{
READ,
WRITE,
READ_WRITE,
WRITE_READ
};
void close();
bool eof_reached();
bool file_exists(String p_path);
int get_16();
int get_32();
int get_64();
int get_8();
String get_as_text();
PoolByteArray get_buffer(int p_len);
PoolStringArray get_csv_line(String p_delim = String(,));
float get_double();
bool get_endian_swap();
Error get_error();
float get_float();
int get_len();
String get_line();
String get_md5(String p_path);
int get_modified_time(String p_file);
String get_pascal_string();
String get_path();
String get_path_absolute();
int get_position();
float get_real();
String get_sha256(String p_path);
Variant get_var(bool p_allow_objects = (bool) false);
bool is_open();
Error open(String p_path, File::ModeFlags p_flags);
Error open_compressed(String p_path, File::ModeFlags p_mode_flags, File::CompressionMode p_compression_mode = (File::CompressionMode) 0);
Error open_encrypted(String p_path, File::ModeFlags p_mode_flags, PoolByteArray p_key);
Error open_encrypted_with_pass(String p_path, File::ModeFlags p_mode_flags, String p_pass);
void seek(int p_position);
void seek_end(int p_position = (int) 0);
void set_endian_swap(bool p_enable);
void store_16(int p_value);
void store_32(int p_value);
void store_64(int p_value);
void store_8(int p_value);
void store_buffer(PoolByteArray p_buffer);
void store_csv_line(PoolStringArray p_values, String p_delim = String(,));
void store_double(float p_value);
void store_float(float p_value);
void store_line(String p_line);
void store_pascal_string(String p_string);
void store_real(float p_value);
void store_string(String p_string);
void store_var(Variant p_value, bool p_full_objects = (bool) false);

protected:
public:
explicit File(WasGoID p_wasgo_id);
explicit File(Reference other);
File();
File new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_File_wrapper_close(WasGoID wasgo_id);
int _wasgo_File_wrapper_eof_reached(WasGoID wasgo_id);
int _wasgo_File_wrapper_file_exists(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
int _wasgo_File_wrapper_get_16(WasGoID wasgo_id);
int _wasgo_File_wrapper_get_32(WasGoID wasgo_id);
int _wasgo_File_wrapper_get_64(WasGoID wasgo_id);
int _wasgo_File_wrapper_get_8(WasGoID wasgo_id);
void _wasgo_File_wrapper_get_as_text(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_File_wrapper_get_buffer(WasGoID wasgo_id, int p_len);
WasGoID _wasgo_File_wrapper_get_csv_line(WasGoID wasgo_id, const uint8_t * p_delim, int p_delim_wasgo_buffer_size);
float _wasgo_File_wrapper_get_double(WasGoID wasgo_id);
int _wasgo_File_wrapper_get_endian_swap(WasGoID wasgo_id);
WasGoID _wasgo_File_wrapper_get_error(WasGoID wasgo_id);
float _wasgo_File_wrapper_get_float(WasGoID wasgo_id);
int _wasgo_File_wrapper_get_len(WasGoID wasgo_id);
void _wasgo_File_wrapper_get_line(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_File_wrapper_get_md5(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_path, int p_path_wasgo_buffer_size);
int _wasgo_File_wrapper_get_modified_time(WasGoID wasgo_id, const uint8_t * p_file, int p_file_wasgo_buffer_size);
void _wasgo_File_wrapper_get_pascal_string(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_File_wrapper_get_path(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_File_wrapper_get_path_absolute(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_File_wrapper_get_position(WasGoID wasgo_id);
float _wasgo_File_wrapper_get_real(WasGoID wasgo_id);
void _wasgo_File_wrapper_get_sha256(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_path, int p_path_wasgo_buffer_size);
WasGoID _wasgo_File_wrapper_get_var(WasGoID wasgo_id, bool p_allow_objects);
int _wasgo_File_wrapper_is_open(WasGoID wasgo_id);
WasGoID _wasgo_File_wrapper_open(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size, WasGoID p_flags);
WasGoID _wasgo_File_wrapper_open_compressed(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size, WasGoID p_mode_flags, WasGoID p_compression_mode);
WasGoID _wasgo_File_wrapper_open_encrypted(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size, WasGoID p_mode_flags, WasGoID p_key);
WasGoID _wasgo_File_wrapper_open_encrypted_with_pass(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size, WasGoID p_mode_flags, const uint8_t * p_pass, int p_pass_wasgo_buffer_size);
void _wasgo_File_wrapper_seek(WasGoID wasgo_id, int p_position);
void _wasgo_File_wrapper_seek_end(WasGoID wasgo_id, int p_position);
void _wasgo_File_wrapper_set_endian_swap(WasGoID wasgo_id, bool p_enable);
void _wasgo_File_wrapper_store_16(WasGoID wasgo_id, int p_value);
void _wasgo_File_wrapper_store_32(WasGoID wasgo_id, int p_value);
void _wasgo_File_wrapper_store_64(WasGoID wasgo_id, int p_value);
void _wasgo_File_wrapper_store_8(WasGoID wasgo_id, int p_value);
void _wasgo_File_wrapper_store_buffer(WasGoID wasgo_id, WasGoID p_buffer);
void _wasgo_File_wrapper_store_csv_line(WasGoID wasgo_id, WasGoID p_values, const uint8_t * p_delim, int p_delim_wasgo_buffer_size);
void _wasgo_File_wrapper_store_double(WasGoID wasgo_id, float p_value);
void _wasgo_File_wrapper_store_float(WasGoID wasgo_id, float p_value);
void _wasgo_File_wrapper_store_line(WasGoID wasgo_id, const uint8_t * p_line, int p_line_wasgo_buffer_size);
void _wasgo_File_wrapper_store_pascal_string(WasGoID wasgo_id, const uint8_t * p_string, int p_string_wasgo_buffer_size);
void _wasgo_File_wrapper_store_real(WasGoID wasgo_id, float p_value);
void _wasgo_File_wrapper_store_string(WasGoID wasgo_id, const uint8_t * p_string, int p_string_wasgo_buffer_size);
void _wasgo_File_wrapper_store_var(WasGoID wasgo_id, WasGoID p_value, bool p_full_objects);

    //constructor wrappers
    WasGoID _wasgo_File_constructor();
            
}
#endif