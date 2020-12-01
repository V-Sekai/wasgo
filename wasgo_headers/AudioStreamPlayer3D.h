/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMPLAYER3D_H
#define AUDIOSTREAMPLAYER3D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "ustring.h"
#include "Spatial.h"
#include "AudioStream.h"
class AudioStreamPlayer3D : public Spatial{
public:
enum AttenuationModel{
ATTENUATION_INVERSE_DISTANCE,
ATTENUATION_INVERSE_SQUARE_DISTANCE,
ATTENUATION_LOGARITHMIC,
ATTENUATION_DISABLED
};
enum DopplerTracking{
DOPPLER_TRACKING_DISABLED,
DOPPLER_TRACKING_IDLE_STEP,
DOPPLER_TRACKING_PHYSICS_STEP
};
enum OutOfRangeMode{
OUT_OF_RANGE_MIX,
OUT_OF_RANGE_PAUSE
};
String get_bus();
float get_max_db();
float get_pitch_scale();
float get_playback_position();
AudioStream get_stream();
float get_unit_db();
float get_unit_size();
bool is_autoplay_enabled();
bool is_playing();
void play(float p_from_position = (float) 0);
void seek(float p_to_position);
void set_autoplay(bool p_enable);
void set_bus(String p_bus);
void set_max_db(float p_max_db);
void set_pitch_scale(float p_pitch_scale);
void set_stream(AudioStream p_stream);
void set_unit_db(float p_unit_db);
void set_unit_size(float p_unit_size);
void stop();

AudioStreamPlayer3D(WasGoId p_wasgo_id);
~AudioStreamPlayer3D();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_AudioStreamPlayer3D_wrapper_get_bus(WasGoId wasgo_id);
float _wasgo_AudioStreamPlayer3D_wrapper_get_max_db(WasGoId wasgo_id);
float _wasgo_AudioStreamPlayer3D_wrapper_get_pitch_scale(WasGoId wasgo_id);
float _wasgo_AudioStreamPlayer3D_wrapper_get_playback_position(WasGoId wasgo_id);
WasGoId _wasgo_AudioStreamPlayer3D_wrapper_get_stream(WasGoId wasgo_id);
float _wasgo_AudioStreamPlayer3D_wrapper_get_unit_db(WasGoId wasgo_id);
float _wasgo_AudioStreamPlayer3D_wrapper_get_unit_size(WasGoId wasgo_id);
int _wasgo_AudioStreamPlayer3D_wrapper_is_autoplay_enabled(WasGoId wasgo_id);
int _wasgo_AudioStreamPlayer3D_wrapper_is_playing(WasGoId wasgo_id);
void _wasgo_AudioStreamPlayer3D_wrapper_play(WasGoId wasgo_id, float p_from_position);
void _wasgo_AudioStreamPlayer3D_wrapper_seek(WasGoId wasgo_id, float p_to_position);
void _wasgo_AudioStreamPlayer3D_wrapper_set_autoplay(WasGoId wasgo_id, bool p_enable);
void _wasgo_AudioStreamPlayer3D_wrapper_set_bus(WasGoId wasgo_id, WasGoId p_bus);
void _wasgo_AudioStreamPlayer3D_wrapper_set_max_db(WasGoId wasgo_id, float p_max_db);
void _wasgo_AudioStreamPlayer3D_wrapper_set_pitch_scale(WasGoId wasgo_id, float p_pitch_scale);
void _wasgo_AudioStreamPlayer3D_wrapper_set_stream(WasGoId wasgo_id, WasGoId p_stream);
void _wasgo_AudioStreamPlayer3D_wrapper_set_unit_db(WasGoId wasgo_id, float p_unit_db);
void _wasgo_AudioStreamPlayer3D_wrapper_set_unit_size(WasGoId wasgo_id, float p_unit_size);
void _wasgo_AudioStreamPlayer3D_wrapper_stop(WasGoId wasgo_id);
}
#endif