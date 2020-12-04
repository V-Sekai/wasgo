/* THIS FILE IS GENERATED */
#ifndef STREAMPEERBUFFER_H
#define STREAMPEERBUFFER_H

#include "wasgo\wasgo.h"

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
StreamPeerBuffer(WasGoId p_wasgo_id);
public:
StreamPeerBuffer();
~StreamPeerBuffer();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_StreamPeerBuffer_wrapper_clear(WasGoId wasgo_id);
WasGoId _wasgo_StreamPeerBuffer_wrapper_duplicate(WasGoId wasgo_id);
WasGoId _wasgo_StreamPeerBuffer_wrapper_get_data_array(WasGoId wasgo_id);
int _wasgo_StreamPeerBuffer_wrapper_get_position(WasGoId wasgo_id);
int _wasgo_StreamPeerBuffer_wrapper_get_size(WasGoId wasgo_id);
void _wasgo_StreamPeerBuffer_wrapper_resize(WasGoId wasgo_id, int p_size);
void _wasgo_StreamPeerBuffer_wrapper_seek(WasGoId wasgo_id, int p_position);
void _wasgo_StreamPeerBuffer_wrapper_set_data_array(WasGoId wasgo_id, WasGoId p_data);

    //constructor and destructor wrappers
    WasGoId _wasgo_StreamPeerBuffer_constructor();
    void _wasgo_StreamPeerBuffer_destructor(WasGoId p_wasgo_id);
            
}
#endif