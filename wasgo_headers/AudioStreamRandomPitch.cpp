/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioStreamRandomPitch.h"
AudioStream AudioStreamRandomPitch::get_audio_stream(){
	return AudioStream(_wasgo_AudioStreamRandomPitch_wrapper_get_audio_stream(wasgo_id));
}
float AudioStreamRandomPitch::get_random_pitch(){
	return (float) _wasgo_AudioStreamRandomPitch_wrapper_get_random_pitch(wasgo_id);
}
void AudioStreamRandomPitch::set_audio_stream(AudioStream p_stream){
	_wasgo_AudioStreamRandomPitch_wrapper_set_audio_stream(wasgo_id, p_stream._get_wasgo_id());
}
void AudioStreamRandomPitch::set_random_pitch(float p_scale){
	_wasgo_AudioStreamRandomPitch_wrapper_set_random_pitch(wasgo_id, p_scale);
}

AudioStreamRandomPitch::AudioStreamRandomPitch(WasGoID p_wasgo_id) : AudioStream(p_wasgo_id){
}
AudioStreamRandomPitch::AudioStreamRandomPitch(AudioStream other) : AudioStream(other._get_wasgo_id()){
}
AudioStreamRandomPitch::AudioStreamRandomPitch():AudioStream(){
}
AudioStreamRandomPitch AudioStreamRandomPitch::new_instance(){
    return AudioStreamRandomPitch(_wasgo_AudioStreamRandomPitch_constructor());
}
WasGoID AudioStreamRandomPitch::_get_wasgo_id(){
    return wasgo_id;
}
AudioStreamRandomPitch::operator bool(){
    return (bool) wasgo_id;
}
