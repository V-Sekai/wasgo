/* THIS FILE IS GENERATED */
#ifndef PACKETPEER_H
#define PACKETPEER_H

#include <stdint.h>

#include "Reference.h"
#include "Erro.h"
#include "Variant.h"
#include "PoolByteArray.h"
class PacketPeer : public Reference{
public: PacketPeer();
int  get_available_packet_count();
int  get_available_packet_count();
int  get_encode_buffer_max_size();
int  get_encode_buffer_max_size();
PoolByteArray  get_packet();
PoolByteArray  get_packet();
enum.Error  get_packet_error();
enum.Error  get_packet_error();
Variant  get_var(bool allow_objects = false);
bool  is_object_decoding_allowed();
bool  is_object_decoding_allowed();
enum.Error  put_packet(PoolByteArray buffer);
enum.Error  put_var(Variant var, bool full_objects = false);
void  set_allow_object_decoding(bool enable);
void  set_encode_buffer_max_size(int max_size);
};
#endif