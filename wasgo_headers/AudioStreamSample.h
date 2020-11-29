/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMSAMPLE_H
#define AUDIOSTREAMSAMPLE_H

#include "stdint.h"

#include "Variant.h"
#include "AudioStream.h"
#include "Error.h"
class AudioStreamSample : public AudioStream{
public: AudioStreamSample();
enum Format{
FORMAT_8_BITS,
FORMAT_16_BITS,
FORMAT_IMA_ADPCM
};
enum LoopMode{
LOOP_DISABLED,
LOOP_FORWARD,
LOOP_PING_PONG,
LOOP_BACKWARD
};
PoolByteArray get_data();
AudioStreamSample::Format get_format();
int get_loop_begin();
int get_loop_end();
AudioStreamSample::LoopMode get_loop_mode();
int get_mix_rate();
bool is_stereo();
Error save_to_wav(String p_path);
void set_data(PoolByteArray p_data);
void set_format(AudioStreamSample::Format p_format);
void set_loop_begin(int p_loop_begin);
void set_loop_end(int p_loop_end);
void set_loop_mode(AudioStreamSample::LoopMode p_loop_mode);
void set_mix_rate(int p_mix_rate);
void set_stereo(bool p_stereo);
};
#endif