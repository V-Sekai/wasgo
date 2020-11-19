/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "PoolByteArray.h"
#include "String.h"
#include "Reference.h"
#include "Variant.h"
#include "Erro.h"
#include "PoolStringArray.h"
class _File : public Reference{
public: _File();
enum CompressionMode{
COMPRESSION_FASTLZ: 0,
COMPRESSION_DEFLATE: 1,
COMPRESSION_ZSTD: 2,
};
enum ModeFlags{
READ: 1,
WRITE: 2,
READ_WRITE: 3,
};
void  close();
void  close();
bool  eof_reached();
bool  eof_reached();
bool  file_exists(String path);
int  get_16();
int  get_16();
int  get_32();
int  get_32();
int  get_64();
int  get_64();
int  get_8();
int  get_8();
String  get_as_text();
String  get_as_text();
PoolByteArray  get_buffer(int len);
PoolStringArray  get_csv_line(String delim = ,);
float  get_double();
float  get_double();
bool  get_endian_swap();
bool  get_endian_swap();
enum.Error  get_error();
enum.Error  get_error();
float  get_float();
float  get_float();
int  get_len();
int  get_len();
String  get_line();
String  get_line();
String  get_md5(String path);
int  get_modified_time(String file);
String  get_pascal_string();
String  get_pascal_string();
String  get_path();
String  get_path();
String  get_path_absolute();
String  get_path_absolute();
int  get_position();
int  get_position();
float  get_real();
float  get_real();
String  get_sha256(String path);
Variant  get_var(bool allow_objects = false);
bool  is_open();
bool  is_open();
enum.Error  open(String path, int flags);
enum.Error  open_compressed(String path, int mode_flags, int compression_mode = 0);
enum.Error  open_encrypted(String path, int mode_flags, PoolByteArray key);
enum.Error  open_encrypted_with_pass(String path, int mode_flags, String pass);
void  seek(int position);
void  seek_end(int position = 0);
void  set_endian_swap(bool enable);
void  store_16(int value);
void  store_32(int value);
void  store_64(int value);
void  store_8(int value);
void  store_buffer(PoolByteArray buffer);
void  store_csv_line(PoolStringArray values, String delim = ,);
void  store_double(float value);
void  store_float(float value);
void  store_line(String line);
void  store_pascal_string(String string);
void  store_real(float value);
void  store_string(String string);
void  store_var(Variant value, bool full_objects = false);
};