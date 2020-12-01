/* THIS FILE IS GENERATED */
#include "UDPServer.h"
int UDPServer::get_max_pending_connections(){
	return (int) _wasgo_UDPServer_wrapper_get_max_pending_connections(wasgo_id);
}
bool UDPServer::is_connection_available(){
	return (bool) _wasgo_UDPServer_wrapper_is_connection_available(wasgo_id);
}
bool UDPServer::is_listening(){
	return (bool) _wasgo_UDPServer_wrapper_is_listening(wasgo_id);
}
Error UDPServer::listen(int p_port, String p_bind_address = (String) *){
	return Error::from_wasgo_id(_wasgo_UDPServer_wrapper_listen(wasgo_id, p_port, ((Variant) p_bind_address).get_wasgo_id()));
}
Error UDPServer::poll(){
	return Error::from_wasgo_id(_wasgo_UDPServer_wrapper_poll(wasgo_id));
}
void UDPServer::set_max_pending_connections(int p_max_pending_connections){
	_wasgo_UDPServer_wrapper_set_max_pending_connections(wasgo_id, p_max_pending_connections);
}
void UDPServer::stop(){
	_wasgo_UDPServer_wrapper_stop(wasgo_id);
}
PacketPeerUDP UDPServer::take_connection(){
	return PacketPeerUDP::from_wasgo_id(_wasgo_UDPServer_wrapper_take_connection(wasgo_id));
}