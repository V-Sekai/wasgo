/* THIS FILE IS GENERATED */
#include "VideoPlayer.h"
int VideoPlayer::get_audio_track(){
	return (int) _wasgo_VideoPlayer_wrapper_get_audio_track(wasgo_id));
}
int VideoPlayer::get_buffering_msec(){
	return (int) _wasgo_VideoPlayer_wrapper_get_buffering_msec(wasgo_id));
}
String VideoPlayer::get_bus(){
	return String::from_wasgo_id(_wasgo_VideoPlayer_wrapper_get_bus(wasgo_id));
}
VideoStream VideoPlayer::get_stream(){
	return VideoStream::from_wasgo_id(_wasgo_VideoPlayer_wrapper_get_stream(wasgo_id));
}
String VideoPlayer::get_stream_name(){
	return String::from_wasgo_id(_wasgo_VideoPlayer_wrapper_get_stream_name(wasgo_id));
}
float VideoPlayer::get_stream_position(){
	return (float) _wasgo_VideoPlayer_wrapper_get_stream_position(wasgo_id));
}
Texture VideoPlayer::get_video_texture(){
	return Texture::from_wasgo_id(_wasgo_VideoPlayer_wrapper_get_video_texture(wasgo_id));
}
float VideoPlayer::get_volume(){
	return (float) _wasgo_VideoPlayer_wrapper_get_volume(wasgo_id));
}
float VideoPlayer::get_volume_db(){
	return (float) _wasgo_VideoPlayer_wrapper_get_volume_db(wasgo_id));
}
bool VideoPlayer::has_autoplay(){
	return (bool) _wasgo_VideoPlayer_wrapper_has_autoplay(wasgo_id));
}
bool VideoPlayer::has_expand(){
	return (bool) _wasgo_VideoPlayer_wrapper_has_expand(wasgo_id));
}
bool VideoPlayer::is_paused(){
	return (bool) _wasgo_VideoPlayer_wrapper_is_paused(wasgo_id));
}
bool VideoPlayer::is_playing(){
	return (bool) _wasgo_VideoPlayer_wrapper_is_playing(wasgo_id));
}
void VideoPlayer::play(){
	_wasgo_VideoPlayer_wrapper_play(wasgo_id);
}
void VideoPlayer::set_audio_track(int p_track){
	_wasgo_VideoPlayer_wrapper_set_audio_track(wasgo_id, track);
}
void VideoPlayer::set_autoplay(bool p_enabled){
	_wasgo_VideoPlayer_wrapper_set_autoplay(wasgo_id, enabled);
}
void VideoPlayer::set_buffering_msec(int p_msec){
	_wasgo_VideoPlayer_wrapper_set_buffering_msec(wasgo_id, msec);
}
void VideoPlayer::set_bus(String p_bus){
	_wasgo_VideoPlayer_wrapper_set_bus(wasgo_id, ((Variant) bus).get_wasgo_id());
}
void VideoPlayer::set_expand(bool p_enable){
	_wasgo_VideoPlayer_wrapper_set_expand(wasgo_id, enable);
}
void VideoPlayer::set_paused(bool p_paused){
	_wasgo_VideoPlayer_wrapper_set_paused(wasgo_id, paused);
}
void VideoPlayer::set_stream(VideoStream p_stream){
	_wasgo_VideoPlayer_wrapper_set_stream(wasgo_id, ((Variant) stream).get_wasgo_id());
}
void VideoPlayer::set_stream_position(float p_position){
	_wasgo_VideoPlayer_wrapper_set_stream_position(wasgo_id, position);
}
void VideoPlayer::set_volume(float p_volume){
	_wasgo_VideoPlayer_wrapper_set_volume(wasgo_id, volume);
}
void VideoPlayer::set_volume_db(float p_db){
	_wasgo_VideoPlayer_wrapper_set_volume_db(wasgo_id, db);
}
void VideoPlayer::stop(){
	_wasgo_VideoPlayer_wrapper_stop(wasgo_id);
}

VideoPlayer::VideoPlayer(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
VideoPlayer::~VideoPlayer(){
}