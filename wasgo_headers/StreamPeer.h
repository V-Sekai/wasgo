/* THIS FILE IS GENERATED */
#ifndef STREAMPEER_H
#define STREAMPEER_H

#include <stdint.h>

#include "Reference.h"
#include "String.h"
#include "Erro.h"
#include "PoolByteArray.h"
#include "Variant.h"
class StreamPeer : public Reference{
public: StreamPeer();
int  get_16();
int  get_16();
int  get_32();
int  get_32();
int  get_64();
int  get_64();
int  get_8();
int  get_8();
int  get_available_bytes();
int  get_available_bytes();
Array  get_data(int bytes);
float  get_double();
float  get_double();
float  get_float();
float  get_float();
Array  get_partial_data(int bytes);
String  get_string(int bytes = -1);
int  get_u16();
int  get_u16();
int  get_u32();
int  get_u32();
int  get_u64();
int  get_u64();
int  get_u8();
int  get_u8();
String  get_utf8_string(int bytes = -1);
Variant  get_var(bool allow_objects = false);
bool  is_big_endian_enabled();
bool  is_big_endian_enabled();
void  put_16(int value);
void  put_32(int value);
void  put_64(int value);
void  put_8(int value);
enum.Error  put_data(PoolByteArray data);
void  put_double(float value);
void  put_float(float value);
Array  put_partial_data(PoolByteArray data);
void  put_string(String value);
void  put_u16(int value);
void  put_u32(int value);
void  put_u64(int value);
void  put_u8(int value);
void  put_utf8_string(String value);
void  put_var(Variant value, bool full_objects = false);
void  set_big_endian(bool enable);
};
#endif