/* THIS FILE IS GENERATED */
#ifndef PACKETPEERUDP_H
#define PACKETPEERUDP_H

#include <stdint.h>

#include "String.h"
#include "Erro.h"
#include "PacketPeer.h"
class PacketPeerUDP : public PacketPeer{
public: PacketPeerUDP();
void  close();
void  close();
String  get_packet_ip();
String  get_packet_ip();
int  get_packet_port();
int  get_packet_port();
bool  is_listening();
bool  is_listening();
enum.Error  join_multicast_group(String multicast_address, String interface_name);
enum.Error  leave_multicast_group(String multicast_address, String interface_name);
enum.Error  listen(int port, String bind_address = *, int recv_buf_size = 65536);
void  set_broadcast_enabled(bool enabled);
enum.Error  set_dest_address(String host, int port);
enum.Error  wait();
enum.Error  wait();
};
#endif