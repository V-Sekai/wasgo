/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PacketPeerStream.h"
int PacketPeerStream::get_input_buffer_max_size(){
	return (int) _wasgo_PacketPeerStream_wrapper_get_input_buffer_max_size(wasgo_id);
}
int PacketPeerStream::get_output_buffer_max_size(){
	return (int) _wasgo_PacketPeerStream_wrapper_get_output_buffer_max_size(wasgo_id);
}
StreamPeer PacketPeerStream::get_stream_peer(){
	return StreamPeer(_wasgo_PacketPeerStream_wrapper_get_stream_peer(wasgo_id));
}
void PacketPeerStream::set_input_buffer_max_size(int p_max_size_bytes){
	_wasgo_PacketPeerStream_wrapper_set_input_buffer_max_size(wasgo_id, p_max_size_bytes);
}
void PacketPeerStream::set_output_buffer_max_size(int p_max_size_bytes){
	_wasgo_PacketPeerStream_wrapper_set_output_buffer_max_size(wasgo_id, p_max_size_bytes);
}
void PacketPeerStream::set_stream_peer(StreamPeer p_peer){
	_wasgo_PacketPeerStream_wrapper_set_stream_peer(wasgo_id, p_peer._get_wasgo_id());
}

PacketPeerStream::PacketPeerStream(WasGoId p_wasgo_id) : PacketPeer(p_wasgo_id){
}
PacketPeerStream::PacketPeerStream(PacketPeer other) : PacketPeer(other._get_wasgo_id()){
    wasgo_id = _wasgo_PacketPeerStream_constructor();
}
PacketPeerStream::new_instance(){
    return PacketPeerStream(_wasgo_PacketPeerStream_constructor());
}