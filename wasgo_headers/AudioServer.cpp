/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioServer.h"
void AudioServer::add_bus(int p_at_position = (int) -1){
	_wasgo_AudioServer_wrapper_add_bus(wasgo_id, p_at_position);
}
void AudioServer::add_bus_effect(int p_bus_idx, AudioEffect p_effect, int p_at_position = (int) -1){
	_wasgo_AudioServer_wrapper_add_bus_effect(wasgo_id, p_bus_idx, p_effect._get_wasgo_id(), p_at_position);
}
String AudioServer::capture_get_device(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AudioServer_wrapper_capture_get_device(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
Array AudioServer::capture_get_device_list(){
	return Array(_wasgo_AudioServer_wrapper_capture_get_device_list(wasgo_id));
}
void AudioServer::capture_set_device(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_AudioServer_wrapper_capture_set_device(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
AudioBusLayout AudioServer::generate_bus_layout(){
	return AudioBusLayout(_wasgo_AudioServer_wrapper_generate_bus_layout(wasgo_id));
}
int AudioServer::get_bus_channels(int p_bus_idx){
	return (int) _wasgo_AudioServer_wrapper_get_bus_channels(wasgo_id, p_bus_idx);
}
int AudioServer::get_bus_count(){
	return (int) _wasgo_AudioServer_wrapper_get_bus_count(wasgo_id);
}
AudioEffect AudioServer::get_bus_effect(int p_bus_idx, int p_effect_idx){
	return AudioEffect(_wasgo_AudioServer_wrapper_get_bus_effect(wasgo_id, p_bus_idx, p_effect_idx));
}
int AudioServer::get_bus_effect_count(int p_bus_idx){
	return (int) _wasgo_AudioServer_wrapper_get_bus_effect_count(wasgo_id, p_bus_idx);
}
AudioEffectInstance AudioServer::get_bus_effect_instance(int p_bus_idx, int p_effect_idx, int p_channel = (int) 0){
	return AudioEffectInstance(_wasgo_AudioServer_wrapper_get_bus_effect_instance(wasgo_id, p_bus_idx, p_effect_idx, p_channel));
}
int AudioServer::get_bus_index(String p_bus_name){

    Variant wasgo_var_bus_name = p_bus_name;
    int wasgo_size_bus_name = String(p_bus_name).size();
    uint8_t wasgo_buffer_bus_name[wasgo_size_bus_name];
    encode_variant(wasgo_var_bus_name, wasgo_buffer_bus_name, wasgo_size_bus_name);
    
	return (int) _wasgo_AudioServer_wrapper_get_bus_index(wasgo_id, wasgo_buffer_bus_name, wasgo_size_bus_name);
}
String AudioServer::get_bus_name(int p_bus_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AudioServer_wrapper_get_bus_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_bus_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
float AudioServer::get_bus_peak_volume_left_db(int p_bus_idx, int p_channel){
	return (float) _wasgo_AudioServer_wrapper_get_bus_peak_volume_left_db(wasgo_id, p_bus_idx, p_channel);
}
float AudioServer::get_bus_peak_volume_right_db(int p_bus_idx, int p_channel){
	return (float) _wasgo_AudioServer_wrapper_get_bus_peak_volume_right_db(wasgo_id, p_bus_idx, p_channel);
}
String AudioServer::get_bus_send(int p_bus_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AudioServer_wrapper_get_bus_send(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_bus_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
float AudioServer::get_bus_volume_db(int p_bus_idx){
	return (float) _wasgo_AudioServer_wrapper_get_bus_volume_db(wasgo_id, p_bus_idx);
}
String AudioServer::get_device(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AudioServer_wrapper_get_device(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
Array AudioServer::get_device_list(){
	return Array(_wasgo_AudioServer_wrapper_get_device_list(wasgo_id));
}
float AudioServer::get_global_rate_scale(){
	return (float) _wasgo_AudioServer_wrapper_get_global_rate_scale(wasgo_id);
}
float AudioServer::get_mix_rate(){
	return (float) _wasgo_AudioServer_wrapper_get_mix_rate(wasgo_id);
}
float AudioServer::get_output_latency(){
	return (float) _wasgo_AudioServer_wrapper_get_output_latency(wasgo_id);
}
AudioServer::SpeakerMode AudioServer::get_speaker_mode(){
	return AudioServer::SpeakerMode(_wasgo_AudioServer_wrapper_get_speaker_mode(wasgo_id));
}
float AudioServer::get_time_since_last_mix(){
	return (float) _wasgo_AudioServer_wrapper_get_time_since_last_mix(wasgo_id);
}
float AudioServer::get_time_to_next_mix(){
	return (float) _wasgo_AudioServer_wrapper_get_time_to_next_mix(wasgo_id);
}
bool AudioServer::is_bus_bypassing_effects(int p_bus_idx){
	return (bool) _wasgo_AudioServer_wrapper_is_bus_bypassing_effects(wasgo_id, p_bus_idx);
}
bool AudioServer::is_bus_effect_enabled(int p_bus_idx, int p_effect_idx){
	return (bool) _wasgo_AudioServer_wrapper_is_bus_effect_enabled(wasgo_id, p_bus_idx, p_effect_idx);
}
bool AudioServer::is_bus_mute(int p_bus_idx){
	return (bool) _wasgo_AudioServer_wrapper_is_bus_mute(wasgo_id, p_bus_idx);
}
bool AudioServer::is_bus_solo(int p_bus_idx){
	return (bool) _wasgo_AudioServer_wrapper_is_bus_solo(wasgo_id, p_bus_idx);
}
void AudioServer::lock(){
	_wasgo_AudioServer_wrapper_lock(wasgo_id);
}
void AudioServer::move_bus(int p_index, int p_to_index){
	_wasgo_AudioServer_wrapper_move_bus(wasgo_id, p_index, p_to_index);
}
void AudioServer::remove_bus(int p_index){
	_wasgo_AudioServer_wrapper_remove_bus(wasgo_id, p_index);
}
void AudioServer::remove_bus_effect(int p_bus_idx, int p_effect_idx){
	_wasgo_AudioServer_wrapper_remove_bus_effect(wasgo_id, p_bus_idx, p_effect_idx);
}
void AudioServer::set_bus_bypass_effects(int p_bus_idx, bool p_enable){
	_wasgo_AudioServer_wrapper_set_bus_bypass_effects(wasgo_id, p_bus_idx, p_enable);
}
void AudioServer::set_bus_count(int p_amount){
	_wasgo_AudioServer_wrapper_set_bus_count(wasgo_id, p_amount);
}
void AudioServer::set_bus_effect_enabled(int p_bus_idx, int p_effect_idx, bool p_enabled){
	_wasgo_AudioServer_wrapper_set_bus_effect_enabled(wasgo_id, p_bus_idx, p_effect_idx, p_enabled);
}
void AudioServer::set_bus_layout(AudioBusLayout p_bus_layout){
	_wasgo_AudioServer_wrapper_set_bus_layout(wasgo_id, p_bus_layout._get_wasgo_id());
}
void AudioServer::set_bus_mute(int p_bus_idx, bool p_enable){
	_wasgo_AudioServer_wrapper_set_bus_mute(wasgo_id, p_bus_idx, p_enable);
}
void AudioServer::set_bus_name(int p_bus_idx, String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_AudioServer_wrapper_set_bus_name(wasgo_id, p_bus_idx, wasgo_buffer_name, wasgo_size_name);
}
void AudioServer::set_bus_send(int p_bus_idx, String p_send){

    Variant wasgo_var_send = p_send;
    int wasgo_size_send = String(p_send).size();
    uint8_t wasgo_buffer_send[wasgo_size_send];
    encode_variant(wasgo_var_send, wasgo_buffer_send, wasgo_size_send);
    
	_wasgo_AudioServer_wrapper_set_bus_send(wasgo_id, p_bus_idx, wasgo_buffer_send, wasgo_size_send);
}
void AudioServer::set_bus_solo(int p_bus_idx, bool p_enable){
	_wasgo_AudioServer_wrapper_set_bus_solo(wasgo_id, p_bus_idx, p_enable);
}
void AudioServer::set_bus_volume_db(int p_bus_idx, float p_volume_db){
	_wasgo_AudioServer_wrapper_set_bus_volume_db(wasgo_id, p_bus_idx, p_volume_db);
}
void AudioServer::set_device(String p_device){

    Variant wasgo_var_device = p_device;
    int wasgo_size_device = String(p_device).size();
    uint8_t wasgo_buffer_device[wasgo_size_device];
    encode_variant(wasgo_var_device, wasgo_buffer_device, wasgo_size_device);
    
	_wasgo_AudioServer_wrapper_set_device(wasgo_id, wasgo_buffer_device, wasgo_size_device);
}
void AudioServer::set_global_rate_scale(float p_scale){
	_wasgo_AudioServer_wrapper_set_global_rate_scale(wasgo_id, p_scale);
}
void AudioServer::swap_bus_effects(int p_bus_idx, int p_effect_idx, int p_by_effect_idx){
	_wasgo_AudioServer_wrapper_swap_bus_effects(wasgo_id, p_bus_idx, p_effect_idx, p_by_effect_idx);
}
void AudioServer::unlock(){
	_wasgo_AudioServer_wrapper_unlock(wasgo_id);
}

AudioServer::AudioServer(WasGoId p_wasgo_id) : Object(p_wasgo_id){
}
AudioServer::AudioServer(Object other) : Object(other._get_wasgo_id()){
    wasgo_id = _wasgo_AudioServer_constructor();
}
AudioServer::new_instance(){
    return AudioServer(_wasgo_AudioServer_constructor());
}