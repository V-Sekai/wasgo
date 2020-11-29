/* THIS FILE IS GENERATED */
#ifndef STREAMPEER_H
#define STREAMPEER_H

#include "stdint.h"

#include "Reference.h"
#include "Variant.h"
#include "Error.h"
class StreamPeer : public Reference{
public: StreamPeer();
int get_16();
int get_32();
int get_64();
int get_8();
int get_available_bytes();
Array get_data(int p_bytes);
float get_double();
float get_float();
Array get_partial_data(int p_bytes);
String get_string(int p_bytes = (int) -1);
int get_u16();
int get_u32();
int get_u64();
int get_u8();
String get_utf8_string(int p_bytes = (int) -1);
Variant get_var(bool p_allow_objects = (bool) False);
bool is_big_endian_enabled();
void put_16(int p_value);
void put_32(int p_value);
void put_64(int p_value);
void put_8(int p_value);
Error put_data(PoolByteArray p_data);
void put_double(float p_value);
void put_float(float p_value);
Array put_partial_data(PoolByteArray p_data);
void put_string(String p_value);
void put_u16(int p_value);
void put_u32(int p_value);
void put_u64(int p_value);
void put_u8(int p_value);
void put_utf8_string(String p_value);
void put_var(Variant p_value, bool p_full_objects = (bool) False);
void set_big_endian(bool p_enable);
};
#endif