/* THIS FILE IS GENERATED */
#ifndef PACKETPEERUDP_H
#define PACKETPEERUDP_H

#include "stdint.h"

#include "Variant.h"
#include "PacketPeer.h"
#include "Error.h"
class PacketPeerUDP : public PacketPeer{
public: PacketPeerUDP();
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
};
#endif