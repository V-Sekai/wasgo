/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioStreamPlayer3D.h"
int AudioStreamPlayer3D::get_area_mask(){
	return (int) _wasgo_AudioStreamPlayer3D_wrapper_get_area_mask(wasgo_id);
}
float AudioStreamPlayer3D::get_attenuation_filter_cutoff_hz(){
	return (float) _wasgo_AudioStreamPlayer3D_wrapper_get_attenuation_filter_cutoff_hz(wasgo_id);
}
float AudioStreamPlayer3D::get_attenuation_filter_db(){
	return (float) _wasgo_AudioStreamPlayer3D_wrapper_get_attenuation_filter_db(wasgo_id);
}
AudioStreamPlayer3D::AttenuationModel AudioStreamPlayer3D::get_attenuation_model(){
	return AudioStreamPlayer3D::AttenuationModel(_wasgo_AudioStreamPlayer3D_wrapper_get_attenuation_model(wasgo_id));
}
String AudioStreamPlayer3D::get_bus(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AudioStreamPlayer3D_wrapper_get_bus(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
AudioStreamPlayer3D::DopplerTracking AudioStreamPlayer3D::get_doppler_tracking(){
	return AudioStreamPlayer3D::DopplerTracking(_wasgo_AudioStreamPlayer3D_wrapper_get_doppler_tracking(wasgo_id));
}
float AudioStreamPlayer3D::get_emission_angle(){
	return (float) _wasgo_AudioStreamPlayer3D_wrapper_get_emission_angle(wasgo_id);
}
float AudioStreamPlayer3D::get_emission_angle_filter_attenuation_db(){
	return (float) _wasgo_AudioStreamPlayer3D_wrapper_get_emission_angle_filter_attenuation_db(wasgo_id);
}
float AudioStreamPlayer3D::get_max_db(){
	return (float) _wasgo_AudioStreamPlayer3D_wrapper_get_max_db(wasgo_id);
}
float AudioStreamPlayer3D::get_max_distance(){
	return (float) _wasgo_AudioStreamPlayer3D_wrapper_get_max_distance(wasgo_id);
}
AudioStreamPlayer3D::OutOfRangeMode AudioStreamPlayer3D::get_out_of_range_mode(){
	return AudioStreamPlayer3D::OutOfRangeMode(_wasgo_AudioStreamPlayer3D_wrapper_get_out_of_range_mode(wasgo_id));
}
float AudioStreamPlayer3D::get_pitch_scale(){
	return (float) _wasgo_AudioStreamPlayer3D_wrapper_get_pitch_scale(wasgo_id);
}
float AudioStreamPlayer3D::get_playback_position(){
	return (float) _wasgo_AudioStreamPlayer3D_wrapper_get_playback_position(wasgo_id);
}
AudioStream AudioStreamPlayer3D::get_stream(){
	return AudioStream(_wasgo_AudioStreamPlayer3D_wrapper_get_stream(wasgo_id));
}
bool AudioStreamPlayer3D::get_stream_paused(){
	return (bool) _wasgo_AudioStreamPlayer3D_wrapper_get_stream_paused(wasgo_id);
}
AudioStreamPlayback AudioStreamPlayer3D::get_stream_playback(){
	return AudioStreamPlayback(_wasgo_AudioStreamPlayer3D_wrapper_get_stream_playback(wasgo_id));
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
bool AudioStreamPlayer3D::is_emission_angle_enabled(){
	return (bool) _wasgo_AudioStreamPlayer3D_wrapper_is_emission_angle_enabled(wasgo_id);
}
bool AudioStreamPlayer3D::is_playing(){
	return (bool) _wasgo_AudioStreamPlayer3D_wrapper_is_playing(wasgo_id);
}
void AudioStreamPlayer3D::play(float p_from_position){
	_wasgo_AudioStreamPlayer3D_wrapper_play(wasgo_id, p_from_position);
}
void AudioStreamPlayer3D::seek(float p_to_position){
	_wasgo_AudioStreamPlayer3D_wrapper_seek(wasgo_id, p_to_position);
}
void AudioStreamPlayer3D::set_area_mask(int p_mask){
	_wasgo_AudioStreamPlayer3D_wrapper_set_area_mask(wasgo_id, p_mask);
}
void AudioStreamPlayer3D::set_attenuation_filter_cutoff_hz(float p_degrees){
	_wasgo_AudioStreamPlayer3D_wrapper_set_attenuation_filter_cutoff_hz(wasgo_id, p_degrees);
}
void AudioStreamPlayer3D::set_attenuation_filter_db(float p_db){
	_wasgo_AudioStreamPlayer3D_wrapper_set_attenuation_filter_db(wasgo_id, p_db);
}
void AudioStreamPlayer3D::set_attenuation_model(AudioStreamPlayer3D::AttenuationModel p_model){
	_wasgo_AudioStreamPlayer3D_wrapper_set_attenuation_model(wasgo_id, p_model._get_wasgo_id());
}
void AudioStreamPlayer3D::set_autoplay(bool p_enable){
	_wasgo_AudioStreamPlayer3D_wrapper_set_autoplay(wasgo_id, p_enable);
}
void AudioStreamPlayer3D::set_bus(String p_bus){

    Variant wasgo_var_bus = p_bus;
    int wasgo_size_bus = String(p_bus).size();
    uint8_t wasgo_buffer_bus[wasgo_size_bus];
    encode_variant(wasgo_var_bus, wasgo_buffer_bus, wasgo_size_bus);
    
	_wasgo_AudioStreamPlayer3D_wrapper_set_bus(wasgo_id, wasgo_buffer_bus, wasgo_size_bus);
}
void AudioStreamPlayer3D::set_doppler_tracking(AudioStreamPlayer3D::DopplerTracking p_mode){
	_wasgo_AudioStreamPlayer3D_wrapper_set_doppler_tracking(wasgo_id, p_mode._get_wasgo_id());
}
void AudioStreamPlayer3D::set_emission_angle(float p_degrees){
	_wasgo_AudioStreamPlayer3D_wrapper_set_emission_angle(wasgo_id, p_degrees);
}
void AudioStreamPlayer3D::set_emission_angle_enabled(bool p_enabled){
	_wasgo_AudioStreamPlayer3D_wrapper_set_emission_angle_enabled(wasgo_id, p_enabled);
}
void AudioStreamPlayer3D::set_emission_angle_filter_attenuation_db(float p_db){
	_wasgo_AudioStreamPlayer3D_wrapper_set_emission_angle_filter_attenuation_db(wasgo_id, p_db);
}
void AudioStreamPlayer3D::set_max_db(float p_max_db){
	_wasgo_AudioStreamPlayer3D_wrapper_set_max_db(wasgo_id, p_max_db);
}
void AudioStreamPlayer3D::set_max_distance(float p_metres){
	_wasgo_AudioStreamPlayer3D_wrapper_set_max_distance(wasgo_id, p_metres);
}
void AudioStreamPlayer3D::set_out_of_range_mode(AudioStreamPlayer3D::OutOfRangeMode p_mode){
	_wasgo_AudioStreamPlayer3D_wrapper_set_out_of_range_mode(wasgo_id, p_mode._get_wasgo_id());
}
void AudioStreamPlayer3D::set_pitch_scale(float p_pitch_scale){
	_wasgo_AudioStreamPlayer3D_wrapper_set_pitch_scale(wasgo_id, p_pitch_scale);
}
void AudioStreamPlayer3D::set_stream(AudioStream p_stream){
	_wasgo_AudioStreamPlayer3D_wrapper_set_stream(wasgo_id, p_stream._get_wasgo_id());
}
void AudioStreamPlayer3D::set_stream_paused(bool p_pause){
	_wasgo_AudioStreamPlayer3D_wrapper_set_stream_paused(wasgo_id, p_pause);
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

AudioStreamPlayer3D::AudioStreamPlayer3D(WasGoID p_wasgo_id) : Spatial(p_wasgo_id){
}
AudioStreamPlayer3D::AudioStreamPlayer3D(Spatial other) : Spatial(other._get_wasgo_id()){
}
AudioStreamPlayer3D::AudioStreamPlayer3D():Spatial(){
}
AudioStreamPlayer3D AudioStreamPlayer3D::new_instance(){
    return AudioStreamPlayer3D(_wasgo_AudioStreamPlayer3D_constructor());
}
WasGoID AudioStreamPlayer3D::_get_wasgo_id(){
    return wasgo_id;
}
AudioStreamPlayer3D::operator bool(){
    return (bool) wasgo_id;
}
