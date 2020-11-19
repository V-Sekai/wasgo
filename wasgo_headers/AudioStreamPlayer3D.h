/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMPLAYER3D_H
#define AUDIOSTREAMPLAYER3D_H

#include <stdint.h>

#include "AudioStream.h"
#include "String.h"
#include "Spatial.h"
#include "AudioStreamPlayback.h"
class AudioStreamPlayer3D : public Spatial{
public: AudioStreamPlayer3D();
enum AttenuationModel{
ATTENUATION_INVERSE_DISTANCE: 0,
ATTENUATION_INVERSE_SQUARE_DISTANCE: 1,
ATTENUATION_LOGARITHMIC: 2,
};
enum OutOfRangeMode{
OUT_OF_RANGE_MIX: 0,
};
enum DopplerTracking{
DOPPLER_TRACKING_DISABLED: 0,
DOPPLER_TRACKING_IDLE_STEP: 1,
};
void  _bus_layout_changed();
void  _bus_layout_changed();
bool  _is_active();
bool  _is_active();
void  _set_playing(bool enable);
int  get_area_mask();
int  get_area_mask();
float  get_attenuation_filter_cutoff_hz();
float  get_attenuation_filter_cutoff_hz();
float  get_attenuation_filter_db();
float  get_attenuation_filter_db();
enum.AudioStreamPlayer3D::AttenuationModel  get_attenuation_model();
enum.AudioStreamPlayer3D::AttenuationModel  get_attenuation_model();
String  get_bus();
String  get_bus();
enum.AudioStreamPlayer3D::DopplerTracking  get_doppler_tracking();
enum.AudioStreamPlayer3D::DopplerTracking  get_doppler_tracking();
float  get_emission_angle();
float  get_emission_angle();
float  get_emission_angle_filter_attenuation_db();
float  get_emission_angle_filter_attenuation_db();
float  get_max_db();
float  get_max_db();
float  get_max_distance();
float  get_max_distance();
enum.AudioStreamPlayer3D::OutOfRangeMode  get_out_of_range_mode();
enum.AudioStreamPlayer3D::OutOfRangeMode  get_out_of_range_mode();
float  get_pitch_scale();
float  get_pitch_scale();
float  get_playback_position();
float  get_playback_position();
AudioStream  get_stream();
AudioStream  get_stream();
bool  get_stream_paused();
bool  get_stream_paused();
AudioStreamPlayback  get_stream_playback();
AudioStreamPlayback  get_stream_playback();
float  get_unit_db();
float  get_unit_db();
float  get_unit_size();
float  get_unit_size();
bool  is_autoplay_enabled();
bool  is_autoplay_enabled();
bool  is_emission_angle_enabled();
bool  is_emission_angle_enabled();
bool  is_playing();
bool  is_playing();
void  play(float from_position = 0);
void  seek(float to_position);
void  set_area_mask(int mask);
void  set_attenuation_filter_cutoff_hz(float degrees);
void  set_attenuation_filter_db(float db);
void  set_attenuation_model(int model);
void  set_autoplay(bool enable);
void  set_bus(String bus);
void  set_doppler_tracking(int mode);
void  set_emission_angle(float degrees);
void  set_emission_angle_enabled(bool enabled);
void  set_emission_angle_filter_attenuation_db(float db);
void  set_max_db(float max_db);
void  set_max_distance(float metres);
void  set_out_of_range_mode(int mode);
void  set_pitch_scale(float pitch_scale);
void  set_stream(AudioStream stream);
void  set_stream_paused(bool pause);
void  set_unit_db(float unit_db);
void  set_unit_size(float unit_size);
void  stop();
void  stop();
};
#endif