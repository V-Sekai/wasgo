/* THIS FILE IS GENERATED */
#ifndef MULTIPLAYERAPI_H
#define MULTIPLAYERAPI_H

#include "wasgo\wasgo.h"

#include "error_list.h"
#include "Variant.h"
#include "Reference.h"
#include "Node.h"
#include "NetworkedMultiplayerPeer.h"
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
void clear();
PoolIntArray get_network_connected_peers();
NetworkedMultiplayerPeer get_network_peer();
int get_network_unique_id();
int get_rpc_sender_id();
bool has_network_peer();
bool is_network_server();
bool is_object_decoding_allowed();
bool is_refusing_new_network_connections();
void poll();
Error send_bytes(PoolByteArray p_bytes, int p_id = (int) 0, NetworkedMultiplayerPeer::TransferMode p_mode = (NetworkedMultiplayerPeer::TransferMode) 2);
void set_allow_object_decoding(bool p_enable);
void set_network_peer(NetworkedMultiplayerPeer p_peer);
void set_refuse_new_network_connections(bool p_refuse);
void set_root_node(Node p_node);

protected:
MultiplayerAPI(WasGoId p_wasgo_id);
public:
MultiplayerAPI();
~MultiplayerAPI();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_MultiplayerAPI_wrapper_clear(WasGoId wasgo_id);
WasGoId _wasgo_MultiplayerAPI_wrapper_get_network_connected_peers(WasGoId wasgo_id);
WasGoId _wasgo_MultiplayerAPI_wrapper_get_network_peer(WasGoId wasgo_id);
int _wasgo_MultiplayerAPI_wrapper_get_network_unique_id(WasGoId wasgo_id);
int _wasgo_MultiplayerAPI_wrapper_get_rpc_sender_id(WasGoId wasgo_id);
int _wasgo_MultiplayerAPI_wrapper_has_network_peer(WasGoId wasgo_id);
int _wasgo_MultiplayerAPI_wrapper_is_network_server(WasGoId wasgo_id);
int _wasgo_MultiplayerAPI_wrapper_is_object_decoding_allowed(WasGoId wasgo_id);
int _wasgo_MultiplayerAPI_wrapper_is_refusing_new_network_connections(WasGoId wasgo_id);
void _wasgo_MultiplayerAPI_wrapper_poll(WasGoId wasgo_id);
WasGoId _wasgo_MultiplayerAPI_wrapper_send_bytes(WasGoId wasgo_id, WasGoId p_bytes, int p_id, WasGoId p_mode);
void _wasgo_MultiplayerAPI_wrapper_set_allow_object_decoding(WasGoId wasgo_id, bool p_enable);
void _wasgo_MultiplayerAPI_wrapper_set_network_peer(WasGoId wasgo_id, WasGoId p_peer);
void _wasgo_MultiplayerAPI_wrapper_set_refuse_new_network_connections(WasGoId wasgo_id, bool p_refuse);
void _wasgo_MultiplayerAPI_wrapper_set_root_node(WasGoId wasgo_id, WasGoId p_node);

    //constructor and destructor wrappers
    WasGoId _wasgo_MultiplayerAPI_constructor();
    void _wasgo_MultiplayerAPI_destructor(WasGoId p_wasgo_id);
            
}
#endif