/* THIS FILE IS GENERATED */
#ifndef PACKETPEER_H
#define PACKETPEER_H

#include "wasgo\wasgoid.h"

#include "Reference.h"
#include "error_list.h"
#include "Variant.h"
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

protected:
public:
explicit PacketPeer(WasGoID p_wasgo_id);
explicit PacketPeer(Reference other);
PacketPeer();
PacketPeer new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_PacketPeer_wrapper_get_available_packet_count(WasGoID wasgo_id);
int _wasgo_PacketPeer_wrapper_get_encode_buffer_max_size(WasGoID wasgo_id);
WasGoID _wasgo_PacketPeer_wrapper_get_packet(WasGoID wasgo_id);
WasGoID _wasgo_PacketPeer_wrapper_get_packet_error(WasGoID wasgo_id);
void _wasgo_PacketPeer_wrapper_get_var(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, bool p_allow_objects);
int _wasgo_PacketPeer_wrapper_is_object_decoding_allowed(WasGoID wasgo_id);
WasGoID _wasgo_PacketPeer_wrapper_put_packet(WasGoID wasgo_id, WasGoID p_buffer);
WasGoID _wasgo_PacketPeer_wrapper_put_var(WasGoID wasgo_id, const uint8_t * p_var, int p_var_wasgo_buffer_size, int wasgo_throwaway, bool p_full_objects);
void _wasgo_PacketPeer_wrapper_set_allow_object_decoding(WasGoID wasgo_id, bool p_enable);
void _wasgo_PacketPeer_wrapper_set_encode_buffer_max_size(WasGoID wasgo_id, int p_max_size);

    //constructor wrappers
    WasGoID _wasgo_PacketPeer_constructor();
            
}
#endif