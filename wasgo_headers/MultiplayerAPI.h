/* THIS FILE IS GENERATED */
#ifndef MULTIPLAYERAPI_H
#define MULTIPLAYERAPI_H

#include "stdint.h"

#include "Error.h"
#include "Reference.h"
#include "NetworkedMultiplayerPeer.h"
#include "Variant.h"
#include "Node.h"
class MultiplayerAPI : public Reference{
public: MultiplayerAPI();
enum RPCMode{
RPC_MODE_DISABLED,
RPC_MODE_REMOTE,
RPC_MODE_MASTER,
RPC_MODE_PUPPET,
RPC_MODE_SLAVE,
RPC_MODE_REMOTESYNC,
RPC_MODE_SYNC,
RPC_MODE_MASTERSYNC,
RPC_MODE_PUPPETSYNC
};
NetworkedMultiplayerPeer get_network_peer();
int get_network_unique_id();
int get_rpc_sender_id();
bool has_network_peer();
bool is_network_server();
Error send_bytes(PoolByteArray p_bytes, int p_id = (int) 0, NetworkedMultiplayerPeer::TransferMode p_mode = (NetworkedMultiplayerPeer::TransferMode) 2);
void set_root_node(Node p_node);
};
#endif