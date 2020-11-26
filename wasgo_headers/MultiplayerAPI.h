/* THIS FILE IS GENERATED */
#ifndef MULTIPLAYERAPI_H
#define MULTIPLAYERAPI_H

#include <stdint.h>

#include "Reference.h"
#include "PoolIntArray.h"
#include "Node.h"
#include "Erro.h"
#include "PoolByteArray.h"
#include "NetworkedMultiplayerPeer.h"
class MultiplayerAPI : public Reference{
public: MultiplayerAPI();
enum RPCMode{
RPC_MODE_DISABLED: 0,
RPC_MODE_REMOTE: 1,
RPC_MODE_MASTER: 2,
RPC_MODE_PUPPET: 3,
RPC_MODE_SLAVE: 3,
RPC_MODE_REMOTESYNC: 4,
RPC_MODE_SYNC: 4,
RPC_MODE_MASTERSYNC: 5,
};
void  _add_peer(int id);
void  _connected_to_server();
void  _connected_to_server();
void  _connection_failed();
void  _connection_failed();
void  _del_peer(int id);
void  _server_disconnected();
void  _server_disconnected();
void  clear();
void  clear();
PoolIntArray  get_network_connected_peers();
PoolIntArray  get_network_connected_peers();
NetworkedMultiplayerPeer  get_network_peer();
NetworkedMultiplayerPeer  get_network_peer();
int  get_network_unique_id();
int  get_network_unique_id();
int  get_rpc_sender_id();
int  get_rpc_sender_id();
bool  has_network_peer();
bool  has_network_peer();
bool  is_network_server();
bool  is_network_server();
bool  is_object_decoding_allowed();
bool  is_object_decoding_allowed();
bool  is_refusing_new_network_connections();
bool  is_refusing_new_network_connections();
void  poll();
void  poll();
enum.Error  send_bytes(PoolByteArray bytes, int id = 0, int mode = 2);
void  set_allow_object_decoding(bool enable);
void  set_network_peer(NetworkedMultiplayerPeer peer);
void  set_refuse_new_network_connections(bool refuse);
void  set_root_node(Node node);
};
#endif