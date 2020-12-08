/* THIS FILE IS GENERATED */
#ifndef NETWORKEDMULTIPLAYERPEER_H
#define NETWORKEDMULTIPLAYERPEER_H

#include "wasgo\wasgoid.h"

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

protected:
public:
explicit NetworkedMultiplayerPeer(WasGoID p_wasgo_id);
explicit NetworkedMultiplayerPeer(PacketPeer other);
NetworkedMultiplayerPeer();
NetworkedMultiplayerPeer new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_NetworkedMultiplayerPeer_wrapper_get_connection_status(WasGoID wasgo_id);
int _wasgo_NetworkedMultiplayerPeer_wrapper_get_packet_peer(WasGoID wasgo_id);
WasGoID _wasgo_NetworkedMultiplayerPeer_wrapper_get_transfer_mode(WasGoID wasgo_id);
int _wasgo_NetworkedMultiplayerPeer_wrapper_get_unique_id(WasGoID wasgo_id);
int _wasgo_NetworkedMultiplayerPeer_wrapper_is_refusing_new_connections(WasGoID wasgo_id);
void _wasgo_NetworkedMultiplayerPeer_wrapper_poll(WasGoID wasgo_id);
void _wasgo_NetworkedMultiplayerPeer_wrapper_set_refuse_new_connections(WasGoID wasgo_id, bool p_enable);
void _wasgo_NetworkedMultiplayerPeer_wrapper_set_target_peer(WasGoID wasgo_id, int p_id);
void _wasgo_NetworkedMultiplayerPeer_wrapper_set_transfer_mode(WasGoID wasgo_id, WasGoID p_mode);

    //constructor wrappers
    WasGoID _wasgo_NetworkedMultiplayerPeer_constructor();
            
}
#endif