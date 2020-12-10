/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMSAMPLE_H
#define AUDIOSTREAMSAMPLE_H

#include "wasgo\wasgoid.h"

#include "AudioStream.h"
#include "Ustring.h"
#include "error_list.h"
#include "Variant.h"
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

protected:
public:
explicit AudioStreamSample(WasGoID p_wasgo_id);
explicit AudioStreamSample(AudioStream other);
AudioStreamSample();
AudioStreamSample new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_AudioStreamSample_wrapper_get_data(WasGoID wasgo_id);
WasGoID _wasgo_AudioStreamSample_wrapper_get_format(WasGoID wasgo_id);
int _wasgo_AudioStreamSample_wrapper_get_loop_begin(WasGoID wasgo_id);
int _wasgo_AudioStreamSample_wrapper_get_loop_end(WasGoID wasgo_id);
WasGoID _wasgo_AudioStreamSample_wrapper_get_loop_mode(WasGoID wasgo_id);
int _wasgo_AudioStreamSample_wrapper_get_mix_rate(WasGoID wasgo_id);
int _wasgo_AudioStreamSample_wrapper_is_stereo(WasGoID wasgo_id);
WasGoID _wasgo_AudioStreamSample_wrapper_save_to_wav(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
void _wasgo_AudioStreamSample_wrapper_set_data(WasGoID wasgo_id, WasGoID p_data);
void _wasgo_AudioStreamSample_wrapper_set_format(WasGoID wasgo_id, WasGoID p_format);
void _wasgo_AudioStreamSample_wrapper_set_loop_begin(WasGoID wasgo_id, int p_loop_begin);
void _wasgo_AudioStreamSample_wrapper_set_loop_end(WasGoID wasgo_id, int p_loop_end);
void _wasgo_AudioStreamSample_wrapper_set_loop_mode(WasGoID wasgo_id, WasGoID p_loop_mode);
void _wasgo_AudioStreamSample_wrapper_set_mix_rate(WasGoID wasgo_id, int p_mix_rate);
void _wasgo_AudioStreamSample_wrapper_set_stereo(WasGoID wasgo_id, bool p_stereo);

    //constructor wrappers
    WasGoID _wasgo_AudioStreamSample_constructor();
            
}
#endif