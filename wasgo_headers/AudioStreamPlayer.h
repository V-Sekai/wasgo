/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMPLAYER_H
#define AUDIOSTREAMPLAYER_H

#include "stdint.h"

#include "Variant.h"
#include "Node.h"
#include "AudioStream.h"
class AudioStreamPlayer : public Node{
public: AudioStreamPlayer();
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
void set_volume_db(float p_volume_db);
void stop();
};
#endif