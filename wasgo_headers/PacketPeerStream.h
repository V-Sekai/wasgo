/* THIS FILE IS GENERATED */
#ifndef PACKETPEERSTREAM_H
#define PACKETPEERSTREAM_H

#include "wasgo\wasgoid.h"

#include "StreamPeer.h"
#include "PacketPeer.h"
class PacketPeerStream : public PacketPeer{
public:
int get_input_buffer_max_size();
int get_output_buffer_max_size();
StreamPeer get_stream_peer();
void set_input_buffer_max_size(int p_max_size_bytes);
void set_output_buffer_max_size(int p_max_size_bytes);
void set_stream_peer(StreamPeer p_peer);

protected:
public:
explicit PacketPeerStream(WasGoID p_wasgo_id);
explicit PacketPeerStream(PacketPeer other);
PacketPeerStream();
PacketPeerStream new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_PacketPeerStream_wrapper_get_input_buffer_max_size(WasGoID wasgo_id);
int _wasgo_PacketPeerStream_wrapper_get_output_buffer_max_size(WasGoID wasgo_id);
WasGoID _wasgo_PacketPeerStream_wrapper_get_stream_peer(WasGoID wasgo_id);
void _wasgo_PacketPeerStream_wrapper_set_input_buffer_max_size(WasGoID wasgo_id, int p_max_size_bytes);
void _wasgo_PacketPeerStream_wrapper_set_output_buffer_max_size(WasGoID wasgo_id, int p_max_size_bytes);
void _wasgo_PacketPeerStream_wrapper_set_stream_peer(WasGoID wasgo_id, WasGoID p_peer);

    //constructor wrappers
    WasGoID _wasgo_PacketPeerStream_constructor();
            
}
#endif