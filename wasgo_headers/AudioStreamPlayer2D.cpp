/* THIS FILE IS GENERATED */
#include "AudioStreamPlayer2D.h"
String AudioStreamPlayer2D::get_bus(){
	return String::from_wasgo_id(_wasgo_AudioStreamPlayer2D_wrapper_get_bus(wasgo_id));
}
float AudioStreamPlayer2D::get_pitch_scale(){
	return (float) _wasgo_AudioStreamPlayer2D_wrapper_get_pitch_scale(wasgo_id));
}
float AudioStreamPlayer2D::get_playback_position(){
	return (float) _wasgo_AudioStreamPlayer2D_wrapper_get_playback_position(wasgo_id));
}
AudioStream AudioStreamPlayer2D::get_stream(){
	return AudioStream::from_wasgo_id(_wasgo_AudioStreamPlayer2D_wrapper_get_stream(wasgo_id));
}
float AudioStreamPlayer2D::get_volume_db(){
	return (float) _wasgo_AudioStreamPlayer2D_wrapper_get_volume_db(wasgo_id));
}
bool AudioStreamPlayer2D::is_autoplay_enabled(){
	return (bool) _wasgo_AudioStreamPlayer2D_wrapper_is_autoplay_enabled(wasgo_id));
}
bool AudioStreamPlayer2D::is_playing(){
	return (bool) _wasgo_AudioStreamPlayer2D_wrapper_is_playing(wasgo_id));
}
void AudioStreamPlayer2D::play(float p_from_position = (float) 0){
	_wasgo_AudioStreamPlayer2D_wrapper_play(wasgo_id, from_position);
}
void AudioStreamPlayer2D::seek(float p_to_position){
	_wasgo_AudioStreamPlayer2D_wrapper_seek(wasgo_id, to_position);
}
void AudioStreamPlayer2D::set_autoplay(bool p_enable){
	_wasgo_AudioStreamPlayer2D_wrapper_set_autoplay(wasgo_id, enable);
}
void AudioStreamPlayer2D::set_bus(String p_bus){
	_wasgo_AudioStreamPlayer2D_wrapper_set_bus(wasgo_id, ((Variant) bus).get_wasgo_id());
}
void AudioStreamPlayer2D::set_pitch_scale(float p_pitch_scale){
	_wasgo_AudioStreamPlayer2D_wrapper_set_pitch_scale(wasgo_id, pitch_scale);
}
void AudioStreamPlayer2D::set_stream(AudioStream p_stream){
	_wasgo_AudioStreamPlayer2D_wrapper_set_stream(wasgo_id, ((Variant) stream).get_wasgo_id());
}
void AudioStreamPlayer2D::set_volume_db(float p_volume_db){
	_wasgo_AudioStreamPlayer2D_wrapper_set_volume_db(wasgo_id, volume_db);
}
void AudioStreamPlayer2D::stop(){
	_wasgo_AudioStreamPlayer2D_wrapper_stop(wasgo_id);
}

AudioStreamPlayer2D::AudioStreamPlayer2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
AudioStreamPlayer2D::~AudioStreamPlayer2D(){
}