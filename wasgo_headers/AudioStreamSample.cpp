/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioStreamSample.h"
PoolByteArray AudioStreamSample::get_data(){
	return PoolByteArray(_wasgo_AudioStreamSample_wrapper_get_data(wasgo_id));
}
AudioStreamSample::Format AudioStreamSample::get_format(){
	return AudioStreamSample::Format(_wasgo_AudioStreamSample_wrapper_get_format(wasgo_id));
}
int AudioStreamSample::get_loop_begin(){
	return (int) _wasgo_AudioStreamSample_wrapper_get_loop_begin(wasgo_id);
}
int AudioStreamSample::get_loop_end(){
	return (int) _wasgo_AudioStreamSample_wrapper_get_loop_end(wasgo_id);
}
AudioStreamSample::LoopMode AudioStreamSample::get_loop_mode(){
	return AudioStreamSample::LoopMode(_wasgo_AudioStreamSample_wrapper_get_loop_mode(wasgo_id));
}
int AudioStreamSample::get_mix_rate(){
	return (int) _wasgo_AudioStreamSample_wrapper_get_mix_rate(wasgo_id);
}
bool AudioStreamSample::is_stereo(){
	return (bool) _wasgo_AudioStreamSample_wrapper_is_stereo(wasgo_id);
}
Error AudioStreamSample::save_to_wav(String p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Error(_wasgo_AudioStreamSample_wrapper_save_to_wav(wasgo_id, wasgo_buffer_path, wasgo_size_path));
}
void AudioStreamSample::set_data(PoolByteArray p_data){
	_wasgo_AudioStreamSample_wrapper_set_data(wasgo_id, p_data._get_wasgo_id());
}
void AudioStreamSample::set_format(AudioStreamSample::Format p_format){
	_wasgo_AudioStreamSample_wrapper_set_format(wasgo_id, p_format._get_wasgo_id());
}
void AudioStreamSample::set_loop_begin(int p_loop_begin){
	_wasgo_AudioStreamSample_wrapper_set_loop_begin(wasgo_id, p_loop_begin);
}
void AudioStreamSample::set_loop_end(int p_loop_end){
	_wasgo_AudioStreamSample_wrapper_set_loop_end(wasgo_id, p_loop_end);
}
void AudioStreamSample::set_loop_mode(AudioStreamSample::LoopMode p_loop_mode){
	_wasgo_AudioStreamSample_wrapper_set_loop_mode(wasgo_id, p_loop_mode._get_wasgo_id());
}
void AudioStreamSample::set_mix_rate(int p_mix_rate){
	_wasgo_AudioStreamSample_wrapper_set_mix_rate(wasgo_id, p_mix_rate);
}
void AudioStreamSample::set_stereo(bool p_stereo){
	_wasgo_AudioStreamSample_wrapper_set_stereo(wasgo_id, p_stereo);
}

AudioStreamSample::AudioStreamSample(WasGoID p_wasgo_id) : AudioStream(p_wasgo_id){
}
AudioStreamSample::AudioStreamSample(AudioStream other) : AudioStream(other._get_wasgo_id()){
    wasgo_id = _wasgo_AudioStreamSample_constructor();
}
AudioStreamSample::new_instance(){
    return AudioStreamSample(_wasgo_AudioStreamSample_constructor());
}