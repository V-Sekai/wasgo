/* THIS FILE IS GENERATED */
#ifndef PACKETPEERUDP_H
#define PACKETPEERUDP_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "error_list.h"
#include "PacketPeer.h"
class PacketPeerUDP : public PacketPeer{
public:
void close();
Error connect_to_host(String p_host, int p_port);
String get_packet_ip();
int get_packet_port();
bool is_connected_to_host();
bool is_listening();
Error join_multicast_group(String p_multicast_address, String p_interface_name);
Error leave_multicast_group(String p_multicast_address, String p_interface_name);
Error listen(int p_port, String p_bind_address = (String) *, int p_recv_buf_size = (int) 65536);
void set_broadcast_enabled(bool p_enabled);
Error set_dest_address(String p_host, int p_port);
Error wait();

protected:
PacketPeerUDP(WasGoId p_wasgo_id);
public:
PacketPeerUDP();
~PacketPeerUDP();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_PacketPeerUDP_wrapper_close(WasGoId wasgo_id);
WasGoId _wasgo_PacketPeerUDP_wrapper_connect_to_host(WasGoId wasgo_id, const uint8_t * p_host, int p_host_wasgo_buffer_size, int p_port);
void _wasgo_PacketPeerUDP_wrapper_get_packet_ip(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_PacketPeerUDP_wrapper_get_packet_port(WasGoId wasgo_id);
int _wasgo_PacketPeerUDP_wrapper_is_connected_to_host(WasGoId wasgo_id);
int _wasgo_PacketPeerUDP_wrapper_is_listening(WasGoId wasgo_id);
WasGoId _wasgo_PacketPeerUDP_wrapper_join_multicast_group(WasGoId wasgo_id, const uint8_t * p_multicast_address, int p_multicast_address_wasgo_buffer_size, const uint8_t * p_interface_name, int p_interface_name_wasgo_buffer_size);
WasGoId _wasgo_PacketPeerUDP_wrapper_leave_multicast_group(WasGoId wasgo_id, const uint8_t * p_multicast_address, int p_multicast_address_wasgo_buffer_size, const uint8_t * p_interface_name, int p_interface_name_wasgo_buffer_size);
WasGoId _wasgo_PacketPeerUDP_wrapper_listen(WasGoId wasgo_id, int p_port, const uint8_t * p_bind_address, int p_bind_address_wasgo_buffer_size, int p_recv_buf_size);
void _wasgo_PacketPeerUDP_wrapper_set_broadcast_enabled(WasGoId wasgo_id, bool p_enabled);
WasGoId _wasgo_PacketPeerUDP_wrapper_set_dest_address(WasGoId wasgo_id, const uint8_t * p_host, int p_host_wasgo_buffer_size, int p_port);
WasGoId _wasgo_PacketPeerUDP_wrapper_wait(WasGoId wasgo_id);

    //constructor and destructor wrappers
    WasGoId _wasgo_PacketPeerUDP_constructor();
    void _wasgo_PacketPeerUDP_destructor(WasGoId p_wasgo_id);
            
}
#endif