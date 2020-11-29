/* THIS FILE IS GENERATED */
#ifndef NETWORKEDMULTIPLAYERPEER_H
#define NETWORKEDMULTIPLAYERPEER_H

#include "stdint.h"

#include "PacketPeer.h"
class NetworkedMultiplayerPeer : public PacketPeer{
public: NetworkedMultiplayerPeer();
enum ConnectionStatus{
CONNECTION_DISCONNECTED,
CONNECTION_CONNECTING,
CONNECTION_CONNECTED
};
enum TransferMode{
TRANSFER_MODE_UNRELIABLE,
TRANSFER_MODE_UNRELIABLE_ORDERED,
TRANSFER_MODE_RELIABLE
};
NetworkedMultiplayerPeer::ConnectionStatus get_connection_status();
int get_packet_peer();
NetworkedMultiplayerPeer::TransferMode get_transfer_mode();
int get_unique_id();
bool is_refusing_new_connections();
void poll();
void set_refuse_new_connections(bool p_enable);
void set_target_peer(int p_id);
void set_transfer_mode(NetworkedMultiplayerPeer::TransferMode p_mode);
};
#endif