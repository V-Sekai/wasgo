/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "NetworkedMultiplayerPeer.h"
NetworkedMultiplayerPeer::ConnectionStatus NetworkedMultiplayerPeer::get_connection_status(){
	return NetworkedMultiplayerPeer::ConnectionStatus(_wasgo_NetworkedMultiplayerPeer_wrapper_get_connection_status(wasgo_id));
}
int NetworkedMultiplayerPeer::get_packet_peer(){
	return (int) _wasgo_NetworkedMultiplayerPeer_wrapper_get_packet_peer(wasgo_id);
}
NetworkedMultiplayerPeer::TransferMode NetworkedMultiplayerPeer::get_transfer_mode(){
	return NetworkedMultiplayerPeer::TransferMode(_wasgo_NetworkedMultiplayerPeer_wrapper_get_transfer_mode(wasgo_id));
}
int NetworkedMultiplayerPeer::get_unique_id(){
	return (int) _wasgo_NetworkedMultiplayerPeer_wrapper_get_unique_id(wasgo_id);
}
bool NetworkedMultiplayerPeer::is_refusing_new_connections(){
	return (bool) _wasgo_NetworkedMultiplayerPeer_wrapper_is_refusing_new_connections(wasgo_id);
}
void NetworkedMultiplayerPeer::poll(){
	_wasgo_NetworkedMultiplayerPeer_wrapper_poll(wasgo_id);
}
void NetworkedMultiplayerPeer::set_refuse_new_connections(bool p_enable){
	_wasgo_NetworkedMultiplayerPeer_wrapper_set_refuse_new_connections(wasgo_id, p_enable);
}
void NetworkedMultiplayerPeer::set_target_peer(int p_id){
	_wasgo_NetworkedMultiplayerPeer_wrapper_set_target_peer(wasgo_id, p_id);
}
void NetworkedMultiplayerPeer::set_transfer_mode(NetworkedMultiplayerPeer::TransferMode p_mode){
	_wasgo_NetworkedMultiplayerPeer_wrapper_set_transfer_mode(wasgo_id, p_mode._get_wasgo_id());
}

NetworkedMultiplayerPeer::NetworkedMultiplayerPeer(WasGoID p_wasgo_id) : PacketPeer(p_wasgo_id){
}
NetworkedMultiplayerPeer::NetworkedMultiplayerPeer(PacketPeer other) : PacketPeer(other._get_wasgo_id()){
}
NetworkedMultiplayerPeer::NetworkedMultiplayerPeer():PacketPeer(){
}
NetworkedMultiplayerPeer NetworkedMultiplayerPeer::new_instance(){
    return NetworkedMultiplayerPeer(_wasgo_NetworkedMultiplayerPeer_constructor());
}
WasGoID NetworkedMultiplayerPeer::_get_wasgo_id(){
    return wasgo_id;
}
NetworkedMultiplayerPeer::operator bool(){
    return (bool) wasgo_id;
}
