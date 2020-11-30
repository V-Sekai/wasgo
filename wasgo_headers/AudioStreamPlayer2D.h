/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMPLAYER2D_H
#define AUDIOSTREAMPLAYER2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Node2D.h"
#include "AudioStream.h"
class AudioStreamPlayer2D : public Node2D{
String get_bus();
float get_pitch_scale();
float get_playback_position();
AudioStream get_stream();
float get_volume_db();
bool is_autoplay_enabled();
bool is_playing();
void play(float p_from_position = (float) 0);
void seek(float p_to_position);
void set_autoplay(bool p_enable);
void set_bus(String p_bus);
void set_pitch_scale(float p_pitch_scale);
void set_stream(AudioStream p_stream);
void set_volume_db(float p_volume_db);
void stop();

AudioStreamPlayer2D(WasGoId p_wasgo_id);
~AudioStreamPlayer2D();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_AudioStreamPlayer2D_wrapper_get_bus(WasGoId wasgo_id);
float _wasgo_AudioStreamPlayer2D_wrapper_get_pitch_scale(WasGoId wasgo_id);
float _wasgo_AudioStreamPlayer2D_wrapper_get_playback_position(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_AudioStreamPlayer2D_wrapper_get_stream(WasGoId wasgo_id);
float _wasgo_AudioStreamPlayer2D_wrapper_get_volume_db(WasGoId wasgo_id);
int _wasgo_AudioStreamPlayer2D_wrapper_is_autoplay_enabled(WasGoId wasgo_id);
int _wasgo_AudioStreamPlayer2D_wrapper_is_playing(WasGoId wasgo_id);
void _wasgo_AudioStreamPlayer2D_wrapper_play(WasGoId wasgo_id, float p_from_position);
void _wasgo_AudioStreamPlayer2D_wrapper_seek(WasGoId wasgo_id, float p_to_position);
void _wasgo_AudioStreamPlayer2D_wrapper_set_autoplay(WasGoId wasgo_id, bool p_enable);
void _wasgo_AudioStreamPlayer2D_wrapper_set_bus(WasGoId wasgo_id, WasGo::WasGoId p_bus);
void _wasgo_AudioStreamPlayer2D_wrapper_set_pitch_scale(WasGoId wasgo_id, float p_pitch_scale);
void _wasgo_AudioStreamPlayer2D_wrapper_set_stream(WasGoId wasgo_id, WasGo::WasGoId p_stream);
void _wasgo_AudioStreamPlayer2D_wrapper_set_volume_db(WasGoId wasgo_id, float p_volume_db);
void _wasgo_AudioStreamPlayer2D_wrapper_stop(WasGoId wasgo_id);
}
#endif