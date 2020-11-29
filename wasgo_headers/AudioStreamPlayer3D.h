/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMPLAYER3D_H
#define AUDIOSTREAMPLAYER3D_H

#include "stdint.h"

#include "Variant.h"
#include "Spatial.h"
#include "AudioStream.h"
class AudioStreamPlayer3D : public Spatial{
public: AudioStreamPlayer3D();
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
};
#endif