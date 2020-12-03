/* THIS FILE IS GENERATED */
#ifndef VIDEOPLAYER_H
#define VIDEOPLAYER_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "Control.h"
#include "Texture.h"
#include "VideoStream.h"
class VideoPlayer : public Control{
public:
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

protected:
VideoPlayer(WasGoId p_wasgo_id);
public:
VideoPlayer();
~VideoPlayer();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_VideoPlayer_wrapper_get_audio_track(WasGoId wasgo_id);
int _wasgo_VideoPlayer_wrapper_get_buffering_msec(WasGoId wasgo_id);
void _wasgo_VideoPlayer_wrapper_get_bus(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_VideoPlayer_wrapper_get_stream(WasGoId wasgo_id);
void _wasgo_VideoPlayer_wrapper_get_stream_name(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_VideoPlayer_wrapper_get_stream_position(WasGoId wasgo_id);
WasGoId _wasgo_VideoPlayer_wrapper_get_video_texture(WasGoId wasgo_id);
float _wasgo_VideoPlayer_wrapper_get_volume(WasGoId wasgo_id);
float _wasgo_VideoPlayer_wrapper_get_volume_db(WasGoId wasgo_id);
int _wasgo_VideoPlayer_wrapper_has_autoplay(WasGoId wasgo_id);
int _wasgo_VideoPlayer_wrapper_has_expand(WasGoId wasgo_id);
int _wasgo_VideoPlayer_wrapper_is_paused(WasGoId wasgo_id);
int _wasgo_VideoPlayer_wrapper_is_playing(WasGoId wasgo_id);
void _wasgo_VideoPlayer_wrapper_play(WasGoId wasgo_id);
void _wasgo_VideoPlayer_wrapper_set_audio_track(WasGoId wasgo_id, int p_track);
void _wasgo_VideoPlayer_wrapper_set_autoplay(WasGoId wasgo_id, bool p_enabled);
void _wasgo_VideoPlayer_wrapper_set_buffering_msec(WasGoId wasgo_id, int p_msec);
void _wasgo_VideoPlayer_wrapper_set_bus(WasGoId wasgo_id, const uint8_t * p_bus, int p_bus_wasgo_buffer_size);
void _wasgo_VideoPlayer_wrapper_set_expand(WasGoId wasgo_id, bool p_enable);
void _wasgo_VideoPlayer_wrapper_set_paused(WasGoId wasgo_id, bool p_paused);
void _wasgo_VideoPlayer_wrapper_set_stream(WasGoId wasgo_id, WasGoId p_stream);
void _wasgo_VideoPlayer_wrapper_set_stream_position(WasGoId wasgo_id, float p_position);
void _wasgo_VideoPlayer_wrapper_set_volume(WasGoId wasgo_id, float p_volume);
void _wasgo_VideoPlayer_wrapper_set_volume_db(WasGoId wasgo_id, float p_db);
void _wasgo_VideoPlayer_wrapper_stop(WasGoId wasgo_id);

    //constructor and destructor wrappers
    WasGoId _wasgo_VideoPlayer_constructor();
    void _wasgo_VideoPlayer_destructor(WasGoId p_wasgo_id);
            
}
#endif