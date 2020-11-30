/* THIS FILE IS GENERATED */
#include "MultiplayerAPI.h"
NetworkedMultiplayerPeer MultiplayerAPI::get_network_peer(){
	return NetworkedMultiplayerPeer::from_wasgo_id(_wasgo_MultiplayerAPI_wrapper_get_network_peer(wasgo_id));
}
int MultiplayerAPI::get_network_unique_id(){
	return (int) _wasgo_MultiplayerAPI_wrapper_get_network_unique_id(wasgo_id));
}
int MultiplayerAPI::get_rpc_sender_id(){
	return (int) _wasgo_MultiplayerAPI_wrapper_get_rpc_sender_id(wasgo_id));
}
bool MultiplayerAPI::has_network_peer(){
	return (bool) _wasgo_MultiplayerAPI_wrapper_has_network_peer(wasgo_id));
}
bool MultiplayerAPI::is_network_server(){
	return (bool) _wasgo_MultiplayerAPI_wrapper_is_network_server(wasgo_id));
}
Error MultiplayerAPI::send_bytes(PoolByteArray p_bytes, int p_id = (int) 0, NetworkedMultiplayerPeer::TransferMode p_mode = (NetworkedMultiplayerPeer::TransferMode) 2){
	return Error::from_wasgo_id(_wasgo_MultiplayerAPI_wrapper_send_bytes(wasgo_id, ((Variant) bytes).get_wasgo_id(), id, ((Variant) mode).get_wasgo_id()));
}
void MultiplayerAPI::set_root_node(Node p_node){
	_wasgo_MultiplayerAPI_wrapper_set_root_node(wasgo_id, ((Variant) node).get_wasgo_id());
}

MultiplayerAPI::MultiplayerAPI(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
MultiplayerAPI::~MultiplayerAPI(){
}