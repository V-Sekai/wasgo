/* THIS FILE IS GENERATED */
#include "PacketPeerUDP.h"
void PacketPeerUDP::close(){
	_wasgo_PacketPeerUDP_wrapper_close(wasgo_id);
}
Error PacketPeerUDP::connect_to_host(String p_host, int p_port){
	return Error::from_wasgo_id(_wasgo_PacketPeerUDP_wrapper_connect_to_host(wasgo_id, ((Variant) host).get_wasgo_id(), port));
}
String PacketPeerUDP::get_packet_ip(){
	return String::from_wasgo_id(_wasgo_PacketPeerUDP_wrapper_get_packet_ip(wasgo_id));
}
int PacketPeerUDP::get_packet_port(){
	return (int) _wasgo_PacketPeerUDP_wrapper_get_packet_port(wasgo_id));
}
bool PacketPeerUDP::is_connected_to_host(){
	return (bool) _wasgo_PacketPeerUDP_wrapper_is_connected_to_host(wasgo_id));
}
bool PacketPeerUDP::is_listening(){
	return (bool) _wasgo_PacketPeerUDP_wrapper_is_listening(wasgo_id));
}
Error PacketPeerUDP::join_multicast_group(String p_multicast_address, String p_interface_name){
	return Error::from_wasgo_id(_wasgo_PacketPeerUDP_wrapper_join_multicast_group(wasgo_id, ((Variant) multicast_address).get_wasgo_id(), ((Variant) interface_name).get_wasgo_id()));
}
Error PacketPeerUDP::leave_multicast_group(String p_multicast_address, String p_interface_name){
	return Error::from_wasgo_id(_wasgo_PacketPeerUDP_wrapper_leave_multicast_group(wasgo_id, ((Variant) multicast_address).get_wasgo_id(), ((Variant) interface_name).get_wasgo_id()));
}
Error PacketPeerUDP::listen(int p_port, String p_bind_address = (String) *, int p_recv_buf_size = (int) 65536){
	return Error::from_wasgo_id(_wasgo_PacketPeerUDP_wrapper_listen(wasgo_id, port, ((Variant) bind_address).get_wasgo_id(), recv_buf_size));
}
void PacketPeerUDP::set_broadcast_enabled(bool p_enabled){
	_wasgo_PacketPeerUDP_wrapper_set_broadcast_enabled(wasgo_id, enabled);
}
Error PacketPeerUDP::set_dest_address(String p_host, int p_port){
	return Error::from_wasgo_id(_wasgo_PacketPeerUDP_wrapper_set_dest_address(wasgo_id, ((Variant) host).get_wasgo_id(), port));
}
Error PacketPeerUDP::wait(){
	return Error::from_wasgo_id(_wasgo_PacketPeerUDP_wrapper_wait(wasgo_id));
}

PacketPeerUDP::PacketPeerUDP(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
PacketPeerUDP::~PacketPeerUDP(){
}