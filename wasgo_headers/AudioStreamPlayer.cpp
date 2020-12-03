/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioStreamPlayer.h"
String AudioStreamPlayer::get_bus(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AudioStreamPlayer_wrapper_get_bus(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
AudioStreamPlayer::MixTarget AudioStreamPlayer::get_mix_target(){
	return AudioStreamPlayer::MixTarget(_wasgo_AudioStreamPlayer_wrapper_get_mix_target(wasgo_id));
}
float AudioStreamPlayer::get_pitch_scale(){
	return (float) _wasgo_AudioStreamPlayer_wrapper_get_pitch_scale(wasgo_id);
}
float AudioStreamPlayer::get_playback_position(){
	return (float) _wasgo_AudioStreamPlayer_wrapper_get_playback_position(wasgo_id);
}
AudioStream AudioStreamPlayer::get_stream(){
	return AudioStream(_wasgo_AudioStreamPlayer_wrapper_get_stream(wasgo_id));
}
bool AudioStreamPlayer::get_stream_paused(){
	return (bool) _wasgo_AudioStreamPlayer_wrapper_get_stream_paused(wasgo_id);
}
AudioStreamPlayback AudioStreamPlayer::get_stream_playback(){
	return AudioStreamPlayback(_wasgo_AudioStreamPlayer_wrapper_get_stream_playback(wasgo_id));
}
float AudioStreamPlayer::get_volume_db(){
	return (float) _wasgo_AudioStreamPlayer_wrapper_get_volume_db(wasgo_id);
}
bool AudioStreamPlayer::is_autoplay_enabled(){
	return (bool) _wasgo_AudioStreamPlayer_wrapper_is_autoplay_enabled(wasgo_id);
}
bool AudioStreamPlayer::is_playing(){
	return (bool) _wasgo_AudioStreamPlayer_wrapper_is_playing(wasgo_id);
}
void AudioStreamPlayer::play(float p_from_position = (float) 0){
	_wasgo_AudioStreamPlayer_wrapper_play(wasgo_id, p_from_position);
}
void AudioStreamPlayer::seek(float p_to_position){
	_wasgo_AudioStreamPlayer_wrapper_seek(wasgo_id, p_to_position);
}
void AudioStreamPlayer::set_autoplay(bool p_enable){
	_wasgo_AudioStreamPlayer_wrapper_set_autoplay(wasgo_id, p_enable);
}
void AudioStreamPlayer::set_bus(String p_bus){

    Variant wasgo_var_bus = p_bus;
    uint8_t wasgo_buffer_bus[256];
    int wasgo_size_bus = 256;
    encode_variant(wasgo_var_bus, wasgo_buffer_bus, wasgo_size_bus);
    
	_wasgo_AudioStreamPlayer_wrapper_set_bus(wasgo_id, wasgo_buffer_bus, wasgo_size_bus);
}
void AudioStreamPlayer::set_mix_target(AudioStreamPlayer::MixTarget p_mix_target){
	_wasgo_AudioStreamPlayer_wrapper_set_mix_target(wasgo_id, p_mix_target._get_wasgo_id());
}
void AudioStreamPlayer::set_pitch_scale(float p_pitch_scale){
	_wasgo_AudioStreamPlayer_wrapper_set_pitch_scale(wasgo_id, p_pitch_scale);
}
void AudioStreamPlayer::set_stream(AudioStream p_stream){
	_wasgo_AudioStreamPlayer_wrapper_set_stream(wasgo_id, p_stream._get_wasgo_id());
}
void AudioStreamPlayer::set_stream_paused(bool p_pause){
	_wasgo_AudioStreamPlayer_wrapper_set_stream_paused(wasgo_id, p_pause);
}
void AudioStreamPlayer::set_volume_db(float p_volume_db){
	_wasgo_AudioStreamPlayer_wrapper_set_volume_db(wasgo_id, p_volume_db);
}
void AudioStreamPlayer::stop(){
	_wasgo_AudioStreamPlayer_wrapper_stop(wasgo_id);
}

AudioStreamPlayer::AudioStreamPlayer(WasGoId p_wasgo_id) : Node(p_wasgo_id){
}
AudioStreamPlayer::AudioStreamPlayer(){
    wasgo_id = _wasgo_AudioStreamPlayer_constructor();
}
AudioStreamPlayer::~AudioStreamPlayer(){
    _wasgo_AudioStreamPlayer_destructor(wasgo_id);
}