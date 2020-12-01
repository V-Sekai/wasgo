/* THIS FILE IS GENERATED */
#include "PacketPeerDTLS.h"
Error PacketPeerDTLS::connect_to_peer(PacketPeerUDP p_packet_peer, bool p_validate_certs = (bool) true, String p_for_hostname = (String) , X509Certificate p_valid_certificate = (X509Certificate) [object:null]){
	return Error::from_wasgo_id(_wasgo_PacketPeerDTLS_wrapper_connect_to_peer(wasgo_id, ((Variant) p_packet_peer).get_wasgo_id(), p_validate_certs, ((Variant) p_for_hostname).get_wasgo_id(), ((Variant) p_valid_certificate).get_wasgo_id()));
}
void PacketPeerDTLS::disconnect_from_peer(){
	_wasgo_PacketPeerDTLS_wrapper_disconnect_from_peer(wasgo_id);
}
PacketPeerDTLS::Status PacketPeerDTLS::get_status(){
	return PacketPeerDTLS::Status::from_wasgo_id(_wasgo_PacketPeerDTLS_wrapper_get_status(wasgo_id));
}
void PacketPeerDTLS::poll(){
	_wasgo_PacketPeerDTLS_wrapper_poll(wasgo_id);
}