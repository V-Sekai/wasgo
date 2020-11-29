/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMPLAYER2D_H
#define AUDIOSTREAMPLAYER2D_H

#include "stdint.h"

#include "Node2D.h"
#include "Variant.h"
#include "AudioStream.h"
class AudioStreamPlayer2D : public Node2D{
public: AudioStreamPlayer2D();
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
};
#endif