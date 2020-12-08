/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PacketPeer.h"
int PacketPeer::get_available_packet_count(){
	return (int) _wasgo_PacketPeer_wrapper_get_available_packet_count(wasgo_id);
}
int PacketPeer::get_encode_buffer_max_size(){
	return (int) _wasgo_PacketPeer_wrapper_get_encode_buffer_max_size(wasgo_id);
}
PoolByteArray PacketPeer::get_packet(){
	return PoolByteArray(_wasgo_PacketPeer_wrapper_get_packet(wasgo_id));
}
Error PacketPeer::get_packet_error(){
	return Error(_wasgo_PacketPeer_wrapper_get_packet_error(wasgo_id));
}
Variant PacketPeer::get_var(bool p_allow_objects){
	return Variant(_wasgo_PacketPeer_wrapper_get_var(wasgo_id, p_allow_objects));
}
bool PacketPeer::is_object_decoding_allowed(){
	return (bool) _wasgo_PacketPeer_wrapper_is_object_decoding_allowed(wasgo_id);
}
Error PacketPeer::put_packet(PoolByteArray p_buffer){
	return Error(_wasgo_PacketPeer_wrapper_put_packet(wasgo_id, p_buffer._get_wasgo_id()));
}
Error PacketPeer::put_var(Variant p_var, bool p_full_objects){
	return Error(_wasgo_PacketPeer_wrapper_put_var(wasgo_id, p_var._get_wasgo_id(), p_full_objects));
}
void PacketPeer::set_allow_object_decoding(bool p_enable){
	_wasgo_PacketPeer_wrapper_set_allow_object_decoding(wasgo_id, p_enable);
}
void PacketPeer::set_encode_buffer_max_size(int p_max_size){
	_wasgo_PacketPeer_wrapper_set_encode_buffer_max_size(wasgo_id, p_max_size);
}

PacketPeer::PacketPeer(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
PacketPeer::PacketPeer(Reference other) : Reference(other._get_wasgo_id()){
}
PacketPeer::PacketPeer():Reference(){
}
PacketPeer PacketPeer::new_instance(){
    return PacketPeer(_wasgo_PacketPeer_constructor());
}
WasGoID PacketPeer::_get_wasgo_id(){
    return wasgo_id;
}
PacketPeer::operator bool(){
    return (bool) wasgo_id;
}
