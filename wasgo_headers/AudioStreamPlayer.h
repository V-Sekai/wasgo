/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMPLAYER_H
#define AUDIOSTREAMPLAYER_H

#include <stdint.h>

#include "AudioStreamPlayback.h"
#include "AudioStream.h"
#include "String.h"
#include "Node.h"
class AudioStreamPlayer : public Node{
public: AudioStreamPlayer();
enum MixTarget{
MIX_TARGET_STEREO: 0,
MIX_TARGET_SURROUND: 1,
};
void  _bus_layout_changed();
void  _bus_layout_changed();
bool  _is_active();
bool  _is_active();
void  _set_playing(bool enable);
String  get_bus();
String  get_bus();
enum.AudioStreamPlayer::MixTarget  get_mix_target();
enum.AudioStreamPlayer::MixTarget  get_mix_target();
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
float  get_volume_db();
float  get_volume_db();
bool  is_autoplay_enabled();
bool  is_autoplay_enabled();
bool  is_playing();
bool  is_playing();
void  play(float from_position = 0);
void  seek(float to_position);
void  set_autoplay(bool enable);
void  set_bus(String bus);
void  set_mix_target(int mix_target);
void  set_pitch_scale(float pitch_scale);
void  set_stream(AudioStream stream);
void  set_stream_paused(bool pause);
void  set_volume_db(float volume_db);
void  stop();
void  stop();
};
#endif