/* THIS FILE IS GENERATED */
#ifndef MULTIPLAYERAPI_H
#define MULTIPLAYERAPI_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Reference.h"
#include "NetworkedMultiplayerPeer.h"
#include "error_list.h"
#include "Node.h"
class MultiplayerAPI : public Reference{
public:
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

MultiplayerAPI(WasGoId p_wasgo_id);
~MultiplayerAPI();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_MultiplayerAPI_wrapper_get_network_peer(WasGoId wasgo_id);
int _wasgo_MultiplayerAPI_wrapper_get_network_unique_id(WasGoId wasgo_id);
int _wasgo_MultiplayerAPI_wrapper_get_rpc_sender_id(WasGoId wasgo_id);
int _wasgo_MultiplayerAPI_wrapper_has_network_peer(WasGoId wasgo_id);
int _wasgo_MultiplayerAPI_wrapper_is_network_server(WasGoId wasgo_id);
WasGoId _wasgo_MultiplayerAPI_wrapper_send_bytes(WasGoId wasgo_id, WasGoId p_bytes, int p_id, WasGoId p_mode);
void _wasgo_MultiplayerAPI_wrapper_set_root_node(WasGoId wasgo_id, WasGoId p_node);
}
#endif