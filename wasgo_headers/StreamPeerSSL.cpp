/* THIS FILE IS GENERATED */
#include "StreamPeerSSL.h"
Error StreamPeerSSL::accept_stream(StreamPeer p_stream, CryptoKey p_private_key, X509Certificate p_certificate, X509Certificate p_chain = (X509Certificate) [Object:null]){
	return Error::from_wasgo_id(_wasgo_StreamPeerSSL_wrapper_accept_stream(wasgo_id, ((Variant) stream).get_wasgo_id(), ((Variant) private_key).get_wasgo_id(), ((Variant) certificate).get_wasgo_id(), ((Variant) chain).get_wasgo_id()));
}
Error StreamPeerSSL::connect_to_stream(StreamPeer p_stream, bool p_validate_certs = (bool) False, String p_for_hostname = (String) , X509Certificate p_valid_certificate = (X509Certificate) [Object:null]){
	return Error::from_wasgo_id(_wasgo_StreamPeerSSL_wrapper_connect_to_stream(wasgo_id, ((Variant) stream).get_wasgo_id(), validate_certs, ((Variant) for_hostname).get_wasgo_id(), ((Variant) valid_certificate).get_wasgo_id()));
}
void StreamPeerSSL::disconnect_from_stream(){
	_wasgo_StreamPeerSSL_wrapper_disconnect_from_stream(wasgo_id);
}
StreamPeerSSL::Status StreamPeerSSL::get_status(){
	return StreamPeerSSL::Status::from_wasgo_id(_wasgo_StreamPeerSSL_wrapper_get_status(wasgo_id));
}
bool StreamPeerSSL::is_blocking_handshake_enabled(){
	return (bool) _wasgo_StreamPeerSSL_wrapper_is_blocking_handshake_enabled(wasgo_id));
}
void StreamPeerSSL::poll(){
	_wasgo_StreamPeerSSL_wrapper_poll(wasgo_id);
}
void StreamPeerSSL::set_blocking_handshake_enabled(bool p_enabled){
	_wasgo_StreamPeerSSL_wrapper_set_blocking_handshake_enabled(wasgo_id, enabled);
}

StreamPeerSSL::StreamPeerSSL(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
StreamPeerSSL::~StreamPeerSSL(){
}