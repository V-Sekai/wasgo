/* THIS FILE IS GENERATED */
#include "marshalls.h"
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

    Variant wasgo_var_bind_address = p_bind_address;
    int wasgo_size_bind_address = String(p_bind_address).size();
    uint8_t wasgo_buffer_bind_address[wasgo_size_bind_address];
    encode_variant(wasgo_var_bind_address, wasgo_buffer_bind_address, wasgo_size_bind_address);
    
	return Error(_wasgo_UDPServer_wrapper_listen(wasgo_id, p_port, wasgo_buffer_bind_address, wasgo_size_bind_address));
}
Error UDPServer::poll(){
	return Error(_wasgo_UDPServer_wrapper_poll(wasgo_id));
}
void UDPServer::set_max_pending_connections(int p_max_pending_connections){
	_wasgo_UDPServer_wrapper_set_max_pending_connections(wasgo_id, p_max_pending_connections);
}
void UDPServer::stop(){
	_wasgo_UDPServer_wrapper_stop(wasgo_id);
}
PacketPeerUDP UDPServer::take_connection(){
	return PacketPeerUDP(_wasgo_UDPServer_wrapper_take_connection(wasgo_id));
}

UDPServer::UDPServer(WasGoId p_wasgo_id) : Reference(p_wasgo_id){
}
UDPServer::UDPServer(Reference other) : Reference(other._get_wasgo_id()){
    wasgo_id = _wasgo_UDPServer_constructor();
}
UDPServer::new_instance(){
    return UDPServer(_wasgo_UDPServer_constructor());
}