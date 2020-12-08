/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "StreamPeerBuffer.h"
void StreamPeerBuffer::clear(){
	_wasgo_StreamPeerBuffer_wrapper_clear(wasgo_id);
}
StreamPeerBuffer StreamPeerBuffer::duplicate(){
	return StreamPeerBuffer(_wasgo_StreamPeerBuffer_wrapper_duplicate(wasgo_id));
}
PoolByteArray StreamPeerBuffer::get_data_array(){
	return PoolByteArray(_wasgo_StreamPeerBuffer_wrapper_get_data_array(wasgo_id));
}
int StreamPeerBuffer::get_position(){
	return (int) _wasgo_StreamPeerBuffer_wrapper_get_position(wasgo_id);
}
int StreamPeerBuffer::get_size(){
	return (int) _wasgo_StreamPeerBuffer_wrapper_get_size(wasgo_id);
}
void StreamPeerBuffer::resize(int p_size){
	_wasgo_StreamPeerBuffer_wrapper_resize(wasgo_id, p_size);
}
void StreamPeerBuffer::seek(int p_position){
	_wasgo_StreamPeerBuffer_wrapper_seek(wasgo_id, p_position);
}
void StreamPeerBuffer::set_data_array(PoolByteArray p_data){
	_wasgo_StreamPeerBuffer_wrapper_set_data_array(wasgo_id, p_data._get_wasgo_id());
}

StreamPeerBuffer::StreamPeerBuffer(WasGoID p_wasgo_id) : StreamPeer(p_wasgo_id){
}
StreamPeerBuffer::StreamPeerBuffer(StreamPeer other) : StreamPeer(other._get_wasgo_id()){
}
StreamPeerBuffer::StreamPeerBuffer():StreamPeer(){
}
StreamPeerBuffer StreamPeerBuffer::new_instance(){
    return StreamPeerBuffer(_wasgo_StreamPeerBuffer_constructor());
}
WasGoID StreamPeerBuffer::_get_wasgo_id(){
    return wasgo_id;
}
StreamPeerBuffer::operator bool(){
    return (bool) wasgo_id;
}
