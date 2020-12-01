/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMSAMPLE_H
#define AUDIOSTREAMSAMPLE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "ustring.h"
#include "AudioStream.h"
#include "error_list.h"
class AudioStreamSample : public AudioStream{
public:
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

AudioStreamSample(WasGoId p_wasgo_id);
~AudioStreamSample();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_AudioStreamSample_wrapper_get_data(WasGoId wasgo_id);
WasGoId _wasgo_AudioStreamSample_wrapper_get_format(WasGoId wasgo_id);
int _wasgo_AudioStreamSample_wrapper_get_loop_begin(WasGoId wasgo_id);
int _wasgo_AudioStreamSample_wrapper_get_loop_end(WasGoId wasgo_id);
WasGoId _wasgo_AudioStreamSample_wrapper_get_loop_mode(WasGoId wasgo_id);
int _wasgo_AudioStreamSample_wrapper_get_mix_rate(WasGoId wasgo_id);
int _wasgo_AudioStreamSample_wrapper_is_stereo(WasGoId wasgo_id);
WasGoId _wasgo_AudioStreamSample_wrapper_save_to_wav(WasGoId wasgo_id, WasGoId p_path);
void _wasgo_AudioStreamSample_wrapper_set_data(WasGoId wasgo_id, WasGoId p_data);
void _wasgo_AudioStreamSample_wrapper_set_format(WasGoId wasgo_id, WasGoId p_format);
void _wasgo_AudioStreamSample_wrapper_set_loop_begin(WasGoId wasgo_id, int p_loop_begin);
void _wasgo_AudioStreamSample_wrapper_set_loop_end(WasGoId wasgo_id, int p_loop_end);
void _wasgo_AudioStreamSample_wrapper_set_loop_mode(WasGoId wasgo_id, WasGoId p_loop_mode);
void _wasgo_AudioStreamSample_wrapper_set_mix_rate(WasGoId wasgo_id, int p_mix_rate);
void _wasgo_AudioStreamSample_wrapper_set_stereo(WasGoId wasgo_id, bool p_stereo);
}
#endif