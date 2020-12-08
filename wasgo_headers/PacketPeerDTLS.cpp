/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PacketPeerDTLS.h"
Error PacketPeerDTLS::connect_to_peer(PacketPeerUDP p_packet_peer, bool p_validate_certs, String p_for_hostname, X509Certificate p_valid_certificate){

    Variant wasgo_var_for_hostname = p_for_hostname;
    int wasgo_size_for_hostname = String(p_for_hostname).size();
    uint8_t wasgo_buffer_for_hostname[wasgo_size_for_hostname];
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

PacketPeerDTLS::PacketPeerDTLS(WasGoID p_wasgo_id) : PacketPeer(p_wasgo_id){
}
PacketPeerDTLS::PacketPeerDTLS(PacketPeer other) : PacketPeer(other._get_wasgo_id()){
}
PacketPeerDTLS::PacketPeerDTLS():PacketPeer(){
}
PacketPeerDTLS PacketPeerDTLS::new_instance(){
    return PacketPeerDTLS(_wasgo_PacketPeerDTLS_constructor());
}
WasGoID PacketPeerDTLS::_get_wasgo_id(){
    return wasgo_id;
}
PacketPeerDTLS::operator bool(){
    return (bool) wasgo_id;
}
