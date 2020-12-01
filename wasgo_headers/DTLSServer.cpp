/* THIS FILE IS GENERATED */
#include "DTLSServer.h"
Error DTLSServer::setup(CryptoKey p_key, X509Certificate p_certificate, X509Certificate p_chain = (X509Certificate) [object:null]){
	return Error::from_wasgo_id(_wasgo_DTLSServer_wrapper_setup(wasgo_id, ((Variant) p_key).get_wasgo_id(), ((Variant) p_certificate).get_wasgo_id(), ((Variant) p_chain).get_wasgo_id()));
}
PacketPeerDTLS DTLSServer::take_connection(PacketPeerUDP p_udp_peer){
	return PacketPeerDTLS::from_wasgo_id(_wasgo_DTLSServer_wrapper_take_connection(wasgo_id, ((Variant) p_udp_peer).get_wasgo_id()));
}