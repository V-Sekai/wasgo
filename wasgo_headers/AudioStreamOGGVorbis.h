/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMOGGVORBIS_H
#define AUDIOSTREAMOGGVORBIS_H

#include <stdint.h>

#include "AudioStream.h"
#include "PoolByteArray.h"
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
#endif