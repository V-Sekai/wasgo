/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMPLAYER_H
#define AUDIOSTREAMPLAYER_H

#include "wasgo\wasgo.h"

#include "AudioStreamPlayback.h"
#include "Node.h"
#include "AudioStream.h"
#include "ustring.h"
class AudioStreamPlayer : public Node{
public:
enum MixTarget{
MIX_TARGET_STEREO,
MIX_TARGET_SURROUND,
MIX_TARGET_CENTER
};
String get_bus();
AudioStreamPlayer::MixTarget get_mix_target();
float get_pitch_scale();
float get_playback_position();
AudioStream get_stream();
bool get_stream_paused();
AudioStreamPlayback get_stream_playback();
float get_volume_db();
bool is_autoplay_enabled();
bool is_playing();
void play(float p_from_position = (float) 0);
void seek(float p_to_position);
void set_autoplay(bool p_enable);
void set_bus(String p_bus);
void set_mix_target(AudioStreamPlayer::MixTarget p_mix_target);
void set_pitch_scale(float p_pitch_scale);
void set_stream(AudioStream p_stream);
void set_stream_paused(bool p_pause);
void set_volume_db(float p_volume_db);
void stop();

protected:
public:
explicit AudioStreamPlayer(WasGoID p_wasgo_id);
explicit AudioStreamPlayer(Node other);
AudioStreamPlayer new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_AudioStreamPlayer_wrapper_get_bus(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_AudioStreamPlayer_wrapper_get_mix_target(WasGoID wasgo_id);
float _wasgo_AudioStreamPlayer_wrapper_get_pitch_scale(WasGoID wasgo_id);
float _wasgo_AudioStreamPlayer_wrapper_get_playback_position(WasGoID wasgo_id);
WasGoID _wasgo_AudioStreamPlayer_wrapper_get_stream(WasGoID wasgo_id);
int _wasgo_AudioStreamPlayer_wrapper_get_stream_paused(WasGoID wasgo_id);
WasGoID _wasgo_AudioStreamPlayer_wrapper_get_stream_playback(WasGoID wasgo_id);
float _wasgo_AudioStreamPlayer_wrapper_get_volume_db(WasGoID wasgo_id);
int _wasgo_AudioStreamPlayer_wrapper_is_autoplay_enabled(WasGoID wasgo_id);
int _wasgo_AudioStreamPlayer_wrapper_is_playing(WasGoID wasgo_id);
void _wasgo_AudioStreamPlayer_wrapper_play(WasGoID wasgo_id, float p_from_position);
void _wasgo_AudioStreamPlayer_wrapper_seek(WasGoID wasgo_id, float p_to_position);
void _wasgo_AudioStreamPlayer_wrapper_set_autoplay(WasGoID wasgo_id, bool p_enable);
void _wasgo_AudioStreamPlayer_wrapper_set_bus(WasGoID wasgo_id, const uint8_t * p_bus, int p_bus_wasgo_buffer_size);
void _wasgo_AudioStreamPlayer_wrapper_set_mix_target(WasGoID wasgo_id, WasGoID p_mix_target);
void _wasgo_AudioStreamPlayer_wrapper_set_pitch_scale(WasGoID wasgo_id, float p_pitch_scale);
void _wasgo_AudioStreamPlayer_wrapper_set_stream(WasGoID wasgo_id, WasGoID p_stream);
void _wasgo_AudioStreamPlayer_wrapper_set_stream_paused(WasGoID wasgo_id, bool p_pause);
void _wasgo_AudioStreamPlayer_wrapper_set_volume_db(WasGoID wasgo_id, float p_volume_db);
void _wasgo_AudioStreamPlayer_wrapper_stop(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_AudioStreamPlayer_constructor();
            
}
#endif