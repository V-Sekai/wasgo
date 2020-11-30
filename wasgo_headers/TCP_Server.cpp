/* THIS FILE IS GENERATED */
#include "TCP_Server.h"
bool TCP_Server::is_connection_available(){
	return (bool) _wasgo_TCP_Server_wrapper_is_connection_available(wasgo_id));
}
bool TCP_Server::is_listening(){
	return (bool) _wasgo_TCP_Server_wrapper_is_listening(wasgo_id));
}
Error TCP_Server::listen(int p_port, String p_bind_address = (String) *){
	return Error::from_wasgo_id(_wasgo_TCP_Server_wrapper_listen(wasgo_id, port, ((Variant) bind_address).get_wasgo_id()));
}
void TCP_Server::stop(){
	_wasgo_TCP_Server_wrapper_stop(wasgo_id);
}
StreamPeerTCP TCP_Server::take_connection(){
	return StreamPeerTCP::from_wasgo_id(_wasgo_TCP_Server_wrapper_take_connection(wasgo_id));
}

TCP_Server::TCP_Server(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
TCP_Server::~TCP_Server(){
}