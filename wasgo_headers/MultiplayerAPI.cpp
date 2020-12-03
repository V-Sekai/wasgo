/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "MultiplayerAPI.h"
void MultiplayerAPI::clear(){
	_wasgo_MultiplayerAPI_wrapper_clear(wasgo_id);
}
PoolIntArray MultiplayerAPI::get_network_connected_peers(){
	return PoolIntArray(_wasgo_MultiplayerAPI_wrapper_get_network_connected_peers(wasgo_id));
}
NetworkedMultiplayerPeer MultiplayerAPI::get_network_peer(){
	return NetworkedMultiplayerPeer(_wasgo_MultiplayerAPI_wrapper_get_network_peer(wasgo_id));
}
int MultiplayerAPI::get_network_unique_id(){
	return (int) _wasgo_MultiplayerAPI_wrapper_get_network_unique_id(wasgo_id);
}
int MultiplayerAPI::get_rpc_sender_id(){
	return (int) _wasgo_MultiplayerAPI_wrapper_get_rpc_sender_id(wasgo_id);
}
bool MultiplayerAPI::has_network_peer(){
	return (bool) _wasgo_MultiplayerAPI_wrapper_has_network_peer(wasgo_id);
}
bool MultiplayerAPI::is_network_server(){
	return (bool) _wasgo_MultiplayerAPI_wrapper_is_network_server(wasgo_id);
}
bool MultiplayerAPI::is_object_decoding_allowed(){
	return (bool) _wasgo_MultiplayerAPI_wrapper_is_object_decoding_allowed(wasgo_id);
}
bool MultiplayerAPI::is_refusing_new_network_connections(){
	return (bool) _wasgo_MultiplayerAPI_wrapper_is_refusing_new_network_connections(wasgo_id);
}
void MultiplayerAPI::poll(){
	_wasgo_MultiplayerAPI_wrapper_poll(wasgo_id);
}
Error MultiplayerAPI::send_bytes(PoolByteArray p_bytes, int p_id = (int) 0, NetworkedMultiplayerPeer::TransferMode p_mode = (NetworkedMultiplayerPeer::TransferMode) 2){
	return Error(_wasgo_MultiplayerAPI_wrapper_send_bytes(wasgo_id, p_bytes._get_wasgo_id(), p_id, p_mode._get_wasgo_id()));
}
void MultiplayerAPI::set_allow_object_decoding(bool p_enable){
	_wasgo_MultiplayerAPI_wrapper_set_allow_object_decoding(wasgo_id, p_enable);
}
void MultiplayerAPI::set_network_peer(NetworkedMultiplayerPeer p_peer){
	_wasgo_MultiplayerAPI_wrapper_set_network_peer(wasgo_id, p_peer._get_wasgo_id());
}
void MultiplayerAPI::set_refuse_new_network_connections(bool p_refuse){
	_wasgo_MultiplayerAPI_wrapper_set_refuse_new_network_connections(wasgo_id, p_refuse);
}
void MultiplayerAPI::set_root_node(Node p_node){
	_wasgo_MultiplayerAPI_wrapper_set_root_node(wasgo_id, p_node._get_wasgo_id());
}

MultiplayerAPI::MultiplayerAPI(WasGoId p_wasgo_id) : Reference(p_wasgo_id){
}
MultiplayerAPI::MultiplayerAPI(){
    wasgo_id = _wasgo_MultiplayerAPI_constructor();
}
MultiplayerAPI::~MultiplayerAPI(){
    _wasgo_MultiplayerAPI_destructor(wasgo_id);
}