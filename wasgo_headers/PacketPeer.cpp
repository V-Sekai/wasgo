/* THIS FILE IS GENERATED */
#include "PacketPeer.h"
int PacketPeer::get_available_packet_count(){
	return (int) _wasgo_PacketPeer_wrapper_get_available_packet_count(wasgo_id));
}
int PacketPeer::get_encode_buffer_max_size(){
	return (int) _wasgo_PacketPeer_wrapper_get_encode_buffer_max_size(wasgo_id));
}
PoolByteArray PacketPeer::get_packet(){
	return PoolByteArray::from_wasgo_id(_wasgo_PacketPeer_wrapper_get_packet(wasgo_id));
}
Error PacketPeer::get_packet_error(){
	return Error::from_wasgo_id(_wasgo_PacketPeer_wrapper_get_packet_error(wasgo_id));
}
Variant PacketPeer::get_var(bool p_allow_objects = (bool) False){
	return Variant::from_wasgo_id(_wasgo_PacketPeer_wrapper_get_var(wasgo_id, allow_objects));
}
bool PacketPeer::is_object_decoding_allowed(){
	return (bool) _wasgo_PacketPeer_wrapper_is_object_decoding_allowed(wasgo_id));
}
Error PacketPeer::put_packet(PoolByteArray p_buffer){
	return Error::from_wasgo_id(_wasgo_PacketPeer_wrapper_put_packet(wasgo_id, ((Variant) buffer).get_wasgo_id()));
}
Error PacketPeer::put_var(Variant p_var, bool p_full_objects = (bool) False){
	return Error::from_wasgo_id(_wasgo_PacketPeer_wrapper_put_var(wasgo_id, ((Variant) var).get_wasgo_id(), full_objects));
}
void PacketPeer::set_allow_object_decoding(bool p_enable){
	_wasgo_PacketPeer_wrapper_set_allow_object_decoding(wasgo_id, enable);
}
void PacketPeer::set_encode_buffer_max_size(int p_max_size){
	_wasgo_PacketPeer_wrapper_set_encode_buffer_max_size(wasgo_id, max_size);
}