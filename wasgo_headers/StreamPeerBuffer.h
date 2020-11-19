/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "PoolByteArray.h"
#include "StreamPeer.h"
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