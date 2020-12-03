/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "TCP_Server.h"
bool TCP_Server::is_connection_available(){
	return (bool) _wasgo_TCP_Server_wrapper_is_connection_available(wasgo_id);
}
bool TCP_Server::is_listening(){
	return (bool) _wasgo_TCP_Server_wrapper_is_listening(wasgo_id);
}
Error TCP_Server::listen(int p_port, String p_bind_address = (String) *){

    Variant wasgo_var_bind_address = p_bind_address;
    uint8_t wasgo_buffer_bind_address[256];
    int wasgo_size_bind_address = 256;
    encode_variant(wasgo_var_bind_address, wasgo_buffer_bind_address, wasgo_size_bind_address);
    
	return Error(_wasgo_TCP_Server_wrapper_listen(wasgo_id, p_port, wasgo_buffer_bind_address, wasgo_size_bind_address));
}
void TCP_Server::stop(){
	_wasgo_TCP_Server_wrapper_stop(wasgo_id);
}
StreamPeerTCP TCP_Server::take_connection(){
	return StreamPeerTCP(_wasgo_TCP_Server_wrapper_take_connection(wasgo_id));
}

TCP_Server::TCP_Server(WasGoId p_wasgo_id) : Reference(p_wasgo_id){
}
TCP_Server::TCP_Server(){
    wasgo_id = _wasgo_TCP_Server_constructor();
}
TCP_Server::~TCP_Server(){
    _wasgo_TCP_Server_destructor(wasgo_id);
}