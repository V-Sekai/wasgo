/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "StreamPeerSSL.h"
Error StreamPeerSSL::accept_stream(StreamPeer p_stream, CryptoKey p_private_key, X509Certificate p_certificate, X509Certificate p_chain = (X509Certificate) [object:null]){
	return Error(_wasgo_StreamPeerSSL_wrapper_accept_stream(wasgo_id, p_stream._get_wasgo_id(), p_private_key._get_wasgo_id(), p_certificate._get_wasgo_id(), p_chain._get_wasgo_id()));
}
Error StreamPeerSSL::connect_to_stream(StreamPeer p_stream, bool p_validate_certs = (bool) false, String p_for_hostname = (String) , X509Certificate p_valid_certificate = (X509Certificate) [object:null]){

    Variant wasgo_var_for_hostname = p_for_hostname;
    int wasgo_size_for_hostname = String(p_for_hostname).size();
    uint8_t wasgo_buffer_for_hostname[wasgo_size_for_hostname];
    encode_variant(wasgo_var_for_hostname, wasgo_buffer_for_hostname, wasgo_size_for_hostname);
    
	return Error(_wasgo_StreamPeerSSL_wrapper_connect_to_stream(wasgo_id, p_stream._get_wasgo_id(), p_validate_certs, wasgo_buffer_for_hostname, wasgo_size_for_hostname, p_valid_certificate._get_wasgo_id()));
}
void StreamPeerSSL::disconnect_from_stream(){
	_wasgo_StreamPeerSSL_wrapper_disconnect_from_stream(wasgo_id);
}
StreamPeerSSL::Status StreamPeerSSL::get_status(){
	return StreamPeerSSL::Status(_wasgo_StreamPeerSSL_wrapper_get_status(wasgo_id));
}
bool StreamPeerSSL::is_blocking_handshake_enabled(){
	return (bool) _wasgo_StreamPeerSSL_wrapper_is_blocking_handshake_enabled(wasgo_id);
}
void StreamPeerSSL::poll(){
	_wasgo_StreamPeerSSL_wrapper_poll(wasgo_id);
}
void StreamPeerSSL::set_blocking_handshake_enabled(bool p_enabled){
	_wasgo_StreamPeerSSL_wrapper_set_blocking_handshake_enabled(wasgo_id, p_enabled);
}

StreamPeerSSL::StreamPeerSSL(WasGoId p_wasgo_id) : StreamPeer(p_wasgo_id){
}
StreamPeerSSL::StreamPeerSSL(StreamPeer other) : StreamPeer(other._get_wasgo_id()){
    wasgo_id = _wasgo_StreamPeerSSL_constructor();
}
StreamPeerSSL::new_instance(){
    return StreamPeerSSL(_wasgo_StreamPeerSSL_constructor());
}