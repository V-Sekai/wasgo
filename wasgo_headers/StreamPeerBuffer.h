/* THIS FILE IS GENERATED */
#ifndef STREAMPEERBUFFER_H
#define STREAMPEERBUFFER_H

#include "stdint.h"

#include "Variant.h"
#include "StreamPeer.h"
class StreamPeerBuffer : public StreamPeer{
public: StreamPeerBuffer();
void clear();
StreamPeerBuffer duplicate();
PoolByteArray get_data_array();
int get_position();
int get_size();
void resize(int p_size);
void seek(int p_position);
void set_data_array(PoolByteArray p_data);
};
#endif