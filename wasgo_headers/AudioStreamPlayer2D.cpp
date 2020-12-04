/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioStreamPlayer2D.h"
int AudioStreamPlayer2D::get_area_mask(){
	return (int) _wasgo_AudioStreamPlayer2D_wrapper_get_area_mask(wasgo_id);
}
float AudioStreamPlayer2D::get_attenuation(){
	return (float) _wasgo_AudioStreamPlayer2D_wrapper_get_attenuation(wasgo_id);
}
String AudioStreamPlayer2D::get_bus(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AudioStreamPlayer2D_wrapper_get_bus(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
float AudioStreamPlayer2D::get_max_distance(){
	return (float) _wasgo_AudioStreamPlayer2D_wrapper_get_max_distance(wasgo_id);
}
float AudioStreamPlayer2D::get_pitch_scale(){
	return (float) _wasgo_AudioStreamPlayer2D_wrapper_get_pitch_scale(wasgo_id);
}
float AudioStreamPlayer2D::get_playback_position(){
	return (float) _wasgo_AudioStreamPlayer2D_wrapper_get_playback_position(wasgo_id);
}
AudioStream AudioStreamPlayer2D::get_stream(){
	return AudioStream(_wasgo_AudioStreamPlayer2D_wrapper_get_stream(wasgo_id));
}
bool AudioStreamPlayer2D::get_stream_paused(){
	return (bool) _wasgo_AudioStreamPlayer2D_wrapper_get_stream_paused(wasgo_id);
}
AudioStreamPlayback AudioStreamPlayer2D::get_stream_playback(){
	return AudioStreamPlayback(_wasgo_AudioStreamPlayer2D_wrapper_get_stream_playback(wasgo_id));
}
float AudioStreamPlayer2D::get_volume_db(){
	return (float) _wasgo_AudioStreamPlayer2D_wrapper_get_volume_db(wasgo_id);
}
bool AudioStreamPlayer2D::is_autoplay_enabled(){
	return (bool) _wasgo_AudioStreamPlayer2D_wrapper_is_autoplay_enabled(wasgo_id);
}
bool AudioStreamPlayer2D::is_playing(){
	return (bool) _wasgo_AudioStreamPlayer2D_wrapper_is_playing(wasgo_id);
}
void AudioStreamPlayer2D::play(float p_from_position = (float) 0){
	_wasgo_AudioStreamPlayer2D_wrapper_play(wasgo_id, p_from_position);
}
void AudioStreamPlayer2D::seek(float p_to_position){
	_wasgo_AudioStreamPlayer2D_wrapper_seek(wasgo_id, p_to_position);
}
void AudioStreamPlayer2D::set_area_mask(int p_mask){
	_wasgo_AudioStreamPlayer2D_wrapper_set_area_mask(wasgo_id, p_mask);
}
void AudioStreamPlayer2D::set_attenuation(float p_curve){
	_wasgo_AudioStreamPlayer2D_wrapper_set_attenuation(wasgo_id, p_curve);
}
void AudioStreamPlayer2D::set_autoplay(bool p_enable){
	_wasgo_AudioStreamPlayer2D_wrapper_set_autoplay(wasgo_id, p_enable);
}
void AudioStreamPlayer2D::set_bus(String p_bus){

    Variant wasgo_var_bus = p_bus;
    int wasgo_size_bus = String(p_bus).size();
    uint8_t wasgo_buffer_bus[wasgo_size_bus];
    encode_variant(wasgo_var_bus, wasgo_buffer_bus, wasgo_size_bus);
    
	_wasgo_AudioStreamPlayer2D_wrapper_set_bus(wasgo_id, wasgo_buffer_bus, wasgo_size_bus);
}
void AudioStreamPlayer2D::set_max_distance(float p_pixels){
	_wasgo_AudioStreamPlayer2D_wrapper_set_max_distance(wasgo_id, p_pixels);
}
void AudioStreamPlayer2D::set_pitch_scale(float p_pitch_scale){
	_wasgo_AudioStreamPlayer2D_wrapper_set_pitch_scale(wasgo_id, p_pitch_scale);
}
void AudioStreamPlayer2D::set_stream(AudioStream p_stream){
	_wasgo_AudioStreamPlayer2D_wrapper_set_stream(wasgo_id, p_stream._get_wasgo_id());
}
void AudioStreamPlayer2D::set_stream_paused(bool p_pause){
	_wasgo_AudioStreamPlayer2D_wrapper_set_stream_paused(wasgo_id, p_pause);
}
void AudioStreamPlayer2D::set_volume_db(float p_volume_db){
	_wasgo_AudioStreamPlayer2D_wrapper_set_volume_db(wasgo_id, p_volume_db);
}
void AudioStreamPlayer2D::stop(){
	_wasgo_AudioStreamPlayer2D_wrapper_stop(wasgo_id);
}

AudioStreamPlayer2D::AudioStreamPlayer2D(WasGoId p_wasgo_id) : Node2D(p_wasgo_id){
}
AudioStreamPlayer2D::AudioStreamPlayer2D(Node2D other) : Node2D(other._get_wasgo_id()){
    wasgo_id = _wasgo_AudioStreamPlayer2D_constructor();
}
AudioStreamPlayer2D::new_instance(){
    return AudioStreamPlayer2D(_wasgo_AudioStreamPlayer2D_constructor());
}