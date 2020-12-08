/* THIS FILE IS GENERATED */
#ifndef STREAMPEERBUFFER_H
#define STREAMPEERBUFFER_H

#include "wasgo\wasgoid.h"

#include "Variant.h"
#include "StreamPeer.h"
class StreamPeerBuffer : public StreamPeer{
public:
void clear();
StreamPeerBuffer duplicate();
PoolByteArray get_data_array();
int get_position();
int get_size();
void resize(int p_size);
void seek(int p_position);
void set_data_array(PoolByteArray p_data);

protected:
public:
explicit StreamPeerBuffer(WasGoID p_wasgo_id);
explicit StreamPeerBuffer(StreamPeer other);
StreamPeerBuffer();
StreamPeerBuffer new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_StreamPeerBuffer_wrapper_clear(WasGoID wasgo_id);
WasGoID _wasgo_StreamPeerBuffer_wrapper_duplicate(WasGoID wasgo_id);
WasGoID _wasgo_StreamPeerBuffer_wrapper_get_data_array(WasGoID wasgo_id);
int _wasgo_StreamPeerBuffer_wrapper_get_position(WasGoID wasgo_id);
int _wasgo_StreamPeerBuffer_wrapper_get_size(WasGoID wasgo_id);
void _wasgo_StreamPeerBuffer_wrapper_resize(WasGoID wasgo_id, int p_size);
void _wasgo_StreamPeerBuffer_wrapper_seek(WasGoID wasgo_id, int p_position);
void _wasgo_StreamPeerBuffer_wrapper_set_data_array(WasGoID wasgo_id, WasGoID p_data);

    //constructor wrappers
    WasGoID _wasgo_StreamPeerBuffer_constructor();
            
}
#endif