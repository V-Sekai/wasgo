/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMPLAYER2D_H
#define AUDIOSTREAMPLAYER2D_H

#include "wasgo\wasgoid.h"

#include "AudioStream.h"
#include "Ustring.h"
#include "AudioStreamPlayback.h"
#include "Node2D.h"
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
public:
explicit AudioStreamPlayer2D(WasGoID p_wasgo_id);
explicit AudioStreamPlayer2D(Node2D other);
AudioStreamPlayer2D();
AudioStreamPlayer2D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_AudioStreamPlayer2D_wrapper_get_area_mask(WasGoID wasgo_id);
float _wasgo_AudioStreamPlayer2D_wrapper_get_attenuation(WasGoID wasgo_id);
void _wasgo_AudioStreamPlayer2D_wrapper_get_bus(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_AudioStreamPlayer2D_wrapper_get_max_distance(WasGoID wasgo_id);
float _wasgo_AudioStreamPlayer2D_wrapper_get_pitch_scale(WasGoID wasgo_id);
float _wasgo_AudioStreamPlayer2D_wrapper_get_playback_position(WasGoID wasgo_id);
WasGoID _wasgo_AudioStreamPlayer2D_wrapper_get_stream(WasGoID wasgo_id);
int _wasgo_AudioStreamPlayer2D_wrapper_get_stream_paused(WasGoID wasgo_id);
WasGoID _wasgo_AudioStreamPlayer2D_wrapper_get_stream_playback(WasGoID wasgo_id);
float _wasgo_AudioStreamPlayer2D_wrapper_get_volume_db(WasGoID wasgo_id);
int _wasgo_AudioStreamPlayer2D_wrapper_is_autoplay_enabled(WasGoID wasgo_id);
int _wasgo_AudioStreamPlayer2D_wrapper_is_playing(WasGoID wasgo_id);
void _wasgo_AudioStreamPlayer2D_wrapper_play(WasGoID wasgo_id, float p_from_position);
void _wasgo_AudioStreamPlayer2D_wrapper_seek(WasGoID wasgo_id, float p_to_position);
void _wasgo_AudioStreamPlayer2D_wrapper_set_area_mask(WasGoID wasgo_id, int p_mask);
void _wasgo_AudioStreamPlayer2D_wrapper_set_attenuation(WasGoID wasgo_id, float p_curve);
void _wasgo_AudioStreamPlayer2D_wrapper_set_autoplay(WasGoID wasgo_id, bool p_enable);
void _wasgo_AudioStreamPlayer2D_wrapper_set_bus(WasGoID wasgo_id, const uint8_t * p_bus, int p_bus_wasgo_buffer_size);
void _wasgo_AudioStreamPlayer2D_wrapper_set_max_distance(WasGoID wasgo_id, float p_pixels);
void _wasgo_AudioStreamPlayer2D_wrapper_set_pitch_scale(WasGoID wasgo_id, float p_pitch_scale);
void _wasgo_AudioStreamPlayer2D_wrapper_set_stream(WasGoID wasgo_id, WasGoID p_stream);
void _wasgo_AudioStreamPlayer2D_wrapper_set_stream_paused(WasGoID wasgo_id, bool p_pause);
void _wasgo_AudioStreamPlayer2D_wrapper_set_volume_db(WasGoID wasgo_id, float p_volume_db);
void _wasgo_AudioStreamPlayer2D_wrapper_stop(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_AudioStreamPlayer2D_constructor();
            
}
#endif