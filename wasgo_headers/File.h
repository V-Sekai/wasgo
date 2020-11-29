/* THIS FILE IS GENERATED */
#ifndef FILE_H
#define FILE_H

#include "stdint.h"

#include "Reference.h"
#include "Variant.h"
#include "Error.h"
class File : public Reference{
public: File();
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
PoolStringArray get_csv_line(String p_delim = (String) ,);
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
Variant get_var(bool p_allow_objects = (bool) False);
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
void store_csv_line(PoolStringArray p_values, String p_delim = (String) ,);
void store_double(float p_value);
void store_float(float p_value);
void store_line(String p_line);
void store_pascal_string(String p_string);
void store_real(float p_value);
void store_string(String p_string);
void store_var(Variant p_value, bool p_full_objects = (bool) False);
};
#endif