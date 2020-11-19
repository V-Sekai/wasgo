/* THIS FILE IS GENERATED */
#ifndef VIDEOPLAYER_H
#define VIDEOPLAYER_H

#include <stdint.h>

#include "Texture.h"
#include "String.h"
#include "VideoStream.h"
#include "Control.h"
class VideoPlayer : public Control{
public: VideoPlayer();
int  get_audio_track();
int  get_audio_track();
int  get_buffering_msec();
int  get_buffering_msec();
String  get_bus();
String  get_bus();
VideoStream  get_stream();
VideoStream  get_stream();
String  get_stream_name();
String  get_stream_name();
float  get_stream_position();
float  get_stream_position();
Texture  get_video_texture();
Texture  get_video_texture();
float  get_volume();
float  get_volume();
float  get_volume_db();
float  get_volume_db();
bool  has_autoplay();
bool  has_autoplay();
bool  has_expand();
bool  has_expand();
bool  is_paused();
bool  is_paused();
bool  is_playing();
bool  is_playing();
void  play();
void  play();
void  set_audio_track(int track);
void  set_autoplay(bool enabled);
void  set_buffering_msec(int msec);
void  set_bus(String bus);
void  set_expand(bool enable);
void  set_paused(bool paused);
void  set_stream(VideoStream stream);
void  set_stream_position(float position);
void  set_volume(float volume);
void  set_volume_db(float db);
void  stop();
void  stop();
};
#endif