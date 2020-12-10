/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "StreamPeerTCP.h"
Error StreamPeerTCP::connect_to_host(String p_host, int p_port){

    Variant wasgo_var_host = p_host;
    int wasgo_size_host = 10 + String(p_host).size();
    uint8_t wasgo_buffer_host[wasgo_size_host];
    encode_variant(wasgo_var_host, wasgo_buffer_host, wasgo_size_host);
    
	return Error(_wasgo_StreamPeerTCP_wrapper_connect_to_host(wasgo_id, wasgo_buffer_host, wasgo_size_host, -69, p_port));
}
void StreamPeerTCP::disconnect_from_host(){
	_wasgo_StreamPeerTCP_wrapper_disconnect_from_host(wasgo_id);
}
String StreamPeerTCP::get_connected_host(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_StreamPeerTCP_wrapper_get_connected_host(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
int StreamPeerTCP::get_connected_port(){
	return (int) _wasgo_StreamPeerTCP_wrapper_get_connected_port(wasgo_id);
}
StreamPeerTCP::Status StreamPeerTCP::get_status(){
	return StreamPeerTCP::Status(_wasgo_StreamPeerTCP_wrapper_get_status(wasgo_id));
}
bool StreamPeerTCP::is_connected_to_host(){
	return (bool) _wasgo_StreamPeerTCP_wrapper_is_connected_to_host(wasgo_id);
}
void StreamPeerTCP::set_no_delay(bool p_enabled){
	_wasgo_StreamPeerTCP_wrapper_set_no_delay(wasgo_id, p_enabled);
}

StreamPeerTCP::StreamPeerTCP(WasGoID p_wasgo_id) : StreamPeer(p_wasgo_id){
}
StreamPeerTCP::StreamPeerTCP(StreamPeer other) : StreamPeer(other._get_wasgo_id()){
}
StreamPeerTCP::StreamPeerTCP():StreamPeer(){
}
StreamPeerTCP StreamPeerTCP::new_instance(){
    return StreamPeerTCP(_wasgo_StreamPeerTCP_constructor());
}
WasGoID StreamPeerTCP::_get_wasgo_id(){
    return wasgo_id;
}
StreamPeerTCP::operator bool(){
    return (bool) wasgo_id;
}
