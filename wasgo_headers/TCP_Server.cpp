/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "TCP_Server.h"
bool TCP_Server::is_connection_available(){
	return (bool) _wasgo_TCP_Server_wrapper_is_connection_available(wasgo_id);
}
bool TCP_Server::is_listening(){
	return (bool) _wasgo_TCP_Server_wrapper_is_listening(wasgo_id);
}
Error TCP_Server::listen(int p_port, String p_bind_address){

    Variant wasgo_var_bind_address = p_bind_address;
    int wasgo_size_bind_address = String(p_bind_address).size();
    uint8_t wasgo_buffer_bind_address[wasgo_size_bind_address];
    encode_variant(wasgo_var_bind_address, wasgo_buffer_bind_address, wasgo_size_bind_address);
    
	return Error(_wasgo_TCP_Server_wrapper_listen(wasgo_id, p_port, wasgo_buffer_bind_address, wasgo_size_bind_address));
}
void TCP_Server::stop(){
	_wasgo_TCP_Server_wrapper_stop(wasgo_id);
}
StreamPeerTCP TCP_Server::take_connection(){
	return StreamPeerTCP(_wasgo_TCP_Server_wrapper_take_connection(wasgo_id));
}

TCP_Server::TCP_Server(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
TCP_Server::TCP_Server(Reference other) : Reference(other._get_wasgo_id()){
}
TCP_Server::TCP_Server():Reference(){
}
TCP_Server TCP_Server::new_instance(){
    return TCP_Server(_wasgo_TCP_Server_constructor());
}
WasGoID TCP_Server::_get_wasgo_id(){
    return wasgo_id;
}
TCP_Server::operator bool(){
    return (bool) wasgo_id;
}
