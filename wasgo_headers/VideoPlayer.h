/* THIS FILE IS GENERATED */
#ifndef VIDEOPLAYER_H
#define VIDEOPLAYER_H

#include "stdint.h"

#include "Variant.h"
#include "Texture.h"
#include "VideoStream.h"
#include "Control.h"
class VideoPlayer : public Control{
public: VideoPlayer();
int get_audio_track();
int get_buffering_msec();
String get_bus();
VideoStream get_stream();
String get_stream_name();
float get_stream_position();
Texture get_video_texture();
float get_volume();
float get_volume_db();
bool has_autoplay();
bool has_expand();
bool is_paused();
bool is_playing();
void play();
void set_audio_track(int p_track);
void set_autoplay(bool p_enabled);
void set_buffering_msec(int p_msec);
void set_bus(String p_bus);
void set_expand(bool p_enable);
void set_paused(bool p_paused);
void set_stream(VideoStream p_stream);
void set_stream_position(float p_position);
void set_volume(float p_volume);
void set_volume_db(float p_db);
void stop();
};
#endif