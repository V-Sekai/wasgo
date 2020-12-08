/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VideoPlayer.h"
int VideoPlayer::get_audio_track(){
	return (int) _wasgo_VideoPlayer_wrapper_get_audio_track(wasgo_id);
}
int VideoPlayer::get_buffering_msec(){
	return (int) _wasgo_VideoPlayer_wrapper_get_buffering_msec(wasgo_id);
}
String VideoPlayer::get_bus(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_VideoPlayer_wrapper_get_bus(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
VideoStream VideoPlayer::get_stream(){
	return VideoStream(_wasgo_VideoPlayer_wrapper_get_stream(wasgo_id));
}
String VideoPlayer::get_stream_name(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_VideoPlayer_wrapper_get_stream_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
float VideoPlayer::get_stream_position(){
	return (float) _wasgo_VideoPlayer_wrapper_get_stream_position(wasgo_id);
}
Texture VideoPlayer::get_video_texture(){
	return Texture(_wasgo_VideoPlayer_wrapper_get_video_texture(wasgo_id));
}
float VideoPlayer::get_volume(){
	return (float) _wasgo_VideoPlayer_wrapper_get_volume(wasgo_id);
}
float VideoPlayer::get_volume_db(){
	return (float) _wasgo_VideoPlayer_wrapper_get_volume_db(wasgo_id);
}
bool VideoPlayer::has_autoplay(){
	return (bool) _wasgo_VideoPlayer_wrapper_has_autoplay(wasgo_id);
}
bool VideoPlayer::has_expand(){
	return (bool) _wasgo_VideoPlayer_wrapper_has_expand(wasgo_id);
}
bool VideoPlayer::is_paused(){
	return (bool) _wasgo_VideoPlayer_wrapper_is_paused(wasgo_id);
}
bool VideoPlayer::is_playing(){
	return (bool) _wasgo_VideoPlayer_wrapper_is_playing(wasgo_id);
}
void VideoPlayer::play(){
	_wasgo_VideoPlayer_wrapper_play(wasgo_id);
}
void VideoPlayer::set_audio_track(int p_track){
	_wasgo_VideoPlayer_wrapper_set_audio_track(wasgo_id, p_track);
}
void VideoPlayer::set_autoplay(bool p_enabled){
	_wasgo_VideoPlayer_wrapper_set_autoplay(wasgo_id, p_enabled);
}
void VideoPlayer::set_buffering_msec(int p_msec){
	_wasgo_VideoPlayer_wrapper_set_buffering_msec(wasgo_id, p_msec);
}
void VideoPlayer::set_bus(String p_bus){

    Variant wasgo_var_bus = p_bus;
    int wasgo_size_bus = String(p_bus).size();
    uint8_t wasgo_buffer_bus[wasgo_size_bus];
    encode_variant(wasgo_var_bus, wasgo_buffer_bus, wasgo_size_bus);
    
	_wasgo_VideoPlayer_wrapper_set_bus(wasgo_id, wasgo_buffer_bus, wasgo_size_bus);
}
void VideoPlayer::set_expand(bool p_enable){
	_wasgo_VideoPlayer_wrapper_set_expand(wasgo_id, p_enable);
}
void VideoPlayer::set_paused(bool p_paused){
	_wasgo_VideoPlayer_wrapper_set_paused(wasgo_id, p_paused);
}
void VideoPlayer::set_stream(VideoStream p_stream){
	_wasgo_VideoPlayer_wrapper_set_stream(wasgo_id, p_stream._get_wasgo_id());
}
void VideoPlayer::set_stream_position(float p_position){
	_wasgo_VideoPlayer_wrapper_set_stream_position(wasgo_id, p_position);
}
void VideoPlayer::set_volume(float p_volume){
	_wasgo_VideoPlayer_wrapper_set_volume(wasgo_id, p_volume);
}
void VideoPlayer::set_volume_db(float p_db){
	_wasgo_VideoPlayer_wrapper_set_volume_db(wasgo_id, p_db);
}
void VideoPlayer::stop(){
	_wasgo_VideoPlayer_wrapper_stop(wasgo_id);
}

VideoPlayer::VideoPlayer(WasGoID p_wasgo_id) : Control(p_wasgo_id){
}
VideoPlayer::VideoPlayer(Control other) : Control(other._get_wasgo_id()){
}
VideoPlayer::VideoPlayer():Control(){
}
VideoPlayer VideoPlayer::new_instance(){
    return VideoPlayer(_wasgo_VideoPlayer_constructor());
}
WasGoID VideoPlayer::_get_wasgo_id(){
    return wasgo_id;
}
VideoPlayer::operator bool(){
    return (bool) wasgo_id;
}
