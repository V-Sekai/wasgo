/* THIS FILE IS GENERATED */
#include "AudioStreamPlayer.h"
String AudioStreamPlayer::get_bus(){
	return String::from_wasgo_id(_wasgo_AudioStreamPlayer_wrapper_get_bus(wasgo_id));
}
AudioStreamPlayer::MixTarget AudioStreamPlayer::get_mix_target(){
	return AudioStreamPlayer::MixTarget::from_wasgo_id(_wasgo_AudioStreamPlayer_wrapper_get_mix_target(wasgo_id));
}
float AudioStreamPlayer::get_pitch_scale(){
	return (float) _wasgo_AudioStreamPlayer_wrapper_get_pitch_scale(wasgo_id));
}
float AudioStreamPlayer::get_playback_position(){
	return (float) _wasgo_AudioStreamPlayer_wrapper_get_playback_position(wasgo_id));
}
AudioStream AudioStreamPlayer::get_stream(){
	return AudioStream::from_wasgo_id(_wasgo_AudioStreamPlayer_wrapper_get_stream(wasgo_id));
}
float AudioStreamPlayer::get_volume_db(){
	return (float) _wasgo_AudioStreamPlayer_wrapper_get_volume_db(wasgo_id));
}
bool AudioStreamPlayer::is_autoplay_enabled(){
	return (bool) _wasgo_AudioStreamPlayer_wrapper_is_autoplay_enabled(wasgo_id));
}
bool AudioStreamPlayer::is_playing(){
	return (bool) _wasgo_AudioStreamPlayer_wrapper_is_playing(wasgo_id));
}
void AudioStreamPlayer::play(float p_from_position = (float) 0){
	_wasgo_AudioStreamPlayer_wrapper_play(wasgo_id, from_position);
}
void AudioStreamPlayer::seek(float p_to_position){
	_wasgo_AudioStreamPlayer_wrapper_seek(wasgo_id, to_position);
}
void AudioStreamPlayer::set_autoplay(bool p_enable){
	_wasgo_AudioStreamPlayer_wrapper_set_autoplay(wasgo_id, enable);
}
void AudioStreamPlayer::set_bus(String p_bus){
	_wasgo_AudioStreamPlayer_wrapper_set_bus(wasgo_id, ((Variant) bus).get_wasgo_id());
}
void AudioStreamPlayer::set_mix_target(AudioStreamPlayer::MixTarget p_mix_target){
	_wasgo_AudioStreamPlayer_wrapper_set_mix_target(wasgo_id, ((Variant) mix_target).get_wasgo_id());
}
void AudioStreamPlayer::set_pitch_scale(float p_pitch_scale){
	_wasgo_AudioStreamPlayer_wrapper_set_pitch_scale(wasgo_id, pitch_scale);
}
void AudioStreamPlayer::set_stream(AudioStream p_stream){
	_wasgo_AudioStreamPlayer_wrapper_set_stream(wasgo_id, ((Variant) stream).get_wasgo_id());
}
void AudioStreamPlayer::set_volume_db(float p_volume_db){
	_wasgo_AudioStreamPlayer_wrapper_set_volume_db(wasgo_id, volume_db);
}
void AudioStreamPlayer::stop(){
	_wasgo_AudioStreamPlayer_wrapper_stop(wasgo_id);
}

AudioStreamPlayer::AudioStreamPlayer(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
AudioStreamPlayer::~AudioStreamPlayer(){
}