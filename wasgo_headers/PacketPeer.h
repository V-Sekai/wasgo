/* THIS FILE IS GENERATED */
#ifndef PACKETPEER_H
#define PACKETPEER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Reference.h"
#include "Variant.h"
#include "error_list.h"
class PacketPeer : public Reference{
public:
int get_available_packet_count();
int get_encode_buffer_max_size();
PoolByteArray get_packet();
Error get_packet_error();
Variant get_var(bool p_allow_objects = (bool) false);
bool is_object_decoding_allowed();
Error put_packet(PoolByteArray p_buffer);
Error put_var(Variant p_var, bool p_full_objects = (bool) false);
void set_allow_object_decoding(bool p_enable);
void set_encode_buffer_max_size(int p_max_size);
};


//Wrapper Functions
extern "C"{
int _wasgo_PacketPeer_wrapper_get_available_packet_count(WasGoId wasgo_id);
int _wasgo_PacketPeer_wrapper_get_encode_buffer_max_size(WasGoId wasgo_id);
WasGoId _wasgo_PacketPeer_wrapper_get_packet(WasGoId wasgo_id);
WasGoId _wasgo_PacketPeer_wrapper_get_packet_error(WasGoId wasgo_id);
WasGoId _wasgo_PacketPeer_wrapper_get_var(WasGoId wasgo_id, bool p_allow_objects);
int _wasgo_PacketPeer_wrapper_is_object_decoding_allowed(WasGoId wasgo_id);
WasGoId _wasgo_PacketPeer_wrapper_put_packet(WasGoId wasgo_id, WasGoId p_buffer);
WasGoId _wasgo_PacketPeer_wrapper_put_var(WasGoId wasgo_id, WasGoId p_var, bool p_full_objects);
void _wasgo_PacketPeer_wrapper_set_allow_object_decoding(WasGoId wasgo_id, bool p_enable);
void _wasgo_PacketPeer_wrapper_set_encode_buffer_max_size(WasGoId wasgo_id, int p_max_size);
}
#endif