/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PacketPeerUDP.h"
void PacketPeerUDP::close(){
	_wasgo_PacketPeerUDP_wrapper_close(wasgo_id);
}
Error PacketPeerUDP::connect_to_host(String p_host, int p_port){

    Variant wasgo_var_host = p_host;
    int wasgo_size_host = String(p_host).size();
    uint8_t wasgo_buffer_host[wasgo_size_host];
    encode_variant(wasgo_var_host, wasgo_buffer_host, wasgo_size_host);
    
	return Error(_wasgo_PacketPeerUDP_wrapper_connect_to_host(wasgo_id, wasgo_buffer_host, wasgo_size_host, p_port));
}
String PacketPeerUDP::get_packet_ip(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_PacketPeerUDP_wrapper_get_packet_ip(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
int PacketPeerUDP::get_packet_port(){
	return (int) _wasgo_PacketPeerUDP_wrapper_get_packet_port(wasgo_id);
}
bool PacketPeerUDP::is_connected_to_host(){
	return (bool) _wasgo_PacketPeerUDP_wrapper_is_connected_to_host(wasgo_id);
}
bool PacketPeerUDP::is_listening(){
	return (bool) _wasgo_PacketPeerUDP_wrapper_is_listening(wasgo_id);
}
Error PacketPeerUDP::join_multicast_group(String p_multicast_address, String p_interface_name){

    Variant wasgo_var_multicast_address = p_multicast_address;
    int wasgo_size_multicast_address = String(p_multicast_address).size();
    uint8_t wasgo_buffer_multicast_address[wasgo_size_multicast_address];
    encode_variant(wasgo_var_multicast_address, wasgo_buffer_multicast_address, wasgo_size_multicast_address);
    

    Variant wasgo_var_interface_name = p_interface_name;
    int wasgo_size_interface_name = String(p_interface_name).size();
    uint8_t wasgo_buffer_interface_name[wasgo_size_interface_name];
    encode_variant(wasgo_var_interface_name, wasgo_buffer_interface_name, wasgo_size_interface_name);
    
	return Error(_wasgo_PacketPeerUDP_wrapper_join_multicast_group(wasgo_id, wasgo_buffer_multicast_address, wasgo_size_multicast_address, wasgo_buffer_interface_name, wasgo_size_interface_name));
}
Error PacketPeerUDP::leave_multicast_group(String p_multicast_address, String p_interface_name){

    Variant wasgo_var_multicast_address = p_multicast_address;
    int wasgo_size_multicast_address = String(p_multicast_address).size();
    uint8_t wasgo_buffer_multicast_address[wasgo_size_multicast_address];
    encode_variant(wasgo_var_multicast_address, wasgo_buffer_multicast_address, wasgo_size_multicast_address);
    

    Variant wasgo_var_interface_name = p_interface_name;
    int wasgo_size_interface_name = String(p_interface_name).size();
    uint8_t wasgo_buffer_interface_name[wasgo_size_interface_name];
    encode_variant(wasgo_var_interface_name, wasgo_buffer_interface_name, wasgo_size_interface_name);
    
	return Error(_wasgo_PacketPeerUDP_wrapper_leave_multicast_group(wasgo_id, wasgo_buffer_multicast_address, wasgo_size_multicast_address, wasgo_buffer_interface_name, wasgo_size_interface_name));
}
Error PacketPeerUDP::listen(int p_port, String p_bind_address = (String) *, int p_recv_buf_size = (int) 65536){

    Variant wasgo_var_bind_address = p_bind_address;
    int wasgo_size_bind_address = String(p_bind_address).size();
    uint8_t wasgo_buffer_bind_address[wasgo_size_bind_address];
    encode_variant(wasgo_var_bind_address, wasgo_buffer_bind_address, wasgo_size_bind_address);
    
	return Error(_wasgo_PacketPeerUDP_wrapper_listen(wasgo_id, p_port, wasgo_buffer_bind_address, wasgo_size_bind_address, p_recv_buf_size));
}
void PacketPeerUDP::set_broadcast_enabled(bool p_enabled){
	_wasgo_PacketPeerUDP_wrapper_set_broadcast_enabled(wasgo_id, p_enabled);
}
Error PacketPeerUDP::set_dest_address(String p_host, int p_port){

    Variant wasgo_var_host = p_host;
    int wasgo_size_host = String(p_host).size();
    uint8_t wasgo_buffer_host[wasgo_size_host];
    encode_variant(wasgo_var_host, wasgo_buffer_host, wasgo_size_host);
    
	return Error(_wasgo_PacketPeerUDP_wrapper_set_dest_address(wasgo_id, wasgo_buffer_host, wasgo_size_host, p_port));
}
Error PacketPeerUDP::wait(){
	return Error(_wasgo_PacketPeerUDP_wrapper_wait(wasgo_id));
}

PacketPeerUDP::PacketPeerUDP(WasGoId p_wasgo_id) : PacketPeer(p_wasgo_id){
}
PacketPeerUDP::PacketPeerUDP(PacketPeer other) : PacketPeer(other._get_wasgo_id()){
    wasgo_id = _wasgo_PacketPeerUDP_constructor();
}
PacketPeerUDP::new_instance(){
    return PacketPeerUDP(_wasgo_PacketPeerUDP_constructor());
}