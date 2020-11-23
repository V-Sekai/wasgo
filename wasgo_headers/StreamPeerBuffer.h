/* THIS FILE IS GENERATED */
#ifndef STREAMPEERBUFFER_H
#define STREAMPEERBUFFER_H

#include <stdint.h>

#include "StreamPeer.h"
#include "PoolByteArray.h"
class StreamPeerBuffer : public StreamPeer{
public: StreamPeerBuffer();
void  clear();
void  clear();
StreamPeerBuffer  duplicate();
StreamPeerBuffer  duplicate();
PoolByteArray  get_data_array();
PoolByteArray  get_data_array();
int  get_position();
int  get_position();
int  get_size();
int  get_size();
void  resize(int size);
void  seek(int position);
void  set_data_array(PoolByteArray data);
};
#endif