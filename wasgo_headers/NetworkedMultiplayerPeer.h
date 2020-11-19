/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "PacketPeer.h"
class NetworkedMultiplayerPeer : public PacketPeer{
public: NetworkedMultiplayerPeer();
enum ConnectionStatus{
CONNECTION_DISCONNECTED: 0,
CONNECTION_CONNECTING: 1,
};
enum TransferMode{
TRANSFER_MODE_UNRELIABLE: 0,
TRANSFER_MODE_UNRELIABLE_ORDERED: 1,
};
enum.NetworkedMultiplayerPeer::ConnectionStatus  get_connection_status();
enum.NetworkedMultiplayerPeer::ConnectionStatus  get_connection_status();
int  get_packet_peer();
int  get_packet_peer();
enum.NetworkedMultiplayerPeer::TransferMode  get_transfer_mode();
enum.NetworkedMultiplayerPeer::TransferMode  get_transfer_mode();
int  get_unique_id();
int  get_unique_id();
bool  is_refusing_new_connections();
bool  is_refusing_new_connections();
void  poll();
void  poll();
void  set_refuse_new_connections(bool enable);
void  set_target_peer(int id);
void  set_transfer_mode(int mode);
};