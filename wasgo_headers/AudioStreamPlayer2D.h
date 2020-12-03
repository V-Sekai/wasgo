/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMPLAYER2D_H
#define AUDIOSTREAMPLAYER2D_H

#include "wasgo\wasgo.h"

#include "AudioStreamPlayback.h"
#include "Node2D.h"
#include "ustring.h"
#include "AudioStream.h"
class AudioStreamPlayer2D : public Node2D{
public:
int get_area_mask();
float get_attenuation();
String get_bus();
float get_max_distance();
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
void set_area_mask(int p_mask);
void set_attenuation(float p_curve);
void set_autoplay(bool p_enable);
void set_bus(String p_bus);
void set_max_distance(float p_pixels);
void set_pitch_scale(float p_pitch_scale);
void set_stream(AudioStream p_stream);
void set_stream_paused(bool p_pause);
void set_volume_db(float p_volume_db);
void stop();

protected:
AudioStreamPlayer2D(WasGoId p_wasgo_id);
public:
AudioStreamPlayer2D();
~AudioStreamPlayer2D();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_AudioStreamPlayer2D_wrapper_get_area_mask(WasGoId wasgo_id);
float _wasgo_AudioStreamPlayer2D_wrapper_get_attenuation(WasGoId wasgo_id);
void _wasgo_AudioStreamPlayer2D_wrapper_get_bus(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_AudioStreamPlayer2D_wrapper_get_max_distance(WasGoId wasgo_id);
float _wasgo_AudioStreamPlayer2D_wrapper_get_pitch_scale(WasGoId wasgo_id);
float _wasgo_AudioStreamPlayer2D_wrapper_get_playback_position(WasGoId wasgo_id);
WasGoId _wasgo_AudioStreamPlayer2D_wrapper_get_stream(WasGoId wasgo_id);
int _wasgo_AudioStreamPlayer2D_wrapper_get_stream_paused(WasGoId wasgo_id);
WasGoId _wasgo_AudioStreamPlayer2D_wrapper_get_stream_playback(WasGoId wasgo_id);
float _wasgo_AudioStreamPlayer2D_wrapper_get_volume_db(WasGoId wasgo_id);
int _wasgo_AudioStreamPlayer2D_wrapper_is_autoplay_enabled(WasGoId wasgo_id);
int _wasgo_AudioStreamPlayer2D_wrapper_is_playing(WasGoId wasgo_id);
void _wasgo_AudioStreamPlayer2D_wrapper_play(WasGoId wasgo_id, float p_from_position);
void _wasgo_AudioStreamPlayer2D_wrapper_seek(WasGoId wasgo_id, float p_to_position);
void _wasgo_AudioStreamPlayer2D_wrapper_set_area_mask(WasGoId wasgo_id, int p_mask);
void _wasgo_AudioStreamPlayer2D_wrapper_set_attenuation(WasGoId wasgo_id, float p_curve);
void _wasgo_AudioStreamPlayer2D_wrapper_set_autoplay(WasGoId wasgo_id, bool p_enable);
void _wasgo_AudioStreamPlayer2D_wrapper_set_bus(WasGoId wasgo_id, const uint8_t * p_bus, int p_bus_wasgo_buffer_size);
void _wasgo_AudioStreamPlayer2D_wrapper_set_max_distance(WasGoId wasgo_id, float p_pixels);
void _wasgo_AudioStreamPlayer2D_wrapper_set_pitch_scale(WasGoId wasgo_id, float p_pitch_scale);
void _wasgo_AudioStreamPlayer2D_wrapper_set_stream(WasGoId wasgo_id, WasGoId p_stream);
void _wasgo_AudioStreamPlayer2D_wrapper_set_stream_paused(WasGoId wasgo_id, bool p_pause);
void _wasgo_AudioStreamPlayer2D_wrapper_set_volume_db(WasGoId wasgo_id, float p_volume_db);
void _wasgo_AudioStreamPlayer2D_wrapper_stop(WasGoId wasgo_id);

    //constructor and destructor wrappers
    WasGoId _wasgo_AudioStreamPlayer2D_constructor();
    void _wasgo_AudioStreamPlayer2D_destructor(WasGoId p_wasgo_id);
            
}
#endif