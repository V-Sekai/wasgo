/* THIS FILE IS GENERATED */
#include "AudioStreamPlayer3D.h"
String AudioStreamPlayer3D::get_bus(){
	return String::from_wasgo_id(_wasgo_AudioStreamPlayer3D_wrapper_get_bus(wasgo_id));
}
float AudioStreamPlayer3D::get_max_db(){
	return (float) _wasgo_AudioStreamPlayer3D_wrapper_get_max_db(wasgo_id);
}
float AudioStreamPlayer3D::get_pitch_scale(){
	return (float) _wasgo_AudioStreamPlayer3D_wrapper_get_pitch_scale(wasgo_id);
}
float AudioStreamPlayer3D::get_playback_position(){
	return (float) _wasgo_AudioStreamPlayer3D_wrapper_get_playback_position(wasgo_id);
}
AudioStream AudioStreamPlayer3D::get_stream(){
	return AudioStream::from_wasgo_id(_wasgo_AudioStreamPlayer3D_wrapper_get_stream(wasgo_id));
}
float AudioStreamPlayer3D::get_unit_db(){
	return (float) _wasgo_AudioStreamPlayer3D_wrapper_get_unit_db(wasgo_id);
}
float AudioStreamPlayer3D::get_unit_size(){
	return (float) _wasgo_AudioStreamPlayer3D_wrapper_get_unit_size(wasgo_id);
}
bool AudioStreamPlayer3D::is_autoplay_enabled(){
	return (bool) _wasgo_AudioStreamPlayer3D_wrapper_is_autoplay_enabled(wasgo_id);
}
bool AudioStreamPlayer3D::is_playing(){
	return (bool) _wasgo_AudioStreamPlayer3D_wrapper_is_playing(wasgo_id);
}
void AudioStreamPlayer3D::play(float p_from_position = (float) 0){
	_wasgo_AudioStreamPlayer3D_wrapper_play(wasgo_id, p_from_position);
}
void AudioStreamPlayer3D::seek(float p_to_position){
	_wasgo_AudioStreamPlayer3D_wrapper_seek(wasgo_id, p_to_position);
}
void AudioStreamPlayer3D::set_autoplay(bool p_enable){
	_wasgo_AudioStreamPlayer3D_wrapper_set_autoplay(wasgo_id, p_enable);
}
void AudioStreamPlayer3D::set_bus(String p_bus){
	_wasgo_AudioStreamPlayer3D_wrapper_set_bus(wasgo_id, ((Variant) p_bus).get_wasgo_id());
}
void AudioStreamPlayer3D::set_max_db(float p_max_db){
	_wasgo_AudioStreamPlayer3D_wrapper_set_max_db(wasgo_id, p_max_db);
}
void AudioStreamPlayer3D::set_pitch_scale(float p_pitch_scale){
	_wasgo_AudioStreamPlayer3D_wrapper_set_pitch_scale(wasgo_id, p_pitch_scale);
}
void AudioStreamPlayer3D::set_stream(AudioStream p_stream){
	_wasgo_AudioStreamPlayer3D_wrapper_set_stream(wasgo_id, ((Variant) p_stream).get_wasgo_id());
}
void AudioStreamPlayer3D::set_unit_db(float p_unit_db){
	_wasgo_AudioStreamPlayer3D_wrapper_set_unit_db(wasgo_id, p_unit_db);
}
void AudioStreamPlayer3D::set_unit_size(float p_unit_size){
	_wasgo_AudioStreamPlayer3D_wrapper_set_unit_size(wasgo_id, p_unit_size);
}
void AudioStreamPlayer3D::stop(){
	_wasgo_AudioStreamPlayer3D_wrapper_stop(wasgo_id);
}