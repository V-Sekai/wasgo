/* THIS FILE IS GENERATED */
#ifndef PACKETPEERSTREAM_H
#define PACKETPEERSTREAM_H

#include "stdint.h"

#include "PacketPeer.h"
#include "StreamPeer.h"
class PacketPeerStream : public PacketPeer{
public: PacketPeerStream();
int get_input_buffer_max_size();
int get_output_buffer_max_size();
StreamPeer get_stream_peer();
void set_input_buffer_max_size(int p_max_size_bytes);
void set_output_buffer_max_size(int p_max_size_bytes);
void set_stream_peer(StreamPeer p_peer);
};
#endif