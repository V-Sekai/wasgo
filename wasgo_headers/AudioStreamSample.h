/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMSAMPLE_H
#define AUDIOSTREAMSAMPLE_H

#include <stdint.h>

#include "String.h"
#include "Erro.h"
#include "AudioStream.h"
#include "PoolByteArray.h"
class AudioStreamSample : public AudioStream{
public: AudioStreamSample();
enum LoopMode{
LOOP_DISABLED: 0,
LOOP_FORWARD: 1,
LOOP_PING_PONG: 2,
};
enum Format{
FORMAT_8_BITS: 0,
FORMAT_16_BITS: 1,
};
PoolByteArray  get_data();
PoolByteArray  get_data();
enum.AudioStreamSample::Format  get_format();
enum.AudioStreamSample::Format  get_format();
int  get_loop_begin();
int  get_loop_begin();
int  get_loop_end();
int  get_loop_end();
enum.AudioStreamSample::LoopMode  get_loop_mode();
enum.AudioStreamSample::LoopMode  get_loop_mode();
int  get_mix_rate();
int  get_mix_rate();
bool  is_stereo();
bool  is_stereo();
enum.Error  save_to_wav(String path);
void  set_data(PoolByteArray data);
void  set_format(int format);
void  set_loop_begin(int loop_begin);
void  set_loop_end(int loop_end);
void  set_loop_mode(int loop_mode);
void  set_mix_rate(int mix_rate);
void  set_stereo(bool stereo);
};
#endif