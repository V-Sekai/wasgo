/* THIS FILE IS GENERATED */
#ifndef PACKETPEERUDP_H
#define PACKETPEERUDP_H

#include "wasgo\wasgoid.h"

#include "PacketPeer.h"
#include "Ustring.h"
#include "error_list.h"
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
public:
explicit PacketPeerUDP(WasGoID p_wasgo_id);
explicit PacketPeerUDP(PacketPeer other);
PacketPeerUDP();
PacketPeerUDP new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_PacketPeerUDP_wrapper_close(WasGoID wasgo_id);
WasGoID _wasgo_PacketPeerUDP_wrapper_connect_to_host(WasGoID wasgo_id, const uint8_t * p_host, int p_host_wasgo_buffer_size, int p_port);
void _wasgo_PacketPeerUDP_wrapper_get_packet_ip(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_PacketPeerUDP_wrapper_get_packet_port(WasGoID wasgo_id);
int _wasgo_PacketPeerUDP_wrapper_is_connected_to_host(WasGoID wasgo_id);
int _wasgo_PacketPeerUDP_wrapper_is_listening(WasGoID wasgo_id);
WasGoID _wasgo_PacketPeerUDP_wrapper_join_multicast_group(WasGoID wasgo_id, const uint8_t * p_multicast_address, int p_multicast_address_wasgo_buffer_size, const uint8_t * p_interface_name, int p_interface_name_wasgo_buffer_size);
WasGoID _wasgo_PacketPeerUDP_wrapper_leave_multicast_group(WasGoID wasgo_id, const uint8_t * p_multicast_address, int p_multicast_address_wasgo_buffer_size, const uint8_t * p_interface_name, int p_interface_name_wasgo_buffer_size);
WasGoID _wasgo_PacketPeerUDP_wrapper_listen(WasGoID wasgo_id, int p_port, const uint8_t * p_bind_address, int p_bind_address_wasgo_buffer_size, int p_recv_buf_size);
void _wasgo_PacketPeerUDP_wrapper_set_broadcast_enabled(WasGoID wasgo_id, bool p_enabled);
WasGoID _wasgo_PacketPeerUDP_wrapper_set_dest_address(WasGoID wasgo_id, const uint8_t * p_host, int p_host_wasgo_buffer_size, int p_port);
WasGoID _wasgo_PacketPeerUDP_wrapper_wait(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_PacketPeerUDP_constructor();
            
}
#endif