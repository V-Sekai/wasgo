/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "PoolByteArray.h"
#include "AudioStream.h"
class AudioStreamOGGVorbis : public AudioStream{
public: AudioStreamOGGVorbis();
PoolByteArray  get_data();
PoolByteArray  get_data();
float  get_loop_offset();
float  get_loop_offset();
bool  has_loop();
bool  has_loop();
void  set_data(PoolByteArray data);
void  set_loop(bool enable);
void  set_loop_offset(float seconds);
};