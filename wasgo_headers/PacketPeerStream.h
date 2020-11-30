/* THIS FILE IS GENERATED */
#ifndef PACKETPEERSTREAM_H
#define PACKETPEERSTREAM_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "PacketPeer.h"
#include "StreamPeer.h"
class PacketPeerStream : public PacketPeer{
int get_input_buffer_max_size();
int get_output_buffer_max_size();
StreamPeer get_stream_peer();
void set_input_buffer_max_size(int p_max_size_bytes);
void set_output_buffer_max_size(int p_max_size_bytes);
void set_stream_peer(StreamPeer p_peer);

PacketPeerStream(WasGoId p_wasgo_id);
~PacketPeerStream();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_PacketPeerStream_wrapper_get_input_buffer_max_size(WasGoId wasgo_id);
int _wasgo_PacketPeerStream_wrapper_get_output_buffer_max_size(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_PacketPeerStream_wrapper_get_stream_peer(WasGoId wasgo_id);
void _wasgo_PacketPeerStream_wrapper_set_input_buffer_max_size(WasGoId wasgo_id, int p_max_size_bytes);
void _wasgo_PacketPeerStream_wrapper_set_output_buffer_max_size(WasGoId wasgo_id, int p_max_size_bytes);
void _wasgo_PacketPeerStream_wrapper_set_stream_peer(WasGoId wasgo_id, WasGo::WasGoId p_peer);
}
#endif