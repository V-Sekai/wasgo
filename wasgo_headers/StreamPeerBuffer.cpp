/* THIS FILE IS GENERATED */
#include "StreamPeerBuffer.h"
void StreamPeerBuffer::clear(){
	_wasgo_StreamPeerBuffer_wrapper_clear(wasgo_id);
}
StreamPeerBuffer StreamPeerBuffer::duplicate(){
	return StreamPeerBuffer::from_wasgo_id(_wasgo_StreamPeerBuffer_wrapper_duplicate(wasgo_id));
}
PoolByteArray StreamPeerBuffer::get_data_array(){
	return PoolByteArray::from_wasgo_id(_wasgo_StreamPeerBuffer_wrapper_get_data_array(wasgo_id));
}
int StreamPeerBuffer::get_position(){
	return (int) _wasgo_StreamPeerBuffer_wrapper_get_position(wasgo_id));
}
int StreamPeerBuffer::get_size(){
	return (int) _wasgo_StreamPeerBuffer_wrapper_get_size(wasgo_id));
}
void StreamPeerBuffer::resize(int p_size){
	_wasgo_StreamPeerBuffer_wrapper_resize(wasgo_id, size);
}
void StreamPeerBuffer::seek(int p_position){
	_wasgo_StreamPeerBuffer_wrapper_seek(wasgo_id, position);
}
void StreamPeerBuffer::set_data_array(PoolByteArray p_data){
	_wasgo_StreamPeerBuffer_wrapper_set_data_array(wasgo_id, ((Variant) data).get_wasgo_id());
}

StreamPeerBuffer::StreamPeerBuffer(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
StreamPeerBuffer::~StreamPeerBuffer(){
}