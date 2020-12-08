/* THIS FILE IS GENERATED */
#ifndef MULTIPLAYERAPI_H
#define MULTIPLAYERAPI_H

#include "wasgo\wasgoid.h"

class Node;
#include "Reference.h"
#include "error_list.h"
#include "NetworkedMultiplayerPeer.h"
#include "Variant.h"
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
public:
explicit MultiplayerAPI(WasGoID p_wasgo_id);
explicit MultiplayerAPI(Reference other);
MultiplayerAPI();
MultiplayerAPI new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_MultiplayerAPI_wrapper_clear(WasGoID wasgo_id);
WasGoID _wasgo_MultiplayerAPI_wrapper_get_network_connected_peers(WasGoID wasgo_id);
WasGoID _wasgo_MultiplayerAPI_wrapper_get_network_peer(WasGoID wasgo_id);
int _wasgo_MultiplayerAPI_wrapper_get_network_unique_id(WasGoID wasgo_id);
int _wasgo_MultiplayerAPI_wrapper_get_rpc_sender_id(WasGoID wasgo_id);
int _wasgo_MultiplayerAPI_wrapper_has_network_peer(WasGoID wasgo_id);
int _wasgo_MultiplayerAPI_wrapper_is_network_server(WasGoID wasgo_id);
int _wasgo_MultiplayerAPI_wrapper_is_object_decoding_allowed(WasGoID wasgo_id);
int _wasgo_MultiplayerAPI_wrapper_is_refusing_new_network_connections(WasGoID wasgo_id);
void _wasgo_MultiplayerAPI_wrapper_poll(WasGoID wasgo_id);
WasGoID _wasgo_MultiplayerAPI_wrapper_send_bytes(WasGoID wasgo_id, WasGoID p_bytes, int p_id, WasGoID p_mode);
void _wasgo_MultiplayerAPI_wrapper_set_allow_object_decoding(WasGoID wasgo_id, bool p_enable);
void _wasgo_MultiplayerAPI_wrapper_set_network_peer(WasGoID wasgo_id, WasGoID p_peer);
void _wasgo_MultiplayerAPI_wrapper_set_refuse_new_network_connections(WasGoID wasgo_id, bool p_refuse);
void _wasgo_MultiplayerAPI_wrapper_set_root_node(WasGoID wasgo_id, WasGoID p_node);

    //constructor wrappers
    WasGoID _wasgo_MultiplayerAPI_constructor();
            
}
#endif