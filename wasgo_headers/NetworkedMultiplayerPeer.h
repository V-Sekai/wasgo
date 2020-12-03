/* THIS FILE IS GENERATED */
#ifndef NETWORKEDMULTIPLAYERPEER_H
#define NETWORKEDMULTIPLAYERPEER_H

#include "wasgo\wasgo.h"

#include "PacketPeer.h"
class NetworkedMultiplayerPeer : public PacketPeer{
public:
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


//Wrapper Functions
extern "C"{
WasGoId _wasgo_NetworkedMultiplayerPeer_wrapper_get_connection_status(WasGoId wasgo_id);
int _wasgo_NetworkedMultiplayerPeer_wrapper_get_packet_peer(WasGoId wasgo_id);
WasGoId _wasgo_NetworkedMultiplayerPeer_wrapper_get_transfer_mode(WasGoId wasgo_id);
int _wasgo_NetworkedMultiplayerPeer_wrapper_get_unique_id(WasGoId wasgo_id);
int _wasgo_NetworkedMultiplayerPeer_wrapper_is_refusing_new_connections(WasGoId wasgo_id);
void _wasgo_NetworkedMultiplayerPeer_wrapper_poll(WasGoId wasgo_id);
void _wasgo_NetworkedMultiplayerPeer_wrapper_set_refuse_new_connections(WasGoId wasgo_id, bool p_enable);
void _wasgo_NetworkedMultiplayerPeer_wrapper_set_target_peer(WasGoId wasgo_id, int p_id);
void _wasgo_NetworkedMultiplayerPeer_wrapper_set_transfer_mode(WasGoId wasgo_id, WasGoId p_mode);

    //constructor and destructor wrappers
    WasGoId _wasgo_NetworkedMultiplayerPeer_constructor();
    void _wasgo_NetworkedMultiplayerPeer_destructor(WasGoId p_wasgo_id);
            
}
#endif