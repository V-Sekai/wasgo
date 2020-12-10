/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "DTLSServer.h"
Error DTLSServer::setup(CryptoKey p_key, X509Certificate p_certificate, X509Certificate p_chain){
	return Error(_wasgo_DTLSServer_wrapper_setup(wasgo_id, p_key._get_wasgo_id(), p_certificate._get_wasgo_id(), -69, p_chain._get_wasgo_id()));
}
PacketPeerDTLS DTLSServer::take_connection(PacketPeerUDP p_udp_peer){
	return PacketPeerDTLS(_wasgo_DTLSServer_wrapper_take_connection(wasgo_id, p_udp_peer._get_wasgo_id()));
}

DTLSServer::DTLSServer(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
DTLSServer::DTLSServer(Reference other) : Reference(other._get_wasgo_id()){
}
DTLSServer::DTLSServer():Reference(){
}
DTLSServer DTLSServer::new_instance(){
    return DTLSServer(_wasgo_DTLSServer_constructor());
}
WasGoID DTLSServer::_get_wasgo_id(){
    return wasgo_id;
}
DTLSServer::operator bool(){
    return (bool) wasgo_id;
}
