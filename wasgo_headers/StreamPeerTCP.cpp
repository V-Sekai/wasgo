/* THIS FILE IS GENERATED */
#include "StreamPeerTCP.h"
Error StreamPeerTCP::connect_to_host(String p_host, int p_port){
	return Error::from_wasgo_id(_wasgo_StreamPeerTCP_wrapper_connect_to_host(wasgo_id, ((Variant) host).get_wasgo_id(), port));
}
void StreamPeerTCP::disconnect_from_host(){
	_wasgo_StreamPeerTCP_wrapper_disconnect_from_host(wasgo_id);
}
String StreamPeerTCP::get_connected_host(){
	return String::from_wasgo_id(_wasgo_StreamPeerTCP_wrapper_get_connected_host(wasgo_id));
}
int StreamPeerTCP::get_connected_port(){
	return (int) _wasgo_StreamPeerTCP_wrapper_get_connected_port(wasgo_id));
}
StreamPeerTCP::Status StreamPeerTCP::get_status(){
	return StreamPeerTCP::Status::from_wasgo_id(_wasgo_StreamPeerTCP_wrapper_get_status(wasgo_id));
}
bool StreamPeerTCP::is_connected_to_host(){
	return (bool) _wasgo_StreamPeerTCP_wrapper_is_connected_to_host(wasgo_id));
}
void StreamPeerTCP::set_no_delay(bool p_enabled){
	_wasgo_StreamPeerTCP_wrapper_set_no_delay(wasgo_id, enabled);
}

StreamPeerTCP::StreamPeerTCP(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
StreamPeerTCP::~StreamPeerTCP(){
}