/* THIS FILE IS GENERATED */
#ifndef PACKETPEER_H
#define PACKETPEER_H

#include "stdint.h"

#include "Reference.h"
#include "Variant.h"
#include "Error.h"
class PacketPeer : public Reference{
public: PacketPeer();
int get_available_packet_count();
int get_encode_buffer_max_size();
PoolByteArray get_packet();
Error get_packet_error();
Variant get_var(bool p_allow_objects = (bool) False);
bool is_object_decoding_allowed();
Error put_packet(PoolByteArray p_buffer);
Error put_var(Variant p_var, bool p_full_objects = (bool) False);
void set_allow_object_decoding(bool p_enable);
void set_encode_buffer_max_size(int p_max_size);
};
#endif