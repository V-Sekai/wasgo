/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMPLAYER3D_H
#define AUDIOSTREAMPLAYER3D_H

#include "wasgo\wasgoid.h"

#include "AudioStream.h"
#include "Ustring.h"
#include "Spatial.h"
#include "AudioStreamPlayback.h"
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
int get_area_mask();
float get_attenuation_filter_cutoff_hz();
float get_attenuation_filter_db();
AudioStreamPlayer3D::AttenuationModel get_attenuation_model();
String get_bus();
AudioStreamPlayer3D::DopplerTracking get_doppler_tracking();
float get_emission_angle();
float get_emission_angle_filter_attenuation_db();
float get_max_db();
float get_max_distance();
AudioStreamPlayer3D::OutOfRangeMode get_out_of_range_mode();
float get_pitch_scale();
float get_playback_position();
AudioStream get_stream();
bool get_stream_paused();
AudioStreamPlayback get_stream_playback();
float get_unit_db();
float get_unit_size();
bool is_autoplay_enabled();
bool is_emission_angle_enabled();
bool is_playing();
void play(float p_from_position = (float) 0);
void seek(float p_to_position);
void set_area_mask(int p_mask);
void set_attenuation_filter_cutoff_hz(float p_degrees);
void set_attenuation_filter_db(float p_db);
void set_attenuation_model(AudioStreamPlayer3D::AttenuationModel p_model);
void set_autoplay(bool p_enable);
void set_bus(String p_bus);
void set_doppler_tracking(AudioStreamPlayer3D::DopplerTracking p_mode);
void set_emission_angle(float p_degrees);
void set_emission_angle_enabled(bool p_enabled);
void set_emission_angle_filter_attenuation_db(float p_db);
void set_max_db(float p_max_db);
void set_max_distance(float p_metres);
void set_out_of_range_mode(AudioStreamPlayer3D::OutOfRangeMode p_mode);
void set_pitch_scale(float p_pitch_scale);
void set_stream(AudioStream p_stream);
void set_stream_paused(bool p_pause);
void set_unit_db(float p_unit_db);
void set_unit_size(float p_unit_size);
void stop();

protected:
public:
explicit AudioStreamPlayer3D(WasGoID p_wasgo_id);
explicit AudioStreamPlayer3D(Spatial other);
AudioStreamPlayer3D();
AudioStreamPlayer3D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_AudioStreamPlayer3D_wrapper_get_area_mask(WasGoID wasgo_id);
float _wasgo_AudioStreamPlayer3D_wrapper_get_attenuation_filter_cutoff_hz(WasGoID wasgo_id);
float _wasgo_AudioStreamPlayer3D_wrapper_get_attenuation_filter_db(WasGoID wasgo_id);
WasGoID _wasgo_AudioStreamPlayer3D_wrapper_get_attenuation_model(WasGoID wasgo_id);
void _wasgo_AudioStreamPlayer3D_wrapper_get_bus(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_AudioStreamPlayer3D_wrapper_get_doppler_tracking(WasGoID wasgo_id);
float _wasgo_AudioStreamPlayer3D_wrapper_get_emission_angle(WasGoID wasgo_id);
float _wasgo_AudioStreamPlayer3D_wrapper_get_emission_angle_filter_attenuation_db(WasGoID wasgo_id);
float _wasgo_AudioStreamPlayer3D_wrapper_get_max_db(WasGoID wasgo_id);
float _wasgo_AudioStreamPlayer3D_wrapper_get_max_distance(WasGoID wasgo_id);
WasGoID _wasgo_AudioStreamPlayer3D_wrapper_get_out_of_range_mode(WasGoID wasgo_id);
float _wasgo_AudioStreamPlayer3D_wrapper_get_pitch_scale(WasGoID wasgo_id);
float _wasgo_AudioStreamPlayer3D_wrapper_get_playback_position(WasGoID wasgo_id);
WasGoID _wasgo_AudioStreamPlayer3D_wrapper_get_stream(WasGoID wasgo_id);
int _wasgo_AudioStreamPlayer3D_wrapper_get_stream_paused(WasGoID wasgo_id);
WasGoID _wasgo_AudioStreamPlayer3D_wrapper_get_stream_playback(WasGoID wasgo_id);
float _wasgo_AudioStreamPlayer3D_wrapper_get_unit_db(WasGoID wasgo_id);
float _wasgo_AudioStreamPlayer3D_wrapper_get_unit_size(WasGoID wasgo_id);
int _wasgo_AudioStreamPlayer3D_wrapper_is_autoplay_enabled(WasGoID wasgo_id);
int _wasgo_AudioStreamPlayer3D_wrapper_is_emission_angle_enabled(WasGoID wasgo_id);
int _wasgo_AudioStreamPlayer3D_wrapper_is_playing(WasGoID wasgo_id);
void _wasgo_AudioStreamPlayer3D_wrapper_play(WasGoID wasgo_id, float p_from_position);
void _wasgo_AudioStreamPlayer3D_wrapper_seek(WasGoID wasgo_id, float p_to_position);
void _wasgo_AudioStreamPlayer3D_wrapper_set_area_mask(WasGoID wasgo_id, int p_mask);
void _wasgo_AudioStreamPlayer3D_wrapper_set_attenuation_filter_cutoff_hz(WasGoID wasgo_id, float p_degrees);
void _wasgo_AudioStreamPlayer3D_wrapper_set_attenuation_filter_db(WasGoID wasgo_id, float p_db);
void _wasgo_AudioStreamPlayer3D_wrapper_set_attenuation_model(WasGoID wasgo_id, WasGoID p_model);
void _wasgo_AudioStreamPlayer3D_wrapper_set_autoplay(WasGoID wasgo_id, bool p_enable);
void _wasgo_AudioStreamPlayer3D_wrapper_set_bus(WasGoID wasgo_id, const uint8_t * p_bus, int p_bus_wasgo_buffer_size);
void _wasgo_AudioStreamPlayer3D_wrapper_set_doppler_tracking(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_AudioStreamPlayer3D_wrapper_set_emission_angle(WasGoID wasgo_id, float p_degrees);
void _wasgo_AudioStreamPlayer3D_wrapper_set_emission_angle_enabled(WasGoID wasgo_id, bool p_enabled);
void _wasgo_AudioStreamPlayer3D_wrapper_set_emission_angle_filter_attenuation_db(WasGoID wasgo_id, float p_db);
void _wasgo_AudioStreamPlayer3D_wrapper_set_max_db(WasGoID wasgo_id, float p_max_db);
void _wasgo_AudioStreamPlayer3D_wrapper_set_max_distance(WasGoID wasgo_id, float p_metres);
void _wasgo_AudioStreamPlayer3D_wrapper_set_out_of_range_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_AudioStreamPlayer3D_wrapper_set_pitch_scale(WasGoID wasgo_id, float p_pitch_scale);
void _wasgo_AudioStreamPlayer3D_wrapper_set_stream(WasGoID wasgo_id, WasGoID p_stream);
void _wasgo_AudioStreamPlayer3D_wrapper_set_stream_paused(WasGoID wasgo_id, bool p_pause);
void _wasgo_AudioStreamPlayer3D_wrapper_set_unit_db(WasGoID wasgo_id, float p_unit_db);
void _wasgo_AudioStreamPlayer3D_wrapper_set_unit_size(WasGoID wasgo_id, float p_unit_size);
void _wasgo_AudioStreamPlayer3D_wrapper_stop(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_AudioStreamPlayer3D_constructor();
            
}
#endif