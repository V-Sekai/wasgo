/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PacketPeerDTLS.h"
Error PacketPeerDTLS::connect_to_peer(PacketPeerUDP p_packet_peer, bool p_validate_certs = (bool) true, String p_for_hostname = (String) , X509Certificate p_valid_certificate = (X509Certificate) [object:null]){

    Variant wasgo_var_for_hostname = p_for_hostname;
    uint8_t wasgo_buffer_for_hostname[256];
    int wasgo_size_for_hostname = 256;
    encode_variant(wasgo_var_for_hostname, wasgo_buffer_for_hostname, wasgo_size_for_hostname);
    
	return Error(_wasgo_PacketPeerDTLS_wrapper_connect_to_peer(wasgo_id, p_packet_peer._get_wasgo_id(), p_validate_certs, wasgo_buffer_for_hostname, wasgo_size_for_hostname, p_valid_certificate._get_wasgo_id()));
}
void PacketPeerDTLS::disconnect_from_peer(){
	_wasgo_PacketPeerDTLS_wrapper_disconnect_from_peer(wasgo_id);
}
PacketPeerDTLS::Status PacketPeerDTLS::get_status(){
	return PacketPeerDTLS::Status(_wasgo_PacketPeerDTLS_wrapper_get_status(wasgo_id));
}
void PacketPeerDTLS::poll(){
	_wasgo_PacketPeerDTLS_wrapper_poll(wasgo_id);
}

PacketPeerDTLS::PacketPeerDTLS(WasGoId p_wasgo_id) : PacketPeer(p_wasgo_id){
}
PacketPeerDTLS::PacketPeerDTLS(){
    wasgo_id = _wasgo_PacketPeerDTLS_constructor();
}
PacketPeerDTLS::~PacketPeerDTLS(){
    _wasgo_PacketPeerDTLS_destructor(wasgo_id);
}